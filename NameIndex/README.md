# MsgServer.exe name index

Recovers class/method names for the decompiled `MsgServer.exe` (59,977 functions).

Sources (confidence): `original` Ghidra symbol (31,921), `high` RTTI vtable slot / vtable-assign ctor / log-string (5,667),
`medium` call-graph ownership propagation (7,622: class is probably right, method is a `helper_<addr>`), `none` (14,767, mostly CRT/STL).

Files: `names_final.tsv` (address, name, confidence, evidence), `vtables.json` (628 RTTI classes with virtual function addresses),
`class_function_counts.json`, `by_class.tar.gz` (one .c per class, 478 classes). Rebuild with `tools/rtti_vtables.py`,
`tools/build_name_index.py`, `tools/merge_index.py`, `tools/propagate_names.py` against the original `Source/MsgServer.exe`.
