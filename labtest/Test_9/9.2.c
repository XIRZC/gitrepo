/* 9.2.c--利用梯形法求f(x)=sin(2x)+x的积分值的函数 */
#include<stdio.h>
#include<math.h>
float jifen(float a,float b,int n);
int main(void)
{
	int n;
	float a,b;
	printf("请输入积分上下限a,b和积分区间的划分个数n,按q离开:");
	while(scanf("%f %f %d",&a,&b,&n)==3)
		printf("n=10处的积分值为：%.3f\n",jifen(a,b,n)); 
	getchar();
	getchar();
	return 0;
 } 
float jifen(float a,float b,int n)
{
	float sum=0,x1,x2;
	int i;
	for(i=0;i<n;i++)
	{
		x1=a+(b-a)/n*i;
		x2=a+(b-a)/n*(i+1);
		sum+=(sin(2*x1)+x1+sin(2*x2)+x2)*(b-a)/n/2;
	}
	return sum;
	
}
