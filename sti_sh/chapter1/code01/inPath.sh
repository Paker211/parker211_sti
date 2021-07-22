#! /bin/bash
# inPath

function inpath(){
  cmd=$1
  path=$2
  retval=1
  oldIFS=$IFS
  IFS=":"

  for directory in $path
  do
    if [ -x $dirctory/$cmd ] ; then
      # Success
      retval=0
    fi
  done

  IFS=$oldIFS
  return $retval

}

function checkForCmdInPath(){
  var=$1

  if [ "$var" != "" ] ; then
    if [ "${var%${var#?}}" = "/" ] ; then
      if [ ! -x $var ] ; then
        return 1
      fi
    elif ! inpath $var $PATH ; then
      return 2
    fi
  fi
}


# Main

if [ $# -ne ] ; then
  echo "Usage: $0 command" >&2
  exit 1
fi

checkForCmdInPath "$1"

case $? in
  0 ) echo "$1 found in PATH"  ;;
  1 ) echo "$1 not found or not executable"  ;;
  2 ) echo "$1 not found in PATH"
esac

exit 0



