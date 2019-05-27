/* 6.7.c--输出魔方阵 */ 
#include<stdio.h>
int main(void)
{
	int mofang[10][10]={0};
	int n,i,j,rows,cols,nrows,ncols;
	printf("请输入一个小于十的奇数，将生成该个数的魔方阵：");
	scanf("%d",&n);
	mofang[0][(n-1)/2]=1;
	rows=0;
	cols=(n-1)/2;
	for(i=2;i<n*n+1;i++)
	{
		nrows=(rows-1+n)%n;   /* 既保证行数加一，列数减一，又保证当行数为0，列数为n-1时能使其回到正确的位置 */ 
		ncols=(cols+1+n)%n;
		if(mofang[nrows][ncols]!=0||rows==0&&cols==n-1)
		{  /* 如果新的行数和新的列数对应的位置已有值或行数和列数分别为0和n-1时要时新的行数为下一行，并且也得考虑行数为n-1的情况 */ 
			nrows=(rows+1+n)%n;
			ncols=cols;
		}	
		rows=nrows;  /* 每次迭代后行数和列数的更新 */ 
		cols=ncols;
		mofang[rows][cols]=i;		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mofang[i][j]);
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
