/* 16.1.c--���һ��16λ���������ĵ�4�͵�10λ */
#include<stdio.h>
#include<math.h>
int getabit(int n,int bit);
int main(void)
{
	int bit,n;
	printf("������һ������");
	scanf("%d",&n);
	printf("������Ҫ�����λ������,��q���뿪���룺");
	while(scanf("%d",&bit))
	{
		printf("%d�ĵ�%dλΪ��%d\n",n,bit,getabit(n,bit));
	}
	return 0;
}
int getabit(int n,int bit)
{
	return n&(int)pow(2,bit-1);
}
