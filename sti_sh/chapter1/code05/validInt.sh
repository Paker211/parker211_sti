#! /bin/bash
# valid integer ( include positive and negative )

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



if validInt "$1" "$2" "$3" ; then
  echo "That input is a valid integer value within your constraints"
fi


