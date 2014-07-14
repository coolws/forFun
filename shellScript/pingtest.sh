#! /bin/bash

pingArr=(www.baidu.com 192.168.1.3 192.168.2.1)

while [ 0 -eq 0 ]
do 

	for siteip in ${pingArr[*]}
	do
		echo $siteip
		ping -c3 ${siteip} >/dev/null 2>&1
		if [ "$?" != "0" ]; then
			echo "$siteip is down">>p.txt
			
 		fi
	done
	
 
	sleep 20m
	date >> p.txt
	echo "hello"
done 
