/* 16.3.c--���һ������ԭ�룬�����Լ����� */ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LEN sizeof(int)*8
void tobina(int n,int flag);
int main(void)
{
	int n;
	printf("����������һ��������q���뿪���룺");
	while(scanf("%d",&n))
	{
		printf("ԭ��Ϊ��");
		tobina(n,0);
		printf("����Ϊ��");
		tobina(n,1);
		printf("����Ϊ��");
		tobina(n,2);
	}
	system("pause");
	return 0;
}
void tobina(int n,int flag)
{
	int i,r[LEN],k=1,pn=abs(n);
	r[0]=(n>0?0:1);
	for(i=1;i<LEN;i++)
	{
		if(!r[0]||flag==0)
			r[32-i]=pn%2;
		else if(flag==1)
			r[32-i]=1-pn%2;
		else if(flag==2)
		{
			if(k-pn%2==1)
				r[32-i]=0;
			else
			{
				r[32-i]=1-pn%2+k;
				k=0;
			}
		}
		pn/=2;	
	}
	for(i=0;i<32;i++)
	{
		printf("%d",r[i]);
	}
	printf("\n");
	return;
}
