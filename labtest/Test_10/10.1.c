/* 10.1.c--�ж������ĺ����� */ 
#include<stdio.h>
#define isodd(x) ((x)%2==0?1:0)
int main(void)
{
	int n; 
	printf("����������һ������������Ϊ�������������ֹ���У�");
	scanf("%d",&n);
	while(isodd(n))
		scanf("%d",&n);
	return 0;
}
