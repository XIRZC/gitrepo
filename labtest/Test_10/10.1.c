/* 10.1.c--�ж������ĺ����� */ 
#include<stdio.h>
#define isprime(x){\
	if(x==1)\
		flag=0;\
	else if(x==2)\
		flag=1;\
	else\
	{\
		for(i=2;i*i<=n;i++)\
		{\
			if(x%i==0)\
				flag=0;\
		}\
	}\
}
int main(void)
{
	int n,i,flag=1;
	printf("����������һ������������Ϊ�������������ֹ���У�");
	scanf("%d",&n);
	isprime(n);
	while(!flag)
	{
		scanf("%d",&n);
		isprime(n);
	}
	return 0;
}
