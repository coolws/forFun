//��y=x^2��[0,10]�Ļ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "mpi.h"

#define N 100000000
#define a 0
#define b 10

// MPI_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm)
// op:��Լ����   root:�����Ž���


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
		x = a+i*dx+dx/2;   //������θ߶�
		local += x*x*dx;   //�������=�߶�*���=y*dx  �߶�y=x^2 ���dx
	}
	MPI_Reduce(&local,&inte,1,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);   //�ڵ��ۼӺ��͸�0�Žڵ�
	if(myid==0)
	{
		printf("The integal of x*x in region [%d,%d] =%16.15f\n", a, b, inte);
	}
	MPI_Finalize();

	return 0;
}