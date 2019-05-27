#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main(void)
{
	int i,j;
	int randint[15];
	srand((unsigned int)time(NULL));/* 设置随机函数rand的种子来改变生成数的方式 */
	printf("按ENTER继续生成随机数，按CTRL+C退出无限循环：\n");
	while(1)
	{
		for(i=0;i<15;i++)
		{
			randint[i]=rand()%100+1;/* 100既代表产生100个数也代表数的范围为0-99，后面加的数为使该范围内的起点和终点分别加1 */ 
		}
		for(i=0;i<15;i++)
		{
			printf("%d\t",randint[i]);
			if((i+1)%5==0)
				printf("\n");
		} 
		printf("\n");
		getchar();
	}
	return 0;
 } 
