/* 16.1.c--���һ��16λ���������ĵ�4����10λ */
#include<stdio.h>
#include<math.h>
#define LOW 4
#define HIGN 10
void getbits(short n);
int main(void)
{
	short n;
	printf("����������һ��������������������ΧΪ��-32768��32767����q���뿪���룺");
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
	n=temp=abs(n);/* ȡ����Ϊ�� */ 
	r[count1]=n%2;
	n/=2;
	while(n!=0)
	{
		count1++;
		r[count1]=n%2;
		n/=2;
	}
	if(nt<0)  /* ������Ϊ�����������λΪ1 */ 
		r[15]=1;
	printf("������ԭ16λ����������λΪ��\n");
	for(i=15;i>=0;i--)
	{
		printf("%d",r[i]);
		
	}
	printf("\n");
	temp=temp>>(LOW-1);
	printf("�����Ķ����ƵĴ��������4����10λΪ��\n"); 
	for(i=0;i<HIGN-LOW+1;i++)
	{
		rt=temp%2;
		temp/=2;
		printf("%d",rt);
	}
	printf("\n"); 
	return;
}
