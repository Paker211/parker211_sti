#! /bin/bash
# valid integer ( include negative )

function validInt(){
  #return 1 --> Fail
  #return 0 --> Success
  number="$1"; min="$2"; max="$3";

  if [ -z $number ] ; then
    echo "You didn't enter anything, Unacceptable." >&2 ; return 1
  fi

  if [ "${number%${number#?}} " = "-" ] ; then
    testvalue="${number#?}"
  else
    testvalue="$number"
  fi

  nodigits="$(echo $testvalue | sed 's/[[:digit:]]//g')"

  if [ ! -z $nodigits ] ; then
    echo "Invlalid number format! Only digits, no commas, spaces, etc." >&2 ; return 1
  fi

  if [ ! -z $min ] ; then
    if [ "$number" -lt "$min" ] ; then
      echo "Your value is too small: smallest acceptable value is $min" >&2 ; return 1
    fi
  fi

  if [ ! -z $max ] ; then
    if [ "$number" -gt "$max" ] ; then
      echo "Your value is too big: largest acceptable value is $max" >&2 ; return 1
    fi
  fi

  return 0
}

if validInt "$1" "$2" "$3" ; then
  echo "That input is a valid integer value within your constraints"
fi
