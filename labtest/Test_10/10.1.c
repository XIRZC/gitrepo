/* 10.1.c--判断奇数的函数宏 */ 
#include<stdio.h>
#define isodd(x) ((x)%2==0?1:0)
int main(void)
{
	int n; 
	printf("请连续输入一个数，若该数为奇数，则程序终止运行：");
	scanf("%d",&n);
	while(isodd(n))
		scanf("%d",&n);
	return 0;
}
