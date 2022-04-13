#! /bin/bash

a=10
b=20
c=30
d=40
sum=$(expr $a + $b + $c + $d)
product=$(expr $a \* $b \* $c \* $d)
average=$(expr $sum / 4)

echo "Variables: a = $a, b = $b, c = $c, d = $d"
echo "Sum = $sum"
echo "Product = $product"
echo "Average = $average"
