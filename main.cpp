// ��������������ź��ۼӺ�
// ����: һ�������ö������ģ�⣬���Կ�������ͺ󣬴��͸�0�Ž���
// 0�Ž�����������̵��ۼ�,��Ϊ��

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "mpi.h"

#define N 1002



//  MPI_Send (buf, count, datatype, dest, tag, comm) : ����һ����Ϣ
//  MPI_Recv (buf, count, datatype, source, tag, comm, status) : ������Ϣ

// size: ��������rank��ָ�����̵�ID
// comm��ָ��һ��ͨ����(communicator)
// Dest��Ŀ����̺ţ�source��Դ���̱�ʶ�ţ�tag����Ϣ��ǩ

int main(int argc,char * argv[])
{
	int myid , numprocs , source;
	int C=0;
	double data[N],sqrtsum=0.0;
	double d;
	char message[100];
	
	MPI_Status status;
	
	
	for(int i=0;i<N;i++)
		data[i]=i;

	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&myid);
	MPI_Comm_size(MPI_COMM_WORLD,& numprocs);
	
	numprocs--;  //����ʱ��ȥ0�Žڵ�

	if(myid == 0)  //0�����ڵ㣬��Ҫ�������ݷַ��ͽ���ռ�
	{

		for(int i=0;i<N;i++)   //���ݷַ�:0
			MPI_Send(&(data[i]),1,MPI_DOUBLE, i%numprocs+1 , 1 ,MPI_COMM_WORLD);
		for(int source=1;source<=numprocs;source++)  //����ռ�
		{
			MPI_Recv(&d,1,MPI_DOUBLE,source,99,MPI_COMM_WORLD,&status);
			sqrtsum +=d;
		}
		
	}
	else
	{
		
		for(int i=(myid-1);i<N;i=i+numprocs)   //���ӽڵ�������ݼ��㿪ƽ��,�����ۼ�   
		{
			MPI_Recv(&d,1,MPI_DOUBLE,0,1,MPI_COMM_WORLD,&status);
			sqrtsum += sqrt(d);
			//printf("%d %f\n",myid,sqrt(d));
			C++;
		}
		MPI_Send(&sqrtsum,1,MPI_DOUBLE,0,99,MPI_COMM_WORLD);    //�����ۼӽ���ͻ����ڵ�
	}
	printf("I am process %d. I receive total %d from process 0, and SqrtSum=%f.\n", myid, C, sqrtsum);
	MPI_Finalize();
	return 0;
}