#!/bin/bash

SRC_DIR="."
OUT_DIR="compiled"

mkdir -p "$OUT_DIR"

echo "=============================="
echo "Compiling all C files..."
echo "=============================="

for f in "$SRC_DIR"/*.c; do
  name=$(basename "$f" .c)
  echo "Compiling $f -> $OUT_DIR/$name"
  gcc "$f" -o "$OUT_DIR/$name" || echo "❌ Failed to compile $f"
done

echo ""
echo "=============================="
echo "Running all compiled programs"
echo "=============================="

i=1
for f in "$SRC_DIR"/*.c; do
  name=$(basename "$f" .c)
  prog="$OUT_DIR/$name"

  if [ -x "$prog" ]; then
    echo ""
    echo "[$i] Running $name"
    echo "------------------------------"
    "$prog"
    i=$((i+1))
  fi
done
