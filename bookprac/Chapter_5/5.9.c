/* 找出1000之内的所有完数 */
#include<stdio.h>
int main(void) 
{
	int yinzi[20];
	int i,j,k,sum,count;
	for(i=2;i<1001;i++) /* 外层循环使数由2递增到1000 */
	{
		sum=0;  /* 每次外循环迭代完都要更新加和和计数变量的值 */ 
		count=0;
		for(j=1;j<i;j++)  /* 内层循环算除了其本身的所有因子，并相加计数 */ 
		{ 
			if(i%j==0) 
			{
				yinzi[count]=j;
				sum+=j; 
				count++;
			}
		}
		if(sum==i)
		{
			printf("%d its factors are : ",i);
			printf("%d",yinzi[0]);
			for(k=1;k<count;k++)  /* 输出各因子 */
			{
				printf(",%d",yinzi[k]);
			}
			printf("\n"); 	
		}		
	}
	getchar(); 
	return 0; 
}
