/* 10.3.c--������������������ĺ����� */
#include<stdio.h>
#define mod(x,y) (x)%(y)
int main(void)
{
	int a,b;
	printf("����������Ҫ�������������������");
	scanf("%d %d",&a,&b);
	printf("�������������������Ϊ��%d",mod(a,b));
	system("pause"); 
	return 0;
} 
