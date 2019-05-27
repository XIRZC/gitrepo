#include<stdio.h>
#include<math.h> /*引用math.h头文件中的log10()函数*/
int main (void)
{
	int d=300000,p=6000; /*初始化各变量 */
	float r=0.01,m;
	
	m=log10(p/(p-d*r))/log10(1+r);
	printf("%.2f",m);
	getchar(); 
	return 0;
} 
