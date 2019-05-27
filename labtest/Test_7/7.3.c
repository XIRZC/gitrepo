/* 7.3.c--1 2 2 4数组前二十项 */ 
#include<stdio.h>
int main(void)
{
	int num[20];
	int i;
	num[0]=num[1]=1;
	num[2]=2;
	
	for(i=3;i<20;i++)
	{
		num[i]=num[i-1]+num[i-2]+num[i-3];
	}
	for(i=0;i<20;i++)
	{
		printf("%d\t",num[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	return 0;
 } 
