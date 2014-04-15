// 求数组各数开根号后累加和
// 方法: 一个数组让多个进程模拟，各自开根号求和后，传送给0号进程
// 0号进程求各个进程的累加,即为答案

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "mpi.h"

#define N 1002



//  MPI_Send (buf, count, datatype, dest, tag, comm) : 发送一个消息
//  MPI_Recv (buf, count, datatype, source, tag, comm, status) : 接受消息

// size: 进程数，rank：指定进程的ID
// comm：指定一个通信组(communicator)
// Dest：目标进程号，source：源进程标识号，tag：消息标签

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
	
	numprocs--;  //分配时除去0号节点

	if(myid == 0)  //0号主节点，主要负责数据分发和结果收集
	{

		for(int i=0;i<N;i++)   //数据分发:0
			MPI_Send(&(data[i]),1,MPI_DOUBLE, i%numprocs+1 , 1 ,MPI_COMM_WORLD);
		for(int source=1;source<=numprocs;source++)  //结果收集
		{
			MPI_Recv(&d,1,MPI_DOUBLE,source,99,MPI_COMM_WORLD,&status);
			sqrtsum +=d;
		}
		
	}
	else
	{
		
		for(int i=(myid-1);i<N;i=i+numprocs)   //各子节点接受数据计算开平方,本地累加   
		{
			MPI_Recv(&d,1,MPI_DOUBLE,0,1,MPI_COMM_WORLD,&status);
			sqrtsum += sqrt(d);
			//printf("%d %f\n",myid,sqrt(d));
			C++;
		}
		MPI_Send(&sqrtsum,1,MPI_DOUBLE,0,99,MPI_COMM_WORLD);    //本地累加结果送回主节点
	}
	printf("I am process %d. I receive total %d from process 0, and SqrtSum=%f.\n", myid, C, sqrtsum);
	MPI_Finalize();
	return 0;
}