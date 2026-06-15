#!/bin/bash
NAME="Inika Mishra"

for i in {31..40}
do
  echo "=> $i.py"
  echo "--------"

  python3 $i.py

  echo " $NAME"
  echo ""
done
