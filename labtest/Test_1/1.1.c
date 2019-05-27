#include<stdio.h>
int main (void)
{
	int a,b;
	printf("请输入两个数：");
	scanf("%d %d",&a,&b);
	printf("两个数的和为：%d\n"
		"两个数的差为：%d\n"
		"两个数的积为：%d\n"
		"两个数的商为：%d",
		a+b,a-b,a*b,a/b);
	getchar(); 
	getchar(); 
	return 0;
}
