/* 7.13.c--递归方法求n阶勒让德多项式的值 */
#include<stdio.h>
int P(int x,int n);  /* 函数声明 */ 
int main(void)
{
	int x,n;
	printf("请分别输入两个数x和n,按q离开：");
	while(scanf("%d %d",&x,&n))  /* 利用scanf()的返回值来控制循环的退出 */ 
		printf("n阶勒让德多项式的值为：%d\n",P(x,n));
	return 0;
}
int P(int x,int n)
{
	if(n==0)  /* 递归终止条件 */ 
		return 1;
	else if(n==1)  /* 递归终止条件 */ 
		return x;
	else 
		return ((2*n-1)*x-P(x,n-1)-(n-1)*P(x,n-2))/n;  /* 递推过程 */ 
}
