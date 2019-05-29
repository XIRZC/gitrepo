/* 10.3.c--两个整数相除的余数的函数宏 */
#include<stdio.h>
#define mod(x,y) (x)%(y)
int main(void)
{
	int a,b;
	printf("请输入两个要相除得余数的两个数：");
	scanf("%d %d",&a,&b);
	printf("这两个数相除所得余数为：%d",mod(a,b));
	system("pause"); 
	return 0;
} 
