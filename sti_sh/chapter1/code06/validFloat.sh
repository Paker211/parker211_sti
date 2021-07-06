#! /bin/bash

function validInt(){
  # Return 1 --> Fail
  # Return 0 --> Success
  number="$1"; min="$2"; max="$3";

  # Check input (if have nothing Error)
  if [ -z $number ] ; then
    echo "You didn't enter anything, Unacceptable." >&2 ; return 1
  fi

  # Check whether is negative
  if [ "${number%${number#?}}" = "-" ] ; then
    # Negative and delete "-" notation
    testValue="${number#?}"
  else
    # Positive
    testValue="$number"
  fi

  # Remove digit
  nodigits="$(echo $testValue | sed 's/[[:digit:]]//g')"

  # Check wether has another char
  if [ ! -z $nodigits ] ; then
    echo "Invlalid number format! Only digits, no commas, spaces, etc." >&2
    return 1
  fi

  # Comfirm the value wether small than min
  if [ ! -z $min ] ; then
    if [ "$number" -lt "$min" ] ; then
      echo "Your value is too small: smallest acceptable value is $min" >&2 ; return 1
    fi
  fi

  # Comfirm the value wether greater than max
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

    # Check decimal part wether is valid int
    if [ ! -z $decimalPart ] ; then
      if ! validInt "$decimalPart" "" "" ; then
        return 1
      fi
    fi

    # Check wether has "-" notation in the right side( ex: 31.-52 )
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

# Test
if validFloat $1 ; then
  echo "$1 is a valid floating-point value"
fi

exit 0



