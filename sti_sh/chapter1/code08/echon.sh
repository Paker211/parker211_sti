#! /bin/bash

# Use script to replace echo -n

function echon(){
  echo "$*" | tr -d '\n'
}

echon "This is a test: "
read answer

echon "This is a test too :"
read answer2

