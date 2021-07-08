#!/bin/bash

# nfmt

while getopts "hw:" opt ; do
  case $opt in
    h ) hyph=1 ;;
    w ) width="$OPTARG" ;;
  esac
done

shift << EOF
.ll ${width:-72}
.na
.hy ${hyph:-0}
.p1 1
$(cat "$@")
EOF

exit 0
