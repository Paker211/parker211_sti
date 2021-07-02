#! /bin/bash

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


function validFloat(){

  fvalue="$1"

  if [ ! -z $(echo $fvalue | sed 's/[^.]//g') ] ; then

    decimalPart="$(echo $fvalue | cut -d. -f1)"
    fractionalPart="$(echo $fvalue | cut -d. -f2)"

    if [ ! -x $decimalPart ] ; then
      if ! validInt "$decimalPart" "" "" ; then
        return 1
      fi
    fi

    if [ "${fractionalPart%${fractionalPart#?}}" = "-" ] ; then
      echo "Invalid floating point number: '-' not allowed after decimal point" >&2
      return 1
    fi

    if [ "$fractionalPart" != "" ] ; then
      if ! validInt "fractionalPart" "0" "" ; then
        return 1
      fi
    fi

    if [ "decimalPart" = "-" -o -z $decimalPart ] ; then
      if [ -z $fractionalPart ] ; then
        echo "Invalid floating point format." >&2
        return 1
      fi
    fi

  else
    if [ "$fvalue" = "-" ] ; then
      echo "Invalid floating point format." >&2
      return 1
    fi

  fi

  return 0

}


if validFloat $1 ; then
  echo "$1 is a valid floating-point value"
fi

exit 0
