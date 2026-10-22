#!/usr/bin/env python3
"""Extract MSVC x64 RTTI: class name -> vtable address -> virtual function addresses."""
import pefile, struct, sys, json, re, collections
pe = pefile.PE(sys.argv[1], fast_load=True)
base = pe.OPTIONAL_HEADER.ImageBase
data = {}
secs = []
for s in pe.sections:
    n = s.Name.rstrip(b'\0').decode()
    d = s.get_data(); va = base + s.VirtualAddress
    secs.append((n, va, len(d), s.Characteristics, d))
def sec_of(a):
    for n, va, l, ch, d in secs:
        if va <= a < va + l: return n, va, d
    return None
def rd(a, fmt, n):
    r = sec_of(a)
    if not r: return None
    _, va, d = r; o = a - va
    if o + n > len(d): return None
    return struct.unpack_from(fmt, d, o)[0]
# 1. TypeDescriptors: ".?AV...@@" strings. TD address = string address - 0x10
tds = {}
for n, va, l, ch, d in secs:
    for m in re.finditer(rb'\.\?AV([A-Za-z0-9_@?$<>,*&: ]+?)@@\x00', d):
        name = m.group(1).decode('latin1')
        tds[va + m.start() - 0x10] = name
print("typedescriptors:", len(tds))
rva = lambda a: a - base
# 2. COLs live in .rdata: signature(4)=1, offset, cdOffset, pTypeDescriptor rva (4), pClassDescriptor rva, pSelf rva
cols = {}
for n, va, l, ch, d in secs:
    if n not in ('.rdata', '.data'): continue
    for o in range(0, l - 24, 4):
        sig, off, cd, tdr, chr_, selr = struct.unpack_from('<6I', d, o)
        if sig == 1 and base + tdr in tds and selr == (va + o - base):
            cols[va + o] = (tds[base + tdr], off)
print("COLs:", len(cols))
# 3. vtable = 8-byte pointer to COL, followed by function pointers
col_ptr = {}
for n, va, l, ch, d in secs:
    if n not in ('.rdata', '.data'): continue
    for o in range(0, l - 8, 8):
        p = struct.unpack_from('<Q', d, o)[0]
        if p in cols: col_ptr.setdefault(p, []).append(va + o + 8)
text = [s for s in secs if s[0] == '.text'][0]
tva, tlen = text[1], text[2]
vt = collections.defaultdict(list)
for col, vtaddrs in col_ptr.items():
    cname, off = cols[col]
    for vta in vtaddrs:
        fns = []
        a = vta
        while True:
            p = rd(a, '<Q', 8)
            if p is None or not (tva <= p < tva + tlen): break
            fns.append(p); a += 8
        vt[cname].append({'vtable': vta, 'offset': off, 'funcs': fns})
json.dump({k: v for k, v in vt.items()}, open(sys.argv[2], 'w'))
print("classes with vtables:", len(vt), " total virtual slots:", sum(len(x['funcs']) for v in vt.values() for x in v))
