forFun
======

1. main.cpp 使用mpi.h计算数组各数开根号后的叠加和.
方法: 除0进程，其他进程分别对数组某段进行开根号进行叠加，完成后发送给0号进程，0号进程对其他进程进行叠加
求和即为所求。