#! /bin/bash

num=123456
echo "Number given: $num"
ans=0
while [ $num -gt 0 ]
do
  digit=$(expr $num % 10)
  ans=$(expr $ans \* 10 + $digit)
  num=$(expr $num / 10)
done
echo "Reversed number: $ans"
