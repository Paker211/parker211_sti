#!/bin/bash

# find man

match1="/tmp/$0.1.$$"
matches="/tmp/$0.$$"

trap "rm -f $match1 $matches" EXIT

case $# in
  3 ) section="$1" cmdpat="$2" manpagepat="$3" ;;
  2 ) section=""   cmdpat="$1" manpagepat="$2" ;;
  * ) echo "Usage: $0 [section] cmdpattern manpagetern" >&2 ; exit 1
esac

if ! man -k "$cmdpat" | grep "$section" > $match1 ; then
  echo "No matches to pattern \"$cmdpat\". Try something broader?"
  exit 1
fi

cut -d\ -f1 < $match1 > $matches
cat /dev/null > match1


for manpage in $(cat $matches)
do
  manpagelist="$manpagelist $manpage"
  man $manpage | col -b | grep -i $manpagepat | sed "s/^/${manapage}: /" | tee -a $match1
done

if [ ! -s $match1 ] ; then
cat << EOF
Command pattern "$cmdpat" had matches, but within those there were no
matches to your man page pattern "$manpagepat" found in that set.
Man pages checked:$manpagelist
EOF
fi

exit 0

