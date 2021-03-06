#!/bin/bash
# Add the thousands notation


function nicenumber(){

  integer=$(echo $1 | cut -d. -f1)  ## 整數
  decimal=$(echo $1 | cut -d. -f2)  ## 小數

  if [ $decimal != $1 ] ; then
    result="${DD:="."}$decimal"
  fi

  thousands=$integer

  while [ $thousands -gt 999 ] ; do
    remainder=$(( $thousands % 1000 ))

    while [ ${#remainder} -lt 3 ] ; do
      remainder="$0remainder"
    done

    thousands=$(( $thousands / 1000 ))
    result="${TD:=","}${remainder}${result}"

    nicenum="${thousands}${result}"
    if [ ! -z $2 ] ; then
      echo $nicenum
    fi
  done

}


## Main

DD="." #decimal point
TD="," #thousands point

while getopts "d:t:" opt ; do
  case $opt in
    d ) DD="$OPTARG" ;;
    t ) TD="$OPTARG" ;;
  esac
done

shift $(($OPTIND - 1))

if [ $# -eq 0 ] ; then
  cat << "EOF" >&2
Usage: $(basename $0) [-d c] [-t c] numeric value
       -d specifies the decimal point delimiter (default '.')
       -t specifies the thousands delimiter (default ',')
EOF
  exit 1
fi


nicenumber $1 1

exit 0



