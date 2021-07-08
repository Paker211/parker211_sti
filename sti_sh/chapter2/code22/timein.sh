#!/bin/bash

# time in

zonedir="/usr/share/zoneinfo"


if [ ! -d $zonedir ] ; then
  echo "No timezone datebase at $zonedir." >&2 ; exit 1
fi

if [ $# -eq 0 ] ; then
  timezone="UTC"
  mixedzone="UTC"
elif [ "$1" = "list" ] ; then
  ( echo "All known timezones and regions defined on this system:"
  cd $zonedir
  find * -type f -print | xarge -n 2 | awk'{ printf " %-38s\n", $1, $2 }'
  ) | more
  exit 0
else
  region="$(dirname $1)"
  zone="$(basename $1)"


  matchcnt="$(find $zonedir -name $zone -type f -print | wc -l | sed 's/[^[:digit:]]//g' )"

  if [ "$matchcnt" -gt 0 ] ; then
    if [ "$matchcnt" -gt 1 ] ; then
      echo "\"zone\" matches more than one possible time zone record." >&2
      echo "Please use 'list' to see all known regions and timezones" >&2
      exit 1
    fi
    match="$(find $zonedir -name $zone -type f -print)"
    mixedzone="$zone"
  else
    mixedregion="$(echo ${region%${region#?}} | tr '[[:lower:]]' '[[:upper:]]') $(echo ${region#?} | tr '[[:upper:]]' '[[:lower:]]')"
    mixedzone="$(echo ${zone%${zone#?}} | tr '[[:lower:]]' '[[:upper:]]') $(echo ${zone#?} | tr '[[:upper:]]' '[[:lower:]]')"

    if [ "mixedregion" != "." ] ; then
      match="$(find $zonedir/$mixedregion -type f -name $mixedzone -print)"
    else
      match="$(find $zonedir -name $mixedzone -type f -print)"
    fi

    if [ -z "$match"] ; then
      if [ ! -z $(find $zonedir -name $mixedzone -type d -print)  ] ; then
        echo "The region \"$1\" has more than one timezone. Please use 'list'" >&2
      else
        echo "Can't find and exact match for \"$1\". Please use 'list' "
      fi
      echo "to see all known regions and timezones." >&2
      exit 1
    fi
  fi
  timezone="$match"

fi

nicetz=$(echo $timezone | sed "s|$zonedir/||g")

echo It\'s $(TZ=$timezone date '+%A, +%B, +%e, +%Y, at %1:%M %p') in $nicetz

exit 0

