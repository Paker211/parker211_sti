#!/bin/bash

## Comment
# let IFS is "/"
# var1 is a para(first)  because of double quote
# var2 is a para(second) because it doesn't contain "/"
# var3 is contain three para(3,4,5) because split by "/"

function showParams(){
  echo \$# = $#
  while [ "$1" ] ; do
    echo $1
    shift
  done

}

IFS=/

var1="1 2 3"
var2="a b c"
var3="d/e/f"

showParams "$var1" $var2 $var3

echo -n "$IFS" | od -a -t x1 -c

