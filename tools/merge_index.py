#!/usr/bin/env python3
import json, csv, re, collections, sys
names = {}
rows = list(csv.reader(open('index/names.tsv'), delimiter='\t'))[1:]
vt = json.load(open('index/vtables.json'))
# addr (hex str) -> (name, conf, evidence)
idx = {r[0]: [r[2], r[3], r[4]] for r in rows}
added = collections.Counter()
for cls, lst in vt.items():
    for v in lst:
        for slot, fa in enumerate(v['funcs']):
            key = format(fa, 'x')
            cur = idx.get(key)
            nm = f"{cls}::vfunc_{slot}"
            if cur is None: continue
            if cur[1] in ('none', 'medium'):
                idx[key] = [nm, 'high', 'rtti-vtable']; added['rtti_named'] += 1
            elif cur[1] == 'high' and cur[2] == 'vtable-assign':
                pass
# ctor/dtor are vtable-assign: keep. Now propagate: unnamed callee called ONLY from methods of one class
with open('index/names_merged.tsv', 'w') as f:
    f.write('address\tname\tconfidence\tevidence\n')
    for a, (n, c, e) in idx.items(): f.write(f"{a}\t{n}\t{c}\t{e}\n")
tot = collections.Counter(c for n, c, e in idx.values())
print(dict(added)); print(dict(tot))
unn = tot['none']; print("remaining unnamed:", unn, "of", len(idx))
