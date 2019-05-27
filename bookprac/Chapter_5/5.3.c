/*  5.3.c--求两个数的最大公约数和最小公倍数  */
#include<stdio.h>
int main(void)
{
	int m,n,r,yue,bei,temp;
	printf("请输入两个数：");
	scanf("%d %d",&m,&n);
	yue=m;
	temp=n;
	while(temp!=0)  /* 辗转相除法计算最大公约数 */ 
	{
		r=yue%temp;
		yue=temp;
		temp=r;
	}
	bei=m*n/yue;  /* 最小公倍数乘以最大公约数等于两数乘积 */
	printf("两个数的最大公约数为：%d\n"
	"两个数的最小公倍数为：%d",yue,bei);
	getchar();
	getchar();
	return 0;
}
