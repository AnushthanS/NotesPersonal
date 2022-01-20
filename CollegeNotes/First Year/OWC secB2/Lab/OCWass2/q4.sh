#! /bin/bash
num=12345
echo "Number given: $num"
for((i=1; i<=5; i+=2))
do
  out=`echo $num | cut -c $i`
  echo $out
done
