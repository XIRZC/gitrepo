/* 6.7.c--���ħ���� */ 
#include<stdio.h>
int main(void)
{
	int mofang[10][10]={0};
	int n,i,j,rows,cols,nrows,ncols;
	printf("������һ��С��ʮ�������������ɸø�����ħ����");
	scanf("%d",&n);
	mofang[0][(n-1)/2]=1;
	rows=0;
	cols=(n-1)/2;
	for(i=2;i<n*n+1;i++)
	{
		nrows=(rows-1+n)%n;   /* �ȱ�֤������һ��������һ���ֱ�֤������Ϊ0������Ϊn-1ʱ��ʹ��ص���ȷ��λ�� */ 
		ncols=(cols+1+n)%n;
		if(mofang[nrows][ncols]!=0||rows==0&&cols==n-1)
		{  /* ����µ��������µ�������Ӧ��λ������ֵ�������������ֱ�Ϊ0��n-1ʱҪʱ�µ�����Ϊ��һ�У�����Ҳ�ÿ�������Ϊn-1����� */ 
			nrows=(rows+1+n)%n;
			ncols=cols;
		}	
		rows=nrows;  /* ÿ�ε����������������ĸ��� */ 
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
