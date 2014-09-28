#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <set>

using namespace std;


vector<vector<int>> vec;
int const LEFT_I_EACH = 8;
int const LEFT_II_EACH = 10;
int const LEFT_III_EACH = 4;

int const MAX_1_1 = 37;
int const MAX_1_2 = 80;
int array_1_1_i[MAX_1_1] = { 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8 };
int array_1_1_ii[MAX_1_1] = { 5, 6, 7, 8, 10, 3, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 5, 0, 1, 2, 3, 0, 1, 2, 0, 1, 0 };
int array_1_1_iii[MAX_1_1] = { 4, 3, 2, 1, 0, 4, 3, 2, 1, 0, 4, 3, 2, 2, 1, 0, 4, 3, 2, 1, 1, 0, 4, 3, 2, 1, 0, 3, 2, 1, 0, 2, 1, 0, 1, 0, 0 };

int array_1_2_i[MAX_1_2] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 14, 14, 15 };
int array_1_2_ii[MAX_1_2] = { 12, 13, 14, 16, 17, 18, 11, 12, 13, 15, 16, 17, 11, 12, 13, 15, 16, 9, 10, 11, 13, 14, 15, 8, 9, 10, 12, 13, 14, 6, 8, 9, 10, 12, 13, 5, 6, 8, 9, 10, 12, 4, 5, 6, 8, 9, 10, 2, 4, 5, 6, 8, 9, 1, 2, 4, 5, 6, 8, 0, 1, 2, 4, 5, 6, 0, 1, 2, 4, 5, 0, 1, 2, 4, 0, 1, 2, 0, 1, 0 };
int array_1_2_iii[MAX_1_2] = { 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 4, 3, 2, 1, 0, 3, 2, 1, 0, 2, 1, 0, 1, 0, 0 };



int const MAX_11_i_ii = 9;  // I&II
int const MAX_12_i_ii = 14;
int array_11_1_i_ii[MAX_11_i_ii] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
int array_11_2_i_ii[MAX_11_i_ii] = { 10, 8, 7, 6, 5, 3, 2, 1, 0 };
int array_12_1_i_ii[MAX_12_i_ii] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 15 };
int array_12_2_i_ii[MAX_12_i_ii] = { 18, 17, 16, 15, 14, 12, 10, 9, 8, 5, 4, 3, 2, 0 };


int const MAX_11_ii_iii = 5; //II&III
int const MAX_12_ii_iii = 6;
int array_11_1_ii_iii[MAX_11_ii_iii] = { 5, 6, 7, 9, 10 };
int array_11_2_ii_iii[MAX_11_ii_iii] = { 4, 3, 2, 0, 0 };
int array_12_1_ii_iii[MAX_12_ii_iii] = { 12, 13, 14, 16, 17, 18 };
int array_12_2_ii_iii[MAX_12_ii_iii] = { 5, 4, 3, 2, 1, 0 };


int const MAX_11_i_iii = 5; //I&III
int const MAX_12_i_iii = 6;
int array_11_1_i_iii[MAX_11_i_iii] = { 4, 5, 6, 7, 8 };
int array_11_2_i_iii[MAX_11_i_iii] = { 4, 3, 2, 1, 0 };
int array_12_1_i_iii[MAX_12_i_iii] = { 10, 11, 12, 13, 14, 15 };
int array_12_2_i_iii[MAX_12_i_iii] = { 5, 4, 3, 2, 1, 0 };


set<vector<int>> set1;
int const MAX = 10;
int const GROUND = 21;
int const ROOF = 10;
int finalcount=0x7fffffff;
int final1=0, final2=0;

