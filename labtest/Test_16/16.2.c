/* 16.2.c--���ϵͳʱ�߼����ƻ����������Ʋ�ʵ������һ������ */ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LEN sizeof(short)*8
#define NUM 1
short lsr(short n,short num);  /* �߼����ƺ��� */
short asr(short n,short num);  /* �������ƺ��� */ 
int main(void)
{
	short n;/* ���������ռ16λ���������� */
	printf("������һ�����������ж�ϵͳ��ʱ�����������");
	scanf("%hd",&n);
	if((n>>NUM)>0)
	{
		printf("ϵͳʹ�õ����߼�����\n");
		printf("�������ƽ��Ϊ��%hd\n",asr(n,NUM));
	}
	else
	{
		printf("ϵͳʹ�õ�����������\n");
		printf("�߼����ƽ��Ϊ��%hd\n",lsr(n,NUM));
	}
	system("pause");
	return 0;
}
short asr(short n,short num)  /* ���λ��ԭ����λ�������� */ 
{
	short sum=0,i;
	if(n>=0)
	{
		for(i=0;i<LEN-num;i++)
		{
			sum+=(short)pow(2,i);
		}
		return (n>>num)&sum;
	}
	else
	{
		for(i=LEN-1;i>LEN-num-1;i--)
		{
			sum+=(short)pow(2,i);
		} 
		return (abs(n)>>num)+sum;
	} 
}
short lsr(short n,short num) /* ���λ��0���� */
{
	short sum=0,i;
	for(i=0;i<LEN-num;i++)
	{
		sum+=(short)pow(2,i);
	}
	return (n>>num)&sum;
} 
