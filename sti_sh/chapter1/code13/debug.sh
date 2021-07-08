#!/bin/bash
# Example (Not actually debug, but somtheing tip of debug)

# Game (hi&low)

biggest=100
guess=0
guesses=0
number=$(( $$ % $biggest ))

while [ $guess -ne $number ] ; do
  echo -n "Guess? " ; read guess
  if [ "$guess" -lt $number ] ; then
    echo "...bigger"
  elif [ "$guess" -gt $number ] ; then
    echo "...smaller"
  fi
  guesses=$(( $guesses + 1 ))

done

echo "Right!! Guessed $number in $guesses guesses."

exit 0

