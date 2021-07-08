#!/bin/bash

# newrm

mydir="$HOME/.deleted-files"
realrm="/bin/rm"
copy="/bin/cp -R"

if [ $# -eq 0 ] ; then
  exec $realrm
fi

# Analyze all Argument
flags=""

while getopts "dfiPRrvW" opt ; do
  case $opt in
    f ) exec $realrm "$@" ;;
    * ) flags="$flags -$opt" ;;
  esac
done
shift $(( $OPTIND - 1 ))

# Confirm $mydir wether exist
if [ ! -d $mydir ] ; then
  if [ ! -w $HOME ] ; then
    echo "$0 failed: cna't create $mydir in $HOME" >&2
    exit 1
  fi
  mkdir $mydir
  chmod 700 $mydir
fi

for arg
do
  newname="$mydir/$(date "+%S.%M.%H.%d.%m")".$(basename "$arg")
  if [ -f "$arg" ] ; then
    $copy "$arg" "$newname"
  elif [ -d "$arg" ] ; then
    $copy "$arg" "newname"
  fi
done

exec $realrm $flags "$@"
