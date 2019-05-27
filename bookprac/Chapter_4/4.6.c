/* 4.6.c--根据x值计算相应的y函数值 */ 
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("请输入x的值：");
	scanf("%d",&x);
	if(x<1)
		y=x;
	else if(x>=1&&x<10)
		y=2*x-1;
	else
		y=3*x-11;
	printf("对应的y值为%d",y);
	getchar();
	getchar();
	return 0;
}
