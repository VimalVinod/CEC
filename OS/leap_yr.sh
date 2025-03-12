echo  -n "Enter a year:"
read year
if [ $((year % 4)) == 0 ]; then
	if [ $((year % 100)) -ne 0 ] || [ $((year  % 400)) -eq 0 ]; then
	echo "$year is a leap Year"
	else
	 echo "$year is not a leap Year"
	fi
else 
	echo "$year is not a leap Year."
fi
