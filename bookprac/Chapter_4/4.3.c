/* 4.3.c--������߼����ʽ��ֵ */
#include<stdio.h>
int main(void)
{
	int a=3,b=4,c=5,i,x,y;
	int value[5];
	value[0]=a+b>c&&b==c;
	value[1]=a||b+c&&b-c;
	value[2]=!(a>b)&&!c||1; 
	value[3]=!(x=a)&&(y=b)&&0;
	value[4]=!(a+b)+c-1&&b+c/2;
	for(i=0;i<5;i++)
	{
		printf("��%d�����ʽΪ��%d\n",i+1,value[i]);
	}
	getchar();
	return 0;
 } 
