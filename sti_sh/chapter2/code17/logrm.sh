#!/bin/bash

# logrm

removelog="/tmp/remove.log"

if [ $# -eq 0 ] ; then
  echo "Usage: $0 [-s] list of files or directories" >&2
  exit 1
fi

if [ "$1" = "-s" ] ; then
  shift  # Don't log
else
  echo "$(date): ${USER}: $@" >> $removelog
fi

/bin/rm "$@"

exit 0