bool judgeTwoCars(bool f,int numOf1_1,int index1_1,int numOf1_2,int index1_2,int other, int left1, int left2, int array11_i[], int array11_ii[], int index1, int n1, int array12_i[], int array12_ii[], int index2, int n2,int &curCount11,int &curCount12)
//bool judgeTwoCars(bool f,int numOf1_1,int index1_1,int numOf1_2,int index1_2, int left1, int left2, int array11_i[],int array11_ii[] ,int index1, int n1,int array12_i[],int array12_ii[] , int index2, int n2,int &curCount11,int &curCount12)
{
	int i;
	int left_i, left_ii;
	int max_i, max_ii;
	finalcount = 0x7fffffff;
	int count;
	int faultcount;
	bool flag = true;
	bool modifyflag = false;
	int temp_left_i, temp_left_ii;
	//int final1, final2;
	vector<int> tempvec;
	
	//*****************
	bool ff=true;
	int p=0;
	//*****************

	if(left1==0&&left2==0)
		goto End;
	
	int type1, type2;


	if (index1 == 1)
		type1 = LEFT_I_EACH;
	else if (index1 == 2)
		type1 = LEFT_II_EACH;
	else
		type1 = LEFT_III_EACH;
		
	if (index2 == 1)
		type2 = LEFT_I_EACH;
	else if (index2 == 2)
		type2 = LEFT_II_EACH;
	else
		type2 = LEFT_III_EACH;

	for (i = 0; i<MAX; i++)  //number of 1-2
	{


		max_i = left1;
		max_ii = left2;
		faultcount = 0;
		if ( ((i+numOf1_2) * 5 + i+numOf1_2) >= finalcount )
		{
			//printf("finalcount %d\n", finalcount);
			//printf("(i * 5 + i) >= finalcount\n");
			if (modifyflag)
				flag = true;
			else
				flag = false;

			break;
		}

		for (int j=0; j<n2; j++)  //each of 1-2 type
		{
			// it = j;  //****************

			left_i = max_i;
			left_ii = max_ii;
			left_i -= array12_i[j] * i;
			left_ii -= array12_ii[j] * i;

			
			/*if(left_i<0&&left_ii>=0)
			{
				ff=false;
				left_i +=array12_i[j]*i;
				left_ii +=array12_ii[j]*i;
				for(p=0;p<n2;p++)
				{
					if(left_i>array12_i[p])
						continue;
					else
					{
						left_i=0;
						left_ii-=array12_ii[p];
						break;
					}
				}
			}
			else if(left_i>=0&&left_ii<0)
			{
				ff=false;
				left_i +=array12_i[j]*i;
				left_ii +=array12_ii[j]*i;
				for(p=n2-1;p>=0;p++)
				{
					if(left_ii>array12_ii[p])
						continue;
					else
					{
						left_ii=0;
						left_i-=array12_i[p];
						break;
					}
				}
			}
			else if(left_i<0&&left_ii<0)
			{
				ff=false;
				left_i +=array12_i[j]*i;
				left_ii +=array12_ii[j]*i;
				for(p=0;p<n2;p++)
				{
					if((left_i>array12_i[p])&&(left_ii>array12_ii[p]))
						continue;
					else
					{
						left_ii=0;
						left_i=0;
						break;
					}
				}
			}*/

			if (left_i == 0 && left_ii != 0)
			{
				count = left_ii / type2;
				if (left_ii %type2)
					count += 1;

				if (0.2*(count+numOf1_1) >= (i + numOf1_2))
				{
					if (finalcount > (count + i+numOf1_1 + numOf1_2))
					{
						finalcount = count + i + numOf1_1 + numOf1_2;
						curCount11 = count + numOf1_1;
						curCount12 = i + numOf1_2;
						final1 = count + numOf1_1;
						final2 = i + numOf1_2;
						modifyflag = true;

						vec.clear();
						tempvec.clear();
						if(index2==2)     //count
						{
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(0);
							tempvec.push_back(LEFT_II_EACH);
							tempvec.push_back(0);	
							vec.push_back(tempvec);
						}
						else if(index2==3)
						{
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(0);
							tempvec.push_back(0);
							tempvec.push_back(LEFT_III_EACH);
							vec.push_back(tempvec);
						}

						tempvec.clear();
						if(f==true)         // numof1_1
						{
							if(numOf1_1)
							{
								tempvec.push_back(1);
								tempvec.push_back(numOf1_1);
								tempvec.push_back(array_1_1_i[index1_1]);
								tempvec.push_back(array_1_1_ii[index1_1]);
								tempvec.push_back(array_1_1_iii[index1_1]);
								vec.push_back(tempvec);
							}
						}
						else
						{
							tempvec.push_back(1);
							tempvec.push_back(numOf1_1-1);
							tempvec.push_back(array_1_1_i[index1_1]);
							tempvec.push_back(array_1_1_ii[index1_1]);
							tempvec.push_back(array_1_1_iii[index1_1]);
							vec.push_back(tempvec);

							tempvec.clear();
							tempvec.push_back(1);
							tempvec.push_back(1);
							tempvec.push_back(array_1_1_i[other]);
							tempvec.push_back(array_1_1_ii[other]);
							tempvec.push_back(array_1_1_iii[other]);
							vec.push_back(tempvec);
						}

						tempvec.clear();
						if(numOf1_2)         // numof1_2
						{
							tempvec.push_back(2);
							tempvec.push_back(numOf1_2);
							tempvec.push_back(array_1_2_i[index1_2]);
							tempvec.push_back(array_1_2_ii[index1_2]);
							tempvec.push_back(array_1_2_iii[index1_2]);
							vec.push_back(tempvec);
						}
						
						tempvec.clear();
						if(i)         // i
						{
							
							if(index1==1&&index2==2)
							{
								if(ff)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								else
								{
									tempvec.push_back(2);
									tempvec.push_back(i-1);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(2);
									tempvec.push_back(1);
									tempvec.push_back(array12_i[p]);
									tempvec.push_back(array12_ii[p]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								
							}
							if(index1==2&&index2==3)
							{
								if(ff)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								else
								{
									tempvec.push_back(2);
									tempvec.push_back(i-1);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(2);
									tempvec.push_back(1);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[p]);
									tempvec.push_back(array12_ii[p]);
									vec.push_back(tempvec);
								}
								
							}
							if(index1==1&&index2==3)
							{
								if(ff)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								else
								{
									tempvec.push_back(2);
									tempvec.push_back(i-1);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(2);
									tempvec.push_back(1);
									tempvec.push_back(array12_i[p]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[p]);
									vec.push_back(tempvec);
								}
								
							}
						}

					}
					//printf("finalcount %d\n", finalcount);

				}
				continue;
			}
			if (left_i != 0 && left_ii == 0)
			{
				count = left_i / type1;
				if (left_i %type1)
					count += 1;

				if (0.2*(count+numOf1_1) >= (i+numOf1_2))
				{
					if (finalcount > (count  +numOf1_1+i + numOf1_2))
					{
						finalcount = count + i + numOf1_1 + numOf1_2;
						curCount11 = count + numOf1_1;
						curCount12 = i + numOf1_2;
						final1 = count + numOf1_1;
						final2 = i + numOf1_2;
						modifyflag = true;

						vec.clear();
						tempvec.clear();
						if(index1==1)     //count
						{
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(LEFT_I_EACH);
							tempvec.push_back(0);
							tempvec.push_back(0);	
							vec.push_back(tempvec);
						}
						else if(index1==2)
						{
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(0);
							tempvec.push_back(LEFT_II_EACH);
							tempvec.push_back(0);
							vec.push_back(tempvec);
						}

						tempvec.clear();
						if(f==true)         // numof1_1
						{
							if(numOf1_1)
							{
								tempvec.push_back(1);
								tempvec.push_back(numOf1_1);
								tempvec.push_back(array_1_1_i[index1_1]);
								tempvec.push_back(array_1_1_ii[index1_1]);
								tempvec.push_back(array_1_1_iii[index1_1]);
								vec.push_back(tempvec);
							}
						}
						else
						{
							tempvec.push_back(1);
							tempvec.push_back(numOf1_1-1);
							tempvec.push_back(array_1_1_i[index1_1]);
							tempvec.push_back(array_1_1_ii[index1_1]);
							tempvec.push_back(array_1_1_iii[index1_1]);
							vec.push_back(tempvec);

							tempvec.clear();
							tempvec.push_back(1);
							tempvec.push_back(1);
							tempvec.push_back(array_1_1_i[other]);
							tempvec.push_back(array_1_1_ii[other]);
							tempvec.push_back(array_1_1_iii[other]);
							vec.push_back(tempvec);
						}

						tempvec.clear();
						if(numOf1_2)         // numof1_2
						{
							tempvec.push_back(2);
							tempvec.push_back(numOf1_2);
							tempvec.push_back(array_1_2_i[index1_2]);
							tempvec.push_back(array_1_2_ii[index1_2]);
							tempvec.push_back(array_1_2_iii[index1_2]);
							vec.push_back(tempvec);
						}
						
						tempvec.clear();
						if(i)         // i
						{
							
							if(index1==1&&index2==2)
							{
								if(ff)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								else
								{
									tempvec.push_back(2);
									tempvec.push_back(i-1);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(2);
									tempvec.push_back(1);
									tempvec.push_back(array12_i[p]);
									tempvec.push_back(array12_ii[p]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								
							}
							if(index1==2&&index2==3)
							{
								if(ff)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								else
								{
									tempvec.push_back(2);
									tempvec.push_back(i-1);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(2);
									tempvec.push_back(1);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[p]);
									tempvec.push_back(array12_ii[p]);
									vec.push_back(tempvec);
								}
								
							}
							if(index1==1&&index2==3)
							{
								if(ff)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								else
								{
									tempvec.push_back(2);
									tempvec.push_back(i-1);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(2);
									tempvec.push_back(1);
									tempvec.push_back(array12_i[p]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[p]);
									vec.push_back(tempvec);
								}
								
							}
						}
					}
					//printf("finalcount %d\n", finalcount);


				}
				continue;
			}

			if (left_i == 0 && left_ii == 0)
				continue;

			temp_left_i = left_i;
			temp_left_ii = left_ii;

			count = 0x7fffffff;

			for (int k = 0; k < n1; k++)  // each of 1-1 type
			{
				
				count = 0x7fffffff;
				left_i = temp_left_i;
				left_ii = temp_left_ii;
				//printf("%d   %d\n", left_i, left_ii);
				if (array11_i[k] == 0 || array11_ii[k] == 0)
					continue;

				count = min(count, left_i / array11_i[k]);
				count = min(count, left_ii / array11_ii[k]);
				//printf("@@@ k= %d , count = %d\n", k, count);

				left_i = left_i - array11_i[k] * count;
				left_ii = left_ii - array11_ii[k] * count;
				//printf("@@@ %d   %d\n", left_i, left_ii);

				if(left_i<0||left_ii<0)
					continue;
				if(left_i==0&&left_ii==0)
				{
					if(finalcount>(i+count+numOf1_1+numOf1_2))
						{
							finalcount=i+count+numOf1_1+numOf1_2;
							curCount11=count+numOf1_1;
							curCount12=i+numOf1_2;
							final1=count+numOf1_1;
							final2=i+numOf1_2;

							vec.clear();
							tempvec.clear();
							
							if(index1==1&&index2==2) //count
							{
								tempvec.push_back(1);
								tempvec.push_back(count);
								tempvec.push_back(array11_i[k]);
								tempvec.push_back(array11_ii[k]);
								tempvec.push_back(0);
								vec.push_back(tempvec);

									
							}
							if(index1==2&&index2==3)
							{
								tempvec.push_back(1);
								tempvec.push_back(count);
								tempvec.push_back(0);
								tempvec.push_back(array11_i[k]);
								tempvec.push_back(array11_ii[k]);
								vec.push_back(tempvec);

									
							}
							if(index1==1&&index2==3)
							{
								tempvec.push_back(1);
								tempvec.push_back(count);
								tempvec.push_back(array11_i[k]);
								tempvec.push_back(0);
								tempvec.push_back(array11_ii[k]);
								vec.push_back(tempvec);
	
							}
								
							
							

							tempvec.clear();
							if(f==true)         // numof1_1
							{
								if(numOf1_1)
								{
									tempvec.push_back(1);
									tempvec.push_back(numOf1_1);
									tempvec.push_back(array_1_1_i[index1_1]);
									tempvec.push_back(array_1_1_ii[index1_1]);
									tempvec.push_back(array_1_1_iii[index1_1]);
									vec.push_back(tempvec);
								}
							}
							else
							{
								tempvec.push_back(1);
								tempvec.push_back(numOf1_1-1);
								tempvec.push_back(array_1_1_i[index1_1]);
								tempvec.push_back(array_1_1_ii[index1_1]);
								tempvec.push_back(array_1_1_iii[index1_1]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array_1_1_i[other]);
								tempvec.push_back(array_1_1_ii[other]);
								tempvec.push_back(array_1_1_iii[other]);
								vec.push_back(tempvec);
							}

							tempvec.clear();
							if(numOf1_2)         // numof1_2
							{
								tempvec.push_back(2);
								tempvec.push_back(numOf1_2);
								tempvec.push_back(array_1_2_i[index1_2]);
								tempvec.push_back(array_1_2_ii[index1_2]);
								tempvec.push_back(array_1_2_iii[index1_2]);
								vec.push_back(tempvec);
							}
						
							tempvec.clear();
							if(i)         // i
							{
							/*
								if(index1==1&&index2==2)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								if(index1==2&&index2==3)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								if(index1==1&&index2==3)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}*/
								if(index1==1&&index2==2)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										tempvec.push_back(0);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(array12_ii[p]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}
								
								}
								if(index1==2&&index2==3)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(array12_ii[p]);
										vec.push_back(tempvec);
									}
								
								}
								if(index1==1&&index2==3)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[p]);
										vec.push_back(tempvec);
									}
								
								}
							}
						
						}
				}

				for (int l = 0; l <n1; l++)
				{
					if (left_i <= array11_i[l] && left_ii <= array11_ii[l])
					{
						count += 1;
						//printf("left_i <= array_1_1_i[l] && left_ii <= array_1_1_ii[l], count = %d\n", count);
						if(finalcount>(i+count+numOf1_1+numOf1_2))
						{
							finalcount=i+count+numOf1_1+numOf1_2;
							curCount11=count+numOf1_1;
							curCount12=i+numOf1_2;
							final1=count+numOf1_1;
							final2=i+numOf1_2;

							vec.clear();
							tempvec.clear();
						
							if(left_i <= array11_i[l] && left_ii <= array11_ii[l])  //count
							{
								if(index1==1&&index2==2)
								{
									tempvec.push_back(1);
									tempvec.push_back(count-1);
									tempvec.push_back(array11_i[k]);
									tempvec.push_back(array11_ii[k]);
									tempvec.push_back(0);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(1);
									tempvec.push_back(1);
									tempvec.push_back(array11_i[l]);
									tempvec.push_back(array11_ii[l]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								if(index1==2&&index2==3)
								{
									tempvec.push_back(1);
									tempvec.push_back(count-1);
									tempvec.push_back(0);
									tempvec.push_back(array11_i[k]);
									tempvec.push_back(array11_ii[k]);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(1);
									tempvec.push_back(1);
									tempvec.push_back(0);
									tempvec.push_back(array11_i[l]);
									tempvec.push_back(array11_ii[l]);	
									vec.push_back(tempvec);
								}
								if(index1==1&&index2==3)
								{
									tempvec.push_back(1);
									tempvec.push_back(count-1);
									tempvec.push_back(array11_i[k]);
									tempvec.push_back(0);
									tempvec.push_back(array11_ii[k]);
									vec.push_back(tempvec);

									tempvec.clear();
									tempvec.push_back(1);
									tempvec.push_back(1);
									tempvec.push_back(array11_i[l]);
									tempvec.push_back(0);
									tempvec.push_back(array11_ii[l]);	
									vec.push_back(tempvec);
								}
								
							}
							

							tempvec.clear();
							if(f==true)         // numof1_1
							{
								if(numOf1_1)
								{
									tempvec.push_back(1);
									tempvec.push_back(numOf1_1);
									tempvec.push_back(array_1_1_i[index1_1]);
									tempvec.push_back(array_1_1_ii[index1_1]);
									tempvec.push_back(array_1_1_iii[index1_1]);
									vec.push_back(tempvec);
								}
							}
							else
							{
								tempvec.push_back(1);
								tempvec.push_back(numOf1_1-1);
								tempvec.push_back(array_1_1_i[index1_1]);
								tempvec.push_back(array_1_1_ii[index1_1]);
								tempvec.push_back(array_1_1_iii[index1_1]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array_1_1_i[other]);
								tempvec.push_back(array_1_1_ii[other]);
								tempvec.push_back(array_1_1_iii[other]);
								vec.push_back(tempvec);
							}

							tempvec.clear();
							if(numOf1_2)         // numof1_2
							{
								tempvec.push_back(2);
								tempvec.push_back(numOf1_2);
								tempvec.push_back(array_1_2_i[index1_2]);
								tempvec.push_back(array_1_2_ii[index1_2]);
								tempvec.push_back(array_1_2_iii[index1_2]);
								vec.push_back(tempvec);
							}
						
							tempvec.clear();
							if(i)         // i
							{
							
								/*if(index1==1&&index2==2)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								if(index1==2&&index2==3)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								if(index1==1&&index2==3)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}*/
								if(index1==1&&index2==2)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										tempvec.push_back(0);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(array12_ii[p]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}
								
								}
								if(index1==2&&index2==3)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(array12_ii[p]);
										vec.push_back(tempvec);
									}
								
								}
								if(index1==1&&index2==3)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[p]);
										vec.push_back(tempvec);
									}
								
								}
							}
						
						}
						break;
					}

					if (left_i <= array11_i[l])  //ii has lefted 
					{
						//left_i = array_1_1_i[l] - left_i;
						left_ii = left_ii - array11_ii[l];
						count += 1;
						count += left_ii / type2;  // max ii is 10 in 1-1
						if (left_ii % type2)
							count += 1;
						if(finalcount>(i+count+numOf1_1+numOf1_2))
						{
							finalcount=i+count+numOf1_1+numOf1_2;
							curCount11=count+numOf1_1;
							curCount12=i+numOf1_2;
							final1=count+numOf1_1;
							final2=i+numOf1_2;

							vec.clear();
							tempvec.clear();
						
							
							if(index1==1&&index2==2)  //count
							{
								tempvec.push_back(1);
								if(left_ii%type2)
									tempvec.push_back(count-2-left_ii/type2);
								else
									tempvec.push_back(count-1-left_ii/type2);

								tempvec.push_back(array11_i[k]);
								tempvec.push_back(array11_ii[k]);
								tempvec.push_back(0);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array11_i[l]);
								tempvec.push_back(array11_ii[l]);
								tempvec.push_back(0);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								if(left_ii%type2)
									tempvec.push_back(1+left_ii/type2);
								else
									tempvec.push_back(left_ii/type2);
								tempvec.push_back(0);
								tempvec.push_back(LEFT_II_EACH);
								tempvec.push_back(0);
								vec.push_back(tempvec);
							}

							if(index1==2&&index2==3)
							{
								tempvec.push_back(1);
								if(left_ii%type2)
									tempvec.push_back(count-2-left_ii/type2);
								else
									tempvec.push_back(count-1-left_ii/type2);

								tempvec.push_back(0);
								tempvec.push_back(array11_i[k]);
								tempvec.push_back(array11_ii[k]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(0);
								tempvec.push_back(array11_i[l]);
								tempvec.push_back(array11_ii[l]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								if(left_ii%type2)
									tempvec.push_back(1+left_ii/type2);
								else
									tempvec.push_back(left_ii/type2);
								tempvec.push_back(0);
								tempvec.push_back(0);
								tempvec.push_back(LEFT_III_EACH);
								vec.push_back(tempvec);
							}
							if(index1==1&&index2==3)
							{
								tempvec.push_back(1);
								if(left_ii%type2)
									tempvec.push_back(count-2-left_ii/type2);
								else
									tempvec.push_back(count-1-left_ii/type2);

								tempvec.push_back(array11_i[k]);
								tempvec.push_back(0);
								tempvec.push_back(array11_ii[k]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array11_i[l]);
								tempvec.push_back(0);
								tempvec.push_back(array11_ii[l]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								if(left_ii%type2)
									tempvec.push_back(1+left_ii/type2);
								else
									tempvec.push_back(left_ii/type2);
								tempvec.push_back(0);
								tempvec.push_back(0);
								tempvec.push_back(LEFT_III_EACH);
								vec.push_back(tempvec);
							}
								
							
							

							tempvec.clear();
							if(f==true)         // numof1_1
							{
								if(numOf1_1)
								{
									tempvec.push_back(1);
									tempvec.push_back(numOf1_1);
									tempvec.push_back(array_1_1_i[index1_1]);
									tempvec.push_back(array_1_1_ii[index1_1]);
									tempvec.push_back(array_1_1_iii[index1_1]);
									vec.push_back(tempvec);
								}
							}
							else
							{
								tempvec.push_back(1);
								tempvec.push_back(numOf1_1-1);
								tempvec.push_back(array_1_1_i[index1_1]);
								tempvec.push_back(array_1_1_ii[index1_1]);
								tempvec.push_back(array_1_1_iii[index1_1]);
								vec.push_back(tempvec);

								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array_1_1_i[other]);
								tempvec.push_back(array_1_1_ii[other]);
								tempvec.push_back(array_1_1_iii[other]);
								vec.push_back(tempvec);
							}

							tempvec.clear();
							if(numOf1_2)         // numof1_2
							{
								tempvec.push_back(2);
								tempvec.push_back(numOf1_2);
								tempvec.push_back(array_1_2_i[index1_2]);
								tempvec.push_back(array_1_2_ii[index1_2]);
								tempvec.push_back(array_1_2_iii[index1_2]);
								vec.push_back(tempvec);
							}
						
							tempvec.clear();
							if(i)         // i
							{
							
								/*if(index1==1&&index2==2)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									tempvec.push_back(0);
									vec.push_back(tempvec);
								}
								if(index1==2&&index2==3)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(0);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}
								if(index1==1&&index2==3)
								{
									tempvec.push_back(2);
									tempvec.push_back(i);
									tempvec.push_back(array12_i[j]);
									tempvec.push_back(0);
									tempvec.push_back(array12_ii[j]);
									vec.push_back(tempvec);
								}*/
								if(index1==1&&index2==2)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										tempvec.push_back(0);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(array12_ii[p]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}
								
								}
								if(index1==2&&index2==3)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(0);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(array12_ii[p]);
										vec.push_back(tempvec);
									}
								
								}
								if(index1==1&&index2==3)
								{
									if(ff)
									{
										tempvec.push_back(2);
										tempvec.push_back(i);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);
									}
									else
									{
										tempvec.push_back(2);
										tempvec.push_back(i-1);
										tempvec.push_back(array12_i[j]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[j]);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(2);
										tempvec.push_back(1);
										tempvec.push_back(array12_i[p]);
										tempvec.push_back(0);
										tempvec.push_back(array12_ii[p]);
										vec.push_back(tempvec);
									}
								
								}
							}
						
						}
					
						break;
					}

					if (left_ii <= array11_ii[l]) // i has lefted
					{
						
						for (int m = 0; m < n1; m++)
						{
							if (left_ii <= array11_ii[m])
							{
								if (m != n1 - 1)
									continue;
								else
								{
									count += left_i / type1;  // max i is 8 in 1-1
									if (left_i % type1)
									{
										count += 1;

									}
									if(finalcount>(i+count+numOf1_1+numOf1_2))
									{
										finalcount=i+count+numOf1_1+numOf1_2;
										curCount11=count+numOf1_1;
										curCount12=i+numOf1_2;
										final1=count+numOf1_1;
										final2=i+numOf1_2;

										vec.clear();
										tempvec.clear();
						
							
										if(index1==1&&index2==2)  //count
										{
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(count-1-left_i/type1);
											else
												tempvec.push_back(count-left_i/type1);

											tempvec.push_back(array11_i[k]);
											tempvec.push_back(array11_ii[k]);
											tempvec.push_back(0);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(1+left_i/type1);
											else
												tempvec.push_back(left_i/type1);
											tempvec.push_back(LEFT_I_EACH);
											tempvec.push_back(0);
											tempvec.push_back(0);
											vec.push_back(tempvec);
										}

										if(index1==2&&index2==3)
										{
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(count-1-left_i/type1);
											else
												tempvec.push_back(count-left_i/type1);

											tempvec.push_back(0);
											tempvec.push_back(array11_i[k]);
											tempvec.push_back(array11_ii[k]);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(1+left_i/type1);
											else
												tempvec.push_back(left_i/type1);
											tempvec.push_back(0);
											tempvec.push_back(LEFT_II_EACH);
											tempvec.push_back(0);
											vec.push_back(tempvec);
										}
										if(index1==1&&index2==3)
										{
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(count-1-left_i/type1);
											else
												tempvec.push_back(count-left_i/type1);

											tempvec.push_back(array11_i[k]);
											tempvec.push_back(0);
											tempvec.push_back(array11_ii[k]);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(1+left_i/type1);
											else
												tempvec.push_back(left_i/type1);
											tempvec.push_back(LEFT_I_EACH);
											tempvec.push_back(0);
											tempvec.push_back(0);
											vec.push_back(tempvec);
										}
								
							
							

										tempvec.clear();
										if(f==true)         // numof1_1
										{
											if(numOf1_1)
											{
												tempvec.push_back(1);
												tempvec.push_back(numOf1_1);
												tempvec.push_back(array_1_1_i[index1_1]);
												tempvec.push_back(array_1_1_ii[index1_1]);
												tempvec.push_back(array_1_1_iii[index1_1]);
												vec.push_back(tempvec);
											}
										}
										else
										{
											tempvec.push_back(1);
											tempvec.push_back(numOf1_1-1);
											tempvec.push_back(array_1_1_i[index1_1]);
											tempvec.push_back(array_1_1_ii[index1_1]);
											tempvec.push_back(array_1_1_iii[index1_1]);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											tempvec.push_back(1);
											tempvec.push_back(array_1_1_i[other]);
											tempvec.push_back(array_1_1_ii[other]);
											tempvec.push_back(array_1_1_iii[other]);
											vec.push_back(tempvec);
										}

										tempvec.clear();
										if(numOf1_2)         // numof1_2
										{
											tempvec.push_back(2);
											tempvec.push_back(numOf1_2);
											tempvec.push_back(array_1_2_i[index1_2]);
											tempvec.push_back(array_1_2_ii[index1_2]);
											tempvec.push_back(array_1_2_iii[index1_2]);
											vec.push_back(tempvec);
										}
						
										tempvec.clear();
										if(i)         // i
										{
							
											/*if(index1==1&&index2==2)
											{
												tempvec.push_back(2);
												tempvec.push_back(i);
												tempvec.push_back(array12_i[j]);
												tempvec.push_back(array12_ii[j]);
												tempvec.push_back(0);
												vec.push_back(tempvec);
											}
											if(index1==2&&index2==3)
											{
												tempvec.push_back(2);
												tempvec.push_back(i);
												tempvec.push_back(0);
												tempvec.push_back(array12_i[j]);
												tempvec.push_back(array12_ii[j]);
												vec.push_back(tempvec);
											}
											if(index1==1&&index2==3)
											{
												tempvec.push_back(2);
												tempvec.push_back(i);
												tempvec.push_back(array12_i[j]);
												tempvec.push_back(0);
												tempvec.push_back(array12_ii[j]);
												vec.push_back(tempvec);
											}*/
											if(index1==1&&index2==2)
											{
												if(ff)
												{
													tempvec.push_back(2);
													tempvec.push_back(i);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													tempvec.push_back(0);
													vec.push_back(tempvec);
												}
												else
												{
													tempvec.push_back(2);
													tempvec.push_back(i-1);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													tempvec.push_back(0);
													vec.push_back(tempvec);

													tempvec.clear();
													tempvec.push_back(2);
													tempvec.push_back(1);
													tempvec.push_back(array12_i[p]);
													tempvec.push_back(array12_ii[p]);
													tempvec.push_back(0);
													vec.push_back(tempvec);
												}
								
											}
											if(index1==2&&index2==3)
											{
												if(ff)
												{
													tempvec.push_back(2);
													tempvec.push_back(i);
													tempvec.push_back(0);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);
												}
												else
												{
													tempvec.push_back(2);
													tempvec.push_back(i-1);
													tempvec.push_back(0);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);

													tempvec.clear();
													tempvec.push_back(2);
													tempvec.push_back(1);
													tempvec.push_back(0);
													tempvec.push_back(array12_i[p]);
													tempvec.push_back(array12_ii[p]);
													vec.push_back(tempvec);
												}
								
											}
											if(index1==1&&index2==3)
											{
												if(ff)
												{
													tempvec.push_back(2);
													tempvec.push_back(i);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(0);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);
												}
												else
												{
													tempvec.push_back(2);
													tempvec.push_back(i-1);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(0);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);

													tempvec.clear();
													tempvec.push_back(2);
													tempvec.push_back(1);
													tempvec.push_back(array12_i[p]);
													tempvec.push_back(0);
													tempvec.push_back(array12_ii[p]);
													vec.push_back(tempvec);
												}
								
											}
										}
									
									}
									
									break;
								}

							}
							else
							{
								//left_ii -= array_1_1_ii[m];
								left_i = left_i - array11_i[m - 1];  // shan yi ge
								//printf("left_i %d\n", left_i);

								count += 1;
								count += left_i / type1;  // max i is 8 in 1-1
								if (left_i % type1)
								{
									count += 1;
								}
								if(finalcount>(i+count+numOf1_1+numOf1_2))
								{
									finalcount=i+count+numOf1_1+numOf1_2;
									curCount11=count+numOf1_1;
									curCount12=i+numOf1_2;
									final1=count+numOf1_1;
									final2=i+numOf1_2;

									vec.clear();
									tempvec.clear();
						
							
									if(index1==1&&index2==2)  //count
									{
										tempvec.push_back(1);
										if(left_i%type1)
											tempvec.push_back(count-2-left_i/type1);
										else
											tempvec.push_back(count-1-left_i/type1);

										tempvec.push_back(array11_i[k]);
										tempvec.push_back(array11_ii[k]);
										tempvec.push_back(0);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(1);
										if(left_i%type1)
											tempvec.push_back(1+left_i/type1);
										else
											tempvec.push_back(left_i/type1);
										tempvec.push_back(LEFT_I_EACH);
										tempvec.push_back(0);
										tempvec.push_back(0);
										vec.push_back(tempvec);

										tempvec.clear();
										tempvec.push_back(1);
										tempvec.push_back(1);
										tempvec.push_back(array11_i[m - 1]);
										tempvec.push_back(array11_ii[m - 1]);
										tempvec.push_back(0);
										vec.push_back(tempvec);
									}

										if(index1==2&&index2==3)
										{
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(count-2-left_i/type1);
											else
												tempvec.push_back(count-1-left_i/type1);

											tempvec.push_back(0);
											tempvec.push_back(array11_i[k]);
											tempvec.push_back(array11_ii[k]);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(1+left_i/type1);
											else
												tempvec.push_back(left_i/type1);
											tempvec.push_back(0);
											tempvec.push_back(LEFT_II_EACH);
											tempvec.push_back(0);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											tempvec.push_back(1);
											tempvec.push_back(0);
											tempvec.push_back(array11_i[m - 1]);
											tempvec.push_back(array11_ii[m - 1]);
											vec.push_back(tempvec);

										}
										if(index1==1&&index2==3)
										{
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(count-2-left_i/type1);
											else
												tempvec.push_back(count-left_i/type1);

											tempvec.push_back(array11_i[k]);
											tempvec.push_back(0);
											tempvec.push_back(array11_ii[k]);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											if(left_i%type1)
												tempvec.push_back(1+left_i/type1);
											else
												tempvec.push_back(left_i/type1);
											tempvec.push_back(LEFT_I_EACH);
											tempvec.push_back(0);
											tempvec.push_back(0);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											tempvec.push_back(1);
											tempvec.push_back(array11_i[m - 1]);
											tempvec.push_back(0);
											tempvec.push_back(array11_ii[m - 1]);
											vec.push_back(tempvec);
										}
								
							
							

										tempvec.clear();
										if(f==true)         // numof1_1
										{
											if(numOf1_1)
											{
												tempvec.push_back(1);
												tempvec.push_back(numOf1_1);
												tempvec.push_back(array_1_1_i[index1_1]);
												tempvec.push_back(array_1_1_ii[index1_1]);
												tempvec.push_back(array_1_1_iii[index1_1]);
												vec.push_back(tempvec);
											}
										}
										else
										{
											tempvec.push_back(1);
											tempvec.push_back(numOf1_1-1);
											tempvec.push_back(array_1_1_i[index1_1]);
											tempvec.push_back(array_1_1_ii[index1_1]);
											tempvec.push_back(array_1_1_iii[index1_1]);
											vec.push_back(tempvec);

											tempvec.clear();
											tempvec.push_back(1);
											tempvec.push_back(1);
											tempvec.push_back(array_1_1_i[other]);
											tempvec.push_back(array_1_1_ii[other]);
											tempvec.push_back(array_1_1_iii[other]);
											vec.push_back(tempvec);
										}

										tempvec.clear();
										if(numOf1_2)         // numof1_2
										{
											tempvec.push_back(2);
											tempvec.push_back(numOf1_2);
											tempvec.push_back(array_1_2_i[index1_2]);
											tempvec.push_back(array_1_2_ii[index1_2]);
											tempvec.push_back(array_1_2_iii[index1_2]);
											vec.push_back(tempvec);
										}
						
										tempvec.clear();
										if(i)         // i
										{
							
											/*if(index1==1&&index2==2)
											{
												tempvec.push_back(2);
												tempvec.push_back(i);
												tempvec.push_back(array12_i[j]);
												tempvec.push_back(array12_ii[j]);
												tempvec.push_back(0);
												vec.push_back(tempvec);
											}
											if(index1==2&&index2==3)
											{
												tempvec.push_back(2);
												tempvec.push_back(i);
												tempvec.push_back(0);
												tempvec.push_back(array12_i[j]);
												tempvec.push_back(array12_ii[j]);
												vec.push_back(tempvec);
											}
											if(index1==1&&index2==3)
											{
												tempvec.push_back(2);
												tempvec.push_back(i);
												tempvec.push_back(array12_i[j]);
												tempvec.push_back(0);
												tempvec.push_back(array12_ii[j]);
												vec.push_back(tempvec);
											}*/
											if(index1==1&&index2==2)
											{
												if(ff)
												{
													tempvec.push_back(2);
													tempvec.push_back(i);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													tempvec.push_back(0);
													vec.push_back(tempvec);
												}
												else
												{
													tempvec.push_back(2);
													tempvec.push_back(i-1);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													tempvec.push_back(0);
													vec.push_back(tempvec);

													tempvec.clear();
													tempvec.push_back(2);
													tempvec.push_back(1);
													tempvec.push_back(array12_i[p]);
													tempvec.push_back(array12_ii[p]);
													tempvec.push_back(0);
													vec.push_back(tempvec);
												}
								
											}
											if(index1==2&&index2==3)
											{
												if(ff)
												{
													tempvec.push_back(2);
													tempvec.push_back(i);
													tempvec.push_back(0);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);
												}
												else
												{
													tempvec.push_back(2);
													tempvec.push_back(i-1);
													tempvec.push_back(0);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);

													tempvec.clear();
													tempvec.push_back(2);
													tempvec.push_back(1);
													tempvec.push_back(0);
													tempvec.push_back(array12_i[p]);
													tempvec.push_back(array12_ii[p]);
													vec.push_back(tempvec);
												}
								
											}
											if(index1==1&&index2==3)
											{
												if(ff)
												{
													tempvec.push_back(2);
													tempvec.push_back(i);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(0);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);
												}
												else
												{
													tempvec.push_back(2);
													tempvec.push_back(i-1);
													tempvec.push_back(array12_i[j]);
													tempvec.push_back(0);
													tempvec.push_back(array12_ii[j]);
													vec.push_back(tempvec);

													tempvec.clear();
													tempvec.push_back(2);
													tempvec.push_back(1);
													tempvec.push_back(array12_i[p]);
													tempvec.push_back(0);
													tempvec.push_back(array12_ii[p]);
													vec.push_back(tempvec);
												}
								
											}
										}
								
								}
								//printf("left_ii < array_1_1_ii[l] l= %d, count = %d\n", m, count);
								//printf("finalcount %d", finalcount);
								break;
							}
						}

						break;
					}

				}


				if (0.2*(count+numOf1_1) >= (i+numOf1_2))
				{
					if (finalcount > (count+ numOf1_1 + i + numOf1_2))
					{
						finalcount = count + i + numOf1_1 + numOf1_2;
						curCount11 = count + numOf1_1;
						curCount12 = i + numOf1_2;
						modifyflag = true;
						final1=count+numOf1_1;
						final2=i+numOf1_2;
						//tempi = i;
						//tempj = j;
						//tempk = k;

					}
					//printf("finalcount %d\n", finalcount);
					//printf("numof1_2=%d i= %d  k=%d\n",numOf1_2, i, k);
					//printf("1_2 %d %d %d\n", (*it)[0], (*it)[1],(*it)[2]);
					//printf("1_1: %d 1_2: %d\n",count+numOf1_1 , (i + numOf1_2));
				
				}
				else
					faultcount++;

			}

			if (faultcount == n1)
			{
				flag = false;
				break;
			}


		}
		if (flag == false)
			break;

	}
	End: flag=false;
	return flag;

}


