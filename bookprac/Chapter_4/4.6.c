/* 4.6.c--����xֵ������Ӧ��y����ֵ */ 
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("������x��ֵ��");
	scanf("%d",&x);
	if(x<1)
		y=x;
	else if(x>=1&&x<10)
		y=2*x-1;
	else
		y=3*x-11;
	printf("��Ӧ��yֵΪ%d",y);
	getchar();
	getchar();
	return 0;
}
