/* 10.2.c--求解若干个数中最大的数 */
#include<stdio.h>
#define max2(x,y) ((x)>(y)?(x):(y))
#define max3(x,y,z) max2(z,max2(x,y))
int main(void)
{
	int a,b,c;
	printf("请分别输入a,b,c三个整数：\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("a,b中较大的数的值为；%d\n",max2(a,b));
	printf("a,b,c中最大的数的值为：%d\n",max3(a,b,c));
	printf("a-2,b+2中最大的数的值为：%d\n",max2(a-2,b+2));
	printf("a-2,b,c+2中最大的数的值为：%d\n",max3(a-2,b,c+2));
	return 0;
} 
