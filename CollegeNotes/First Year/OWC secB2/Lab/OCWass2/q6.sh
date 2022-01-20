#! /bin/bash

a=10
b=10
c=80
echo "Given numbers: a = $a, b = $b, c = $c"

if [ $a -gt $b ] && [ $a -gt $c ]
then
  echo "Largest: $a"
elif [ $b -gt $a ] && [ $b -gt $c ]
then
  echo "Largest: $b"
else
  echo "Largest: $c"
fi
