#include<stdio.h>
int main(void)
{
	int n,juzhen[10][10],i,j;
	printf("请输入一个小于十的数，将生成一个宽度为该数的单位矩阵：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
				juzhen[i][j]=0;
			else
				juzhen[i][j]=1;
			
		}
	}
	printf("所生成的单位矩阵如下：\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",juzhen[i][j]);
		}
		printf("\n");
	}
	return 0;
}
