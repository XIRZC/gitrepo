/* 5.8.c--�����е�ˮ�ɻ��� */
#include<stdio.h>
int main(void)
{
	int i,first,second,third,count;
	count=0;
	for(i=100;i<1000;i++)
	{
		third=i%10;  /*�����λ��*/ 
		second=(i/10)%10;  /* ����ʮλ�� */
		first=i/100; /* �����λ��*/ 
		if(third*third*third+second*second*second+first*first*first==i)
		{
			count++;
			printf("��%d��ˮ�ɻ���Ϊ��%d\n",count,i);
		}
	}
	getchar();
	return 0;
}
