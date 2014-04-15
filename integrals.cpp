//求y=x^2在[0,10]的积分

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "mpi.h"

#define N 100000000
#define a 0
#define b 10

// MPI_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm)
// op:规约操作   root:给几号进程


int main(int argc,char * argv[])
{
	int myid , numprocs ;
	double local=0.0 , dx=1.0*(b-a)/N;
	double inte,x;

	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&myid);
	MPI_Comm_size(MPI_COMM_WORLD,& numprocs);
	

	for(int i=myid;i<N;i=i+numprocs)
	{
		x = a+i*dx+dx/2;   //计算矩形高度
		local += x*x*dx;   //矩形面积=高度*宽度=y*dx  高度y=x^2 宽度dx
	}
	MPI_Reduce(&local,&inte,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);   //节点累加和送给0号节点
	if(myid==0)
	{
		printf("The integal of x*x in region [%d,%d] =%16.15f\n", a, b, inte);
	}
	MPI_Finalize();

	return 0;
}