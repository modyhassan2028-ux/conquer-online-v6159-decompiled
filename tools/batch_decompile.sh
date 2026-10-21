#!/bin/bash
W=/app/conversations/6ad8ed949883f31f1959689c
export GHIDRA_INSTALL_DIR=/opt/ghidra
export JAVA_HOME=/opt/jdk
export PATH="/opt/jdk/bin:$PATH"
SRC="$W/conquer_src/Source"
OUT="$W/decompiled/native"
TARGETS=$(ls "$SRC"/*.dll "$SRC"/*.exe | grep -viE "libmySQL|libeay32|mfc42|Msvcp60|dbghelp|zlibwapi|Lottery" )
# MsgServer last (biggest)
TARGETS=$(echo "$TARGETS" | grep -v MsgServer)
TARGETS="$TARGETS $SRC/MsgServer.exe"
mkdir -p "$OUT"
for f in $TARGETS; do
  name=$(basename "$f")
  echo "=== BATCH_START $name $(date -u +%H:%M:%S) ==="
  /opt/ghidra/support/analyzeHeadless "$W/ghidra_proj" ConquerProj -import "$f" -scriptPath "$W/ghidra_scripts" -postScript DecompileAll.java "$OUT" 2>&1 | grep -E "DONE DecompileAll|ERROR REPORT|Import succeeded" | head -3
  echo "=== BATCH_END $name $(date -u +%H:%M:%S) ==="
done
echo "BATCH_ALL_DONE"
