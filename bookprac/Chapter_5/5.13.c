/* 5.13.c--用迭代法求一个数的平方根 */
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,x1,x2;
	printf("请输入要求平方根的数：");
	scanf("%f",&a);
	x1=a/2;  /* 给x1赋一个初值 */
	x2=(x1+a/x1)/2;  
	while(fabs(x1-x2)>=1.0e-5)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	printf("%.0f 的平方根值为：%.4f",a,x2);
	return 0;
}
