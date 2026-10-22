#!/usr/bin/env python3
"""Build a name index for the decompiled MsgServer.exe.
Strategy for each FUN_ function:
 1. vtable assignment  `*param_1 = CFoo::vftable`  -> constructor/dtor of CFoo
 2. log strings 'CFoo::Bar(' inside body        -> CFoo::Bar (strong)
 3. calls to named methods on param_1 type       -> class hint (weak)
 4. param_1 type `CFoo *`                         -> class hint (weak)
Output: names.tsv (addr, size, name, confidence, evidence) + per-class files.
"""
import re, sys, collections, json
src = sys.argv[1]; out = sys.argv[2]
txt = open(src, encoding='utf-8', errors='replace').read()
parts = re.split(r'^// =+\n// Function: (.+?) @ ([0-9a-f]+)\n// =+\n', txt, flags=re.M)
# parts: [pre, name, addr, body, name, addr, body...]
funcs = []
for i in range(1, len(parts), 3):
    funcs.append((parts[i], parts[i+1], parts[i+2]))
print("functions:", len(funcs))
logre = re.compile(r'"(C[A-Za-z0-9_]+)::([A-Za-z0-9_~]+)\s*\(')
vtre  = re.compile(r'= (C[A-Za-z0-9_]+)::vftable;')
p1re  = re.compile(r'^[^\n(]*?\(\s*(C[A-Za-z0-9_]+)\s*\*\s*param_1', re.M)
rows = []
stat = collections.Counter()
for name, addr, body in funcs:
    if not name.startswith(('FUN_', 'thunk_FUN_')):
        rows.append((addr, len(body), name, 'original', 'ghidra-symbol')); stat['original'] += 1; continue
    m = logre.search(body)
    if m:
        rows.append((addr, len(body), f"{m.group(1)}::{m.group(2)}", 'high', 'log-string')); stat['high_log'] += 1; continue
    m = vtre.search(body)
    if m:
        cls = m.group(1)
        rows.append((addr, len(body), f"{cls}::ctor_or_dtor", 'high', 'vtable-assign')); stat['high_vtable'] += 1; continue
    m = p1re.search(body)
    if m:
        rows.append((addr, len(body), f"{m.group(1)}::method_{addr}", 'medium', 'param1-type')); stat['medium_param1'] += 1; continue
    rows.append((addr, len(body), name, 'none', '')); stat['unnamed'] += 1
with open(out + '/names.tsv', 'w') as f:
    f.write('address\tbody_chars\tname\tconfidence\tevidence\n')
    for r in rows: f.write('\t'.join(map(str, r)) + '\n')
cls = collections.defaultdict(list)
for a, s, n, c, e in rows:
    if '::' in n and c != 'none': cls[n.split('::')[0]].append((a, n, c))
json.dump({k: len(v) for k, v in sorted(cls.items(), key=lambda x: -len(x[1]))}, open(out + '/class_counts.json', 'w'), indent=1)
print(dict(stat)); print("classes with funcs:", len(cls))
