#!/bin/sh

sum=0
echo "Количество входных параметров $#"
x=$#
count=1
while [ -n "$1" ]
do
sum=$(($sum+$1))
count=$(( $count + 1 ))
shift
done

avg=$(( $sum/$x ))

echo "Среднее значение параметров $avg"
