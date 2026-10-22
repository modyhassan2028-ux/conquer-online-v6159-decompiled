#!/usr/bin/env python3
"""Propagate class ownership: unnamed function called only by named methods of one class -> belongs to that class (medium)."""
import re, csv, collections
txt = open('conquer-online-v6159-decompiled/Native-Decompiled/MsgServer.exe.decompiled.c', encoding='utf-8', errors='replace').read()
rows = list(csv.reader(open('index/names_merged.tsv'), delimiter='\t'))[1:]
idx = {r[0]: r[1:] for r in rows}
parts = re.split(r'^// =+\n// Function: (.+?) @ ([0-9a-f]+)\n// =+\n', txt, flags=re.M)
bodies = {parts[i+1]: parts[i+2] for i in range(1, len(parts), 3)}
callre = re.compile(r'\bFUN_([0-9a-f]{9})\b')
def cls_of(n):
    return n.split('::')[0] if '::' in n else None
for rnd in range(4):
    callers = collections.defaultdict(set)
    for a, b in bodies.items():
        c = cls_of(idx[a][0]) if a in idx else None
        if not c or idx[a][1] == 'none': continue
        for m in callre.finditer(b):
            callers[m.group(1)].add(c)
    n = 0
    for callee, cs in callers.items():
        if callee in idx and idx[callee][1] == 'none' and len(cs) == 1:
            c = next(iter(cs))
            idx[callee] = [f"{c}::helper_{callee}", 'medium', f'callgraph-r{rnd}']; n += 1
    print("round", rnd, "named", n)
    if n == 0: break
with open('index/names_final.tsv', 'w') as f:
    f.write('address\tname\tconfidence\tevidence\n')
    for a, v in idx.items(): f.write(f"{a}\t{v[0]}\t{v[1]}\t{v[2]}\n")
t = collections.Counter(v[1] for v in idx.values()); print(dict(t))
