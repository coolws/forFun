forFun
======

1. main.cpp 使用mpi.h计算数组各数开根号后的叠加和.
方法: 除0进程，其他进程分别对数组某段进行开根号进行叠加，完成后发送给0号进程，0号进程对其他进程进行叠加
求和即为所求。

2. integrals.cpp 利用mpi.h对y=x^2在[0,10]上进行积分.
方法: 各个进程算各自小长方形的面积，然后将所有进程的累加和送到0号进程。

3. finaCar.cpp 2014年研究生数模E题

4. shellscripts里面是些简单的shell脚本.如cpuInfo1.sh为每隔5s获取hadoop各节点cpu,进程等所有信息.

5. cImpleClass.c 使用C语言实现c++类中的继承，重载，构造函数等
