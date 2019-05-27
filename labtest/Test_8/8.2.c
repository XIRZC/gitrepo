/* 8.2.c--找出矩阵中的最大值及其行和列 */
#include<stdio.h>
#include<math.h>
#include<time.h> 
int main(void)
{
	int juzhen[4][5];
	int i,j,max,row,col;
	max=0;
	srand((unsigned)time(NULL));  /* 设置随机数种子 */
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			juzhen[i][j]=rand()%20*11+i+j;/* 产生分散型的随机数 */
			if(max<juzhen[i][j])
			{
				max=juzhen[i][j];
				row=i;
				col=j;
			}
				
		}
	}
	printf("所生成的矩阵为：\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%6d  ",juzhen[i][j]);
		}
		printf("\n");
	}
	printf("最大值为：%d，对应行数为：%d,对应列数为：%d",max,row+1,col+1);
	return 0; 
}
