/* 16.3.0.c--���һ������ԭ�룬�����Լ�����--ʧ�ܰ浫ȴ�������������һ���ö� */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PRINT
void tobina(int a);
void binaprint(int x);
int ftobina(int b,int flag);
int todec(int *pt);
int main(void)
{
	int n;
	printf("����������һ��������q���뿪���룺");
	while(scanf("%d",&n))
	{
		binaprint(n);
	}
	system("pause");
	return 0;
}
void tobina(int a)
{
	int temp=a;
	a=abs(a);
	int r[32]={0},count=0,i;
	r[count]=a%2;
	a/=2;
	while(a!=0)
	{
		count++;
		r[count]=a%2;
		a/=2;
	}
	if(temp<0)
		r[31]=1;
	for(i=31;i>=0;i--)
	{
		printf("%d",r[i]);
	}
	printf("\n");
	return;
}
int ftobina(int b,int flag)
{
	int temp=b,c=0;
	int r[32]={0},count=0,i;
	b=-b;
	r[count]=b%2;
	b/=2;
	while(b!=0)
	{
		count++;
		r[count]=b%2;
		b/=2;
	}
	r[31]=1;
	for(i=0;i<31;i++)
	{
		r[i]=(r[i]==1?0:1);
	}
	if(flag)
		c=todec(r)+1;
	else
	{	for(i=31;i>=0;i--)
		{
			printf("%d",r[i]);
		}
		printf("\n");
	}
	return c+1;
}
int todec(int *pt)
{
	int i,sum=0;
	for(i=0;i<31;i++)
		sum+=pt[i]*pow(2,i);
	return sum;
}
void binaprint(int x)
{
	int i;
	printf("�������ԭ��Ϊ��");
	tobina(x);
	if(x>=0)
	{
		printf("������ķ���Ϊ��");
		tobina(x);
		printf("������Ĳ���Ϊ��");
		tobina(x);
	}
	else
	{
		printf("������ķ���Ϊ��");
		ftobina(x,0);
		printf("������Ĳ���Ϊ��");
		tobina(-(ftobina(x,1)));
	}
	return;
}
