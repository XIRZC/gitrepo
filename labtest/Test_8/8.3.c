#include<stdio.h>
int main(void)
{
	int n,juzhen[10][10],i,j;
	printf("������һ��С��ʮ������������һ�����Ϊ�����ĵ�λ����");
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
	printf("�����ɵĵ�λ�������£�\n");
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