int main()
{
	int I,II,III;
	int i, j,k;
	int left_i, left_ii,left_iii;
	int max_i, max_ii,max_iii ;
	//int finalcount = 0x7fffffff;
	int count;
	int faultcount;
	bool flag = true;
	int temp_left_i, temp_left_ii,temp_left_iii;
	
	//int tempi, tempj, tempk;
	bool judgeTwoCars(bool f,int numOf1_1,int index1_1,int numOf1_2,int index1_2,int other, int left1, int left2, int array11_i[], int array11_ii[], int index1, int n1, int array12_i[], int array12_ii[], int index2, int n2,int &curCount11,int &curCount12);
	int curCount11=0, curCount12=0;
	
	
	printf("请输入I型乘用车数目(没有用0代替):\n");
	cin>>I;
	printf("请输入II型乘用车数目(没有用0代替):\n");
	cin>>II;
	printf("请输入III型乘用车数目(没有用0代替):\n");
	cin>>III;
	for (i = 0; i< MAX; i++)  //number of 1-2
	{

		max_i = I;
		max_ii = II;
		max_iii = III;
		faultcount = 0;
		if ((i * 5 + i) >= finalcount)
		{
			//printf("finalcount %d\n", finalcount);
			//printf("(i * 5 + i) >= finalcount\n");
			break;
		}

		
		for (j = 0; j < MAX_1_2; j++)
		{
			bool flag1 = true;
			count = 0x7fffffff;             // 0x7fffffff
			left_i = max_i;
			left_ii = max_ii;
			left_iii = max_iii;
			if((left_i<array_1_2_i[j]*i)||(left_ii<array_1_2_ii[j]*i)||(left_iii<array_1_2_iii[j]*i))
				continue;

			left_i -= array_1_2_i[j] * i;
			left_ii -= array_1_2_ii[j]*i;
			left_iii -= array_1_2_iii[j]*i;
			

			if (left_i == 0 && left_ii == 0 && left_iii == 0)
				break;

			if (left_i != 0 && left_ii == 0 && left_iii == 0)
			{
				count = left_i / LEFT_I_EACH;
				if (left_i % LEFT_I_EACH)
					count += 1;
				if (0.2*count >= i)
				{
					if(finalcount>(count+i))
					{
						finalcount=count+i;
						final1=count;
						final2=i;
						//*******************
						vector<int> tempvec;
						tempvec.push_back(1);
						tempvec.push_back(count);
						tempvec.push_back(LEFT_I_EACH);
						tempvec.push_back(0);
						tempvec.push_back(0);
						vec.push_back(tempvec);
						if(i!=0)
						{	
							tempvec.clear();
							tempvec.push_back(2);
							tempvec.push_back(i);
							tempvec.push_back(array_1_2_i[j]);
							tempvec.push_back(array_1_2_ii[j]);
							tempvec.push_back(array_1_2_iii[j]);
							vec.push_back(tempvec);
						}

					}
					
					
					goto L1;
				
				}
				break;
			}
			
			if (left_i == 0 && left_ii != 0 && left_iii == 0)
			{
				count = left_ii / LEFT_II_EACH;
				if (left_ii % LEFT_II_EACH)
					count += 1;
				if (0.2*count >= i)
				{
					if(finalcount>(count+i))
					{
						finalcount=count+i;
						final1=count;
						final2=i;
						vector<int> tempvec;
						tempvec.push_back(1);
						tempvec.push_back(count);
						tempvec.push_back(0);
						tempvec.push_back(LEFT_II_EACH);
						tempvec.push_back(0);
						vec.push_back(tempvec);
						if(i!=0)
						{	
							tempvec.clear();
							tempvec.push_back(2);
							tempvec.push_back(i);
							tempvec.push_back(array_1_2_i[j]);
							tempvec.push_back(array_1_2_ii[j]);
							tempvec.push_back(array_1_2_iii[j]);
							vec.push_back(tempvec);
						}
					}
					
					goto L1;
				}
				break;
			}
			if (left_i == 0 && left_ii == 0 && left_iii != 0)
			{
				count = left_iii / LEFT_III_EACH;
				if (left_iii % LEFT_III_EACH)
					count += 1;
				if (0.2*count >= i)
				{
					if(finalcount>(count+i))
					{
						finalcount=count+i;
						final1=count;
						final2=i;
						vector<int> tempvec;
						tempvec.push_back(1);
						tempvec.push_back(count);
						tempvec.push_back(0);
						tempvec.push_back(0);
						tempvec.push_back(LEFT_III_EACH);
						vec.push_back(tempvec);
						if(i!=0)
						{	
							tempvec.clear();
							tempvec.push_back(2);
							tempvec.push_back(i);
							tempvec.push_back(array_1_2_i[j]);
							tempvec.push_back(array_1_2_ii[j]);
							tempvec.push_back(array_1_2_iii[j]);
							vec.push_back(tempvec);
						}
					}
					
					goto L1;
					
				}
				break;
			}

			if (left_i != 0 && left_ii != 0 && left_iii == 0)
			{
			
				flag1 = judgeTwoCars(true,0,-1,i,j,-1, left_i, left_ii, array_11_1_i_ii,array_11_2_i_ii, 1, MAX_11_i_ii,array_12_1_i_ii ,array_12_2_i_ii, 2, MAX_12_i_ii,curCount11,curCount12);
				if(finalcount>(curCount11+curCount12))
				{
					finalcount=curCount11+curCount12;
					final1=curCount11;
					final2=curCount12;
				}
				
				goto L1;
				if (flag1 == false)
					faultcount++;
				break;
			}

			if (left_i != 0 && left_ii == 0 && left_iii != 0)
			{
				
				flag1 = judgeTwoCars(true,0,-1,i,j,-1, left_i, left_iii, array_11_1_i_iii, array_11_2_i_iii, 1, MAX_11_i_iii,array_12_1_i_iii,array_12_2_i_iii , 3, MAX_12_i_iii,curCount11,curCount12);
				//printf("world\n");
				//printf("%d\n",finalcount);

				if(finalcount>(curCount11+curCount12))
				{
					finalcount=curCount11+curCount12;
					final1=curCount11;
					final2=curCount12;
				}
				
				goto L1;
				if (flag1 == false)
					faultcount++;
				break;
			}

			if (left_i == 0 && left_ii != 0 && left_iii != 0)
			{
				

				flag1 = judgeTwoCars(true,0,-1,i,j,-1, left_ii, left_iii, array_11_1_ii_iii, array_11_2_ii_iii, 2, MAX_11_ii_iii,array_12_1_ii_iii,array_12_2_ii_iii , 3, MAX_12_ii_iii,curCount11,curCount12);
				if(finalcount>(curCount11+curCount12))
				{
					finalcount=curCount11+curCount12;
					final1=curCount11;
					final2=curCount12;
				}
				
				goto L1;
				if (flag1 == false)
					faultcount++;
				break;
			}

			temp_left_i = left_i;
			temp_left_ii =left_ii;
			temp_left_iii = left_iii;

			for ( k = 0; k < MAX_1_1; k++)  // each of 1-1 type
			{
				
				count = 0x7fffffff;
				int tempcount;
				left_i = temp_left_i;
				left_ii = temp_left_ii;
				left_iii = temp_left_iii;
				//printf("%d   %d\n", left_i, left_ii);
				if (array_1_1_i[k] == 0 || array_1_1_ii[k] == 0||array_1_1_iii[k] == 0)
					continue;

				count = min(count, left_i / array_1_1_i[k]);
				count = min(count, left_ii / array_1_1_ii[k]);
				count = min(count, left_iii / array_1_1_iii[k]);

				left_i = left_i - array_1_1_i[k] * count;
				left_ii = left_ii - array_1_1_ii[k] * count;
				left_iii = left_iii - array_1_1_iii[k] * count;

				if (left_i == 0 && left_ii == 0 && left_iii == 0)
				{
					if (0.2*count >= i)
					{
						if(finalcount>(count+i))
						{
							finalcount=count+i;
							final1=count;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(array_1_1_i[k]);
							tempvec.push_back(array_1_1_ii[k]);
							tempvec.push_back(array_1_1_iii[k]);
							vec.push_back(tempvec);
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}
						//finalcount = min(finalcount, (count+i));

						//printf("1_1: %d 1_2: %d \n",count,i);
						//printf("finalcount %d\n", finalcount);
						goto L1;
					}
				}

				if (left_i != 0 && left_ii == 0 && left_iii == 0)
				{
					tempcount = left_i / LEFT_I_EACH;
					if (left_i % LEFT_I_EACH)
						tempcount += 1;
					if (0.2*(count+tempcount) >= i)
					{
						if(finalcount>(tempcount+count+i))
						{
							finalcount=tempcount+count+i;
							final1=count+tempcount;
							final2=i;
							
							vec.clear();
							vector<int> tempvec;
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(array_1_1_i[k]);
							tempvec.push_back(array_1_1_ii[k]);
							tempvec.push_back(array_1_1_iii[k]);
							vec.push_back(tempvec);
							
							tempvec.clear();
							tempvec.push_back(1);
							tempvec.push_back(tempcount);
							tempvec.push_back(LEFT_I_EACH);
							tempvec.push_back(0);
							tempvec.push_back(0);
							vec.push_back(tempvec);
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}

						//finalcount = min(finalcount, (count+i));
						//printf("1_1: %d 1_2: %d \n",count,i);
						//printf("finalcount %d\n", finalcount);
						goto L1;

					}
					break;
				}
			
				if (left_i == 0 && left_ii != 0 && left_iii == 0)
				{
					tempcount = left_ii / LEFT_II_EACH;
					if (left_ii % LEFT_II_EACH)
						tempcount += 1;
					if (0.2*(count+tempcount) >= i)
					{
						if(finalcount>(tempcount+count+i))
						{
							finalcount=tempcount+count+i;
							final1=count+tempcount;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(array_1_1_i[k]);
							tempvec.push_back(array_1_1_ii[k]);
							tempvec.push_back(array_1_1_iii[k]);
							vec.push_back(tempvec);
							
							tempvec.clear();
							tempvec.push_back(1);
							tempvec.push_back(tempcount);
							tempvec.push_back(0);
							tempvec.push_back(LEFT_II_EACH);
							tempvec.push_back(0);
							vec.push_back(tempvec);
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}
						//finalcount = min(finalcount, (count + i));
						//printf("1_1: %d 1_2: %d \n", count, i);
						//printf("finalcount %d\n", finalcount);
						goto L1;
					}
					break;
				}
				if (left_i == 0 && left_ii == 0 && left_iii != 0)
				{
					tempcount = left_iii / LEFT_III_EACH;
					if (left_iii % LEFT_III_EACH)
						tempcount += 1;
					if (0.2*(count+tempcount) >= i)
					{
						if(finalcount>(tempcount+count+i))
						{
							finalcount=tempcount+count+i;
							final1=count+tempcount;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							tempvec.push_back(1);
							tempvec.push_back(count);
							tempvec.push_back(array_1_1_i[k]);
							tempvec.push_back(array_1_1_ii[k]);
							tempvec.push_back(array_1_1_iii[k]);
							vec.push_back(tempvec);
							
							tempvec.clear();
							tempvec.push_back(1);
							tempvec.push_back(tempcount);
							tempvec.push_back(0);
							tempvec.push_back(0);
							tempvec.push_back(LEFT_III_EACH);
							vec.push_back(tempvec);
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}	
						goto L1;

					}
					break;
				}

				if (left_i != 0 && left_ii != 0 && left_iii == 0)   
				{
					
					flag1 = judgeTwoCars(true,count,k,i,j,-1, left_i, left_ii, array_11_1_i_ii,array_11_2_i_ii, 1, MAX_11_i_ii,array_12_1_i_ii ,array_12_2_i_ii, 2, MAX_12_i_ii,curCount11,curCount12);
					if(finalcount>(curCount11+curCount12))
					{
						finalcount=curCount11+curCount12;
						final1=curCount11;
						final2=curCount12;

					}
					
					goto L1;
					if (flag1 == false)
						faultcount++;
					break;
				}

				if (left_i != 0 && left_ii == 0 && left_iii != 0)
				{
					flag1 = judgeTwoCars(true,count,k,i,j,-1, left_i, left_iii, array_11_1_i_iii, array_11_2_i_iii, 1, MAX_11_i_iii,array_12_1_i_iii,array_12_2_i_iii , 3, MAX_12_i_iii,curCount11,curCount12);
					if(finalcount>(curCount11+curCount12))
					{
						finalcount=curCount11+curCount12;
						final1=curCount11;
						final2=curCount12;
					}
					
					goto L1;
					if (flag1 == false)
						faultcount++;
					break;
				}

				if (left_i == 0 && left_ii != 0 && left_iii != 0)
				{
					flag1 = judgeTwoCars(true,count,k,i,j,-1, left_ii, left_iii, array_11_1_ii_iii, array_11_2_ii_iii, 2, MAX_11_ii_iii,array_12_1_ii_iii,array_12_2_ii_iii , 3, MAX_12_ii_iii,curCount11,curCount12);
					if(finalcount>(curCount11+curCount12))
					{
						finalcount=curCount11+curCount12;
						final1=curCount11;
						final2=curCount12;
					}
					
					goto L1;
					if (flag1 == false)
						faultcount++;
					break;
				}


				for (int l = 0; l < MAX_1_1; l++)
				{
					if (left_i <= array_1_1_i[l] && left_ii <= array_1_1_ii[l]&&left_iii<=array_1_1_iii[l])
					{
						count += 1;
					//	printf("left_i <= array_1_1_i[l] && left_ii <= array_1_1_ii[l] && left_ii <= array_1_1_ii[l], count = %d\n", count);
						if(finalcount>(count+i))
						{
							finalcount=count+i;
							final1=count;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							tempvec.push_back(1);
							tempvec.push_back(count-1);
							tempvec.push_back(array_1_1_i[k]);
							tempvec.push_back(array_1_1_ii[k]);
							tempvec.push_back(array_1_1_iii[k]);
							vec.push_back(tempvec);
							
							tempvec.clear();
							tempvec.push_back(1);
							tempvec.push_back(1);
							tempvec.push_back(array_1_1_i[l]);
							tempvec.push_back(array_1_1_ii[l]);
							tempvec.push_back(array_1_1_iii[l]);
							vec.push_back(tempvec);
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}
						//printf("finalcount %d", finalcount);
						break;
					}

					if (left_i <= array_1_1_i[l] && left_ii <= array_1_1_ii[l] && left_iii>array_1_1_iii[l])   
					{

						count += 1;
						left_iii = left_iii-array_1_1_iii[l] ;
						count += left_iii / LEFT_III_EACH;  
						if (left_iii % LEFT_III_EACH)
							count += 1;
						if(finalcount>(count+i))
						{
							finalcount=count+i;
							final1=count;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							if(left_iii%LEFT_III_EACH)
							{
								tempvec.push_back(1);
								tempvec.push_back(count-2);
								tempvec.push_back(array_1_1_i[k]);
								tempvec.push_back(array_1_1_ii[k]);
								tempvec.push_back(array_1_1_iii[k]);
								vec.push_back(tempvec);
								
								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(2);
								tempvec.push_back(array_1_1_i[l]);
								tempvec.push_back(array_1_1_ii[l]);
								tempvec.push_back(array_1_1_iii[l]);
								vec.push_back(tempvec);
							}
							else
							{
								tempvec.push_back(1);
								tempvec.push_back(count-1);
								tempvec.push_back(array_1_1_i[k]);
								tempvec.push_back(array_1_1_ii[k]);
								tempvec.push_back(array_1_1_iii[k]);
								vec.push_back(tempvec);
								
								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array_1_1_i[l]);
								tempvec.push_back(array_1_1_ii[l]);
								tempvec.push_back(array_1_1_iii[l]);
								vec.push_back(tempvec);
							}
							
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}
						//printf("left_i <= array_1_1_i[l] l= %d, count = %d\n", l, count);
						//printf("finalcount %d", finalcount);
						break;
					}

					if (left_i <= array_1_1_i[l] && left_ii > array_1_1_ii[l] && left_iii<=array_1_1_iii[l]) 
					{
						count += 1;
						left_ii = left_ii - array_1_1_ii[l];
						count += left_ii / LEFT_II_EACH; 
						if (left_ii % LEFT_II_EACH)
							count += 1;
						if(finalcount>(count+i))
						{
							finalcount=count+i;
							final1=count;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							if(left_ii%LEFT_II_EACH)
							{
								tempvec.push_back(1);
								tempvec.push_back(count-2);
								tempvec.push_back(array_1_1_i[k]);
								tempvec.push_back(array_1_1_ii[k]);
								tempvec.push_back(array_1_1_iii[k]);
								vec.push_back(tempvec);
								
								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(2);
								tempvec.push_back(array_1_1_i[l]);
								tempvec.push_back(array_1_1_ii[l]);
								tempvec.push_back(array_1_1_iii[l]);
								vec.push_back(tempvec);
							}
							else
							{
								tempvec.push_back(1);
								tempvec.push_back(count-1);
								tempvec.push_back(array_1_1_i[k]);
								tempvec.push_back(array_1_1_ii[k]);
								tempvec.push_back(array_1_1_iii[k]);
								vec.push_back(tempvec);
								
								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array_1_1_i[l]);
								tempvec.push_back(array_1_1_ii[l]);
								tempvec.push_back(array_1_1_iii[l]);
								vec.push_back(tempvec);
							}
							
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}
						//printf("left_i <= array_1_1_i[l] l= %d, count = %d\n", l, count);
						//printf("finalcount %d", finalcount);
						break;
					}

					if (left_i > array_1_1_i[l] && left_ii <= array_1_1_ii[l] && left_iii <= array_1_1_iii[l]) 
					{
						count += 1;
						left_i = left_i - array_1_1_i[l];
						count += left_i / LEFT_I_EACH;  
						if (left_i % LEFT_I_EACH)
							count += 1;
						if(finalcount>(count+i))
						{
							finalcount=count+i;
							final1=count;
							final2=i;

							vec.clear();
							vector<int> tempvec;
							if(left_i%LEFT_I_EACH)
							{
								tempvec.push_back(1);
								tempvec.push_back(count-2);
								tempvec.push_back(array_1_1_i[k]);
								tempvec.push_back(array_1_1_ii[k]);
								tempvec.push_back(array_1_1_iii[k]);
								vec.push_back(tempvec);
								
								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(2);
								tempvec.push_back(array_1_1_i[l]);
								tempvec.push_back(array_1_1_ii[l]);
								tempvec.push_back(array_1_1_iii[l]);
								vec.push_back(tempvec);
							}
							else
							{
								tempvec.push_back(1);
								tempvec.push_back(count-1);
								tempvec.push_back(array_1_1_i[k]);
								tempvec.push_back(array_1_1_ii[k]);
								tempvec.push_back(array_1_1_iii[k]);
								vec.push_back(tempvec);
								
								tempvec.clear();
								tempvec.push_back(1);
								tempvec.push_back(1);
								tempvec.push_back(array_1_1_i[l]);
								tempvec.push_back(array_1_1_ii[l]);
								tempvec.push_back(array_1_1_iii[l]);
								vec.push_back(tempvec);
							}
							
							if(i!=0)
							{	
								tempvec.clear();
								tempvec.push_back(2);
								tempvec.push_back(i);
								tempvec.push_back(array_1_2_i[j]);
								tempvec.push_back(array_1_2_ii[j]);
								tempvec.push_back(array_1_2_iii[j]);
								vec.push_back(tempvec);
							}
						}
						
						break;
					}
					if (left_i > array_1_1_i[l] && left_ii > array_1_1_ii[l] && left_iii <= array_1_1_iii[l])
					{
						count += 1;
						left_i = left_i - array_1_1_i[l];
						left_ii = left_ii - array_1_1_ii[l];
						flag1 = judgeTwoCars(false,count,k,i,j,l, left_i, left_ii, array_11_1_i_ii, array_11_2_i_ii, 1, MAX_11_i_ii, array_12_1_i_ii, array_12_2_i_ii, 2, MAX_12_i_ii,curCount11,curCount12);
						
						if(finalcount>(curCount11+curCount12))
						{
							finalcount=curCount11+curCount12;
							final1=curCount11;
							final2=curCount12;
						}
						if (flag1 == false)
							faultcount++;
						continue;

					}
					if (left_i > array_1_1_i[l] && left_ii <= array_1_1_ii[l] && left_iii > array_1_1_iii[l])
					{
						count += 1;
						left_i = left_i - array_1_1_i[l];
						left_iii = left_iii - array_1_1_iii[l];
						flag1 = judgeTwoCars(false,count,k,i,j,l, left_i, left_iii, array_11_1_i_iii, array_11_2_i_iii, 1, MAX_11_i_iii, array_12_1_i_iii, array_12_2_i_iii, 3, MAX_12_i_iii,curCount11,curCount12);
						if(finalcount>(curCount11+curCount12))
						{
							finalcount=curCount11+curCount12;
							final1=curCount11;
							final2=curCount12;
						}
						if (flag1 == false)
							faultcount++;
						continue;

					}
					if (left_i <= array_1_1_i[l] && left_ii > array_1_1_ii[l] && left_iii > array_1_1_iii[l])
					{
						count += 1;
						left_ii = left_ii - array_1_1_ii[l];
						left_iii = left_iii - array_1_1_iii[l];
						flag1 = judgeTwoCars(false,count,k,i,j,l, left_ii, left_iii, array_11_1_ii_iii, array_11_2_ii_iii, 2, MAX_11_ii_iii, array_12_1_ii_iii, array_12_2_ii_iii, 3, MAX_12_ii_iii,curCount11,curCount12);
						if(finalcount>(curCount11+curCount12))
						{
							finalcount=curCount11+curCount12;
							final1=curCount11;
							final2=curCount12;
						}
						if (flag1 == false)
							faultcount++;
						continue;
					}



				}


				if (0.2*curCount11 >= curCount12)
				{
					if (finalcount > (curCount11 + curCount12))
					{
						finalcount = curCount11 + curCount12;
						final1 = curCount11;
						final2 = curCount12;

					}
					//printf("finalcount %d\n", finalcount);
					//printf("i= %d j= %d k=%d\n", i, j, k);


				}
				else
					faultcount++;
			}


		}
		if (faultcount == MAX_1_1)
		{
			flag = false;
			break;
		}
		if (flag == false)
			break;
		

		

	}
L1:	printf("\n1-1型，1-2型轿运车总数目为: %d \n",finalcount);
	printf("1-1型车数目为: %d \n1-2型车数目为: %d\n", final1,final2);
	if(I*II*III==0)
	{
		printf("方案\n");
		printf("显示I,II,III的数目均为最大承运车最大值\n");
		for(i=0;i<vec.size();i++)
		{
			if(vec[i][0]==1)
				printf("%d 1-1型车数目:%d  I型车:%d  II型车: %d III型车：%d\n",vec[i][0],vec[i][1],vec[i][2],vec[i][3],vec[i][4]);
			else
				printf("%d 1-2型车数目:%d  I型车:%d  II型车: %d III型车：%d\n",vec[i][0],vec[i][1],vec[i][2],vec[i][3],vec[i][4]);
		}
	}
	system("pause");
	return 0;
}
