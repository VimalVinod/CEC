#!/bin/bash
echo -n  "Enter a Number"
read num
if [ $((num%2 )) == 0 ]; then
	echo -n  "$num is even"
else
	echo "$num is odd"
fi

