# Conquer Online v6159 — Decompiled Server Source

Complete decompiled source for the **Conquer Online v6159 private-server package** (the original MediaFire archive contained **no source code at all** — only compiled binaries and game data).

The decompilation was produced with the **[REA](https://github.com/morluto/rea) reverse-engineering workflow** using its **Ghidra 12.1.4** backend, plus **ILSpy 8.2** for the .NET components and a BAML→XAML pass.

## What's inside

| Folder | Contents | Quality |
|---|---|---|
| `AccountServer-CSharp/` | Full C# source of `AccountServerBinary2015` (WPF app: login/auth, SRP6, ciphers, MySQL) decompiled by ILSpy, with BAML converted to real XAML and a fixed `.csproj` | **Near-original, readable, buildable on Windows (`dotnet build`, .NET 8)** |
| `Native-Decompiled/` | One `<binary>.decompiled.c` per native binary (`MsgServer.exe`, `NpcServer.exe`, `CQCrossServer.exe` and ~45 game DLLs: Family, Lottery, Syndicate, Trade, Guild systems…) exported from Ghidra, plus `<binary>.index.tsv` function indexes | **Readable C-like pseudocode** — great for studying/patching logic, **not compilable as-is** |

## Original package contents (for reference)

- `Source/` — 45+ native game DLLs + `MsgServer.exe` (11 MB), `NpcServer.exe`, `CQCrossServer.exe`
- `AccountServer/` — .NET 8 WPF account/auth server (this is the C# part here)
- `patch/`, `cq.sql` — game data, SQL schema

## How this was produced (reproducible)

1. `rea doctor` / `rea analyze` — REA + Ghidra headless (JDK 21) drive the analysis.
2. `tools/batch_decompile.sh` — imports every binary into a Ghidra project and runs `tools/DecompileAll.java`, exporting decompiled C for every function.
3. `ilspycmd AccountServerBinary2015.dll -p` — C# project decompilation; `ICSharpCode.BamlDecompiler` converts `app.baml`/`mainwindow.baml` to XAML; `AccountServerBinary2015.csproj` fixed to `net8.0-windows` with proper `<ApplicationDefinition>/<Page>` items.

## Notes & caveats

- Ghidra pseudocode is **not** directly compilable C++; names of stripped functions are auto-generated (`FUN_00401000` etc.). Use it to read logic, port features, or patch binaries.
- The C# side (AccountServer) is effectively **editable source** — decompilation of managed code preserves names, structure and comments are lost but code compiles back.
- Conquer Online is © TQ Digital. Public redistribution of decompiled server code may face DMCA — keep that in mind for this repo's visibility.
