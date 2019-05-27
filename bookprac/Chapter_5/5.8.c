/* 5.8.c--求所有的水仙花数 */
#include<stdio.h>
int main(void)
{
	int i,first,second,third,count;
	count=0;
	for(i=100;i<1000;i++)
	{
		third=i%10;  /*计算个位数*/ 
		second=(i/10)%10;  /* 计算十位数 */
		first=i/100; /* 计算百位数*/ 
		if(third*third*third+second*second*second+first*first*first==i)
		{
			count++;
			printf("第%d个水仙花数为：%d\n",count,i);
		}
	}
	getchar();
	return 0;
}
