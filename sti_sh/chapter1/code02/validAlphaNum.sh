#!/bin/bash
# Valid Alpah & Num

function validAlphaNum(){
  # Return 0 --> Success (is Alpah or Num)
  # Return 1 --> Fail (is not Alpah or Num)
  compressed="$(echo $1 | sed -e 's/[^[:alnum:]]//g')"
  echo "compress: $compressed"
  echo "input: $input"

  if [ "$compressed" != "$input" ] ; then
    return 1
  else
    return 0
  fi
}

#Main

echo -n "Enter input: "
read input

if ! validAlphaNum "$input" ; then
  echo "Your input must consist of only letters and numbers." >&2
  exit 1
else
  echo "Input is valid."
fi

exit 0
