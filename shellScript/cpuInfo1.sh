#! /bin/bash

#读取选定的cpu,进程等所有信息

Arr=(snow-hadoop-02 snow-hadoop-03)

while [ 0 -eq 0 ]
do
        date >>a.txt
        ssh ${Arr[0]} "vmstat | head -n 2">> a.txt
        for siteip in ${Arr[*]}
        do
                echo $siteip >> a.txt
                ssh $siteip "vmstat | tail -n 1"> q.txt
                cat q.txt | awk '{print $1 "\t" $3}'>>a.txt
        done

        sleep 5s
done
