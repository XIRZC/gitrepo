/* 16.1.c--输出一个16位二进制数的第4到第10位 */
#include<stdio.h>
#include<math.h>
#define LOW 4
#define HIGN 10
void getbits(short n);
int main(void)
{
	short n;
	printf("请连续输入一个短整型整数即该数范围为：-32768至32767，按q键离开输入：");
	while(scanf("%hd",&n))
	{
		getbits(n);
	}
	system("pause");
	return 0;
}
void getbits(short n)
{
	short i,r[16]={0},rt,temp,count1=0,nt;
	nt=n;
	n=temp=abs(n);/* 取该数为正 */ 
	r[count1]=n%2;
	n/=2;
	while(n!=0)
	{
		count1++;
		r[count1]=n%2;
		n/=2;
	}
	if(nt<0)  /* 若该数为负数，则最高位为1 */ 
		r[15]=1;
	printf("该数的原16位二进制数各位为：\n");
	for(i=15;i>=0;i--)
	{
		printf("%d",r[i]);
		
	}
	printf("\n");
	temp=temp>>(LOW-1);
	printf("该数的二进制的从右至左第4至第10位为：\n"); 
	for(i=0;i<HIGN-LOW+1;i++)
	{
		rt=temp%2;
		temp/=2;
		printf("%d",rt);
	}
	printf("\n"); 
	return;
}
