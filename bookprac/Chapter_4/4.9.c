/* 4.9.c--计算某数的位数和各位并逆序输出 */ 
#include<stdio.h>
int main(void)
{
	int x,i,reverse,t;
	printf("请输入x的值：");
	scanf("%d",&x);
	reverse=0;
	if(x>=10000) 
		printf("位数多于5位，请重新输入\n");
	else
	{
		for(i=0;x>0;i++,x/=10)
		{
			reverse=reverse*10+x%10;
		}
		printf("总%d位数\n",i);
		t=reverse;
		for(i=1;reverse>0;i++,reverse/=10)
		{
			printf("第%d位数字为：%d\n",i,reverse%10);
		}
		printf("逆序输出数为：%d",t);
	}
	getchar();
	getchar();
	return 0; 
	
}
