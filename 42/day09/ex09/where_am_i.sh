#!/bin/sh
where_i_am=$(ifconfig | grep inet | grep broadcast | cut -d ' ' -f 2)
if [ $where_i_am = '' ]
then
	echo "I am lost!\n"
else
	echo $where_i_am
fi