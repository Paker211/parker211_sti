#! /bin/bash
# valid-date


function exceedsDaysInMonth(){
  # Return 0 --> Success
  # Return 1 --> Fail
  case $(echo $1|tr '[:upper:]' '[:lower:]') in
    jan* ) days=31 ;; feb* ) days=28 ;;
    mar* ) days=31 ;; apr* ) days=30 ;;
    may* ) days=31 ;; jun* ) days=30 ;;
    jul* ) days=31 ;; aug* ) days=31 ;;
    sep* ) days=30 ;; oct* ) days=31 ;;
    nov* ) days=30 ;; dec* ) days=31 ;;
    * ) echo "$0: Unknown month name $1" >&2 ; exit 1
  esac

  if [ $2 -lt 1 -o $2 -gt $days ] ; then
    return 1
  else
    return 0
  fi
}


function isLeapYear(){
  year=$1

  if [ "$(( year % 4 ))" -ne 0 ] ; then
    return 1  #Not a leap year
  elif [ "$(( year % 400 ))" -eq 0 ] ; then
    return 0  #It's  leap year
  elif [ "$(( year % 100 ))" -eq 0 ] ; then
    return 1
  else
    return 0
  fi
}


## Main


