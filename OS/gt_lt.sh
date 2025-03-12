#!/bin/bash
echo -n "Enter First Number: "
read num1
echo -n "Enter Second Number: "
read num2

if [ $num1 -gt $num2 ]; then
	echo "$num1 is largest number."
elif [ $num1 -lt $num2 ]; then
	echo "$num2 is largest number."
else [ $num1 == $num2 ]
	echo "BOTH are EQUAL."
fi
