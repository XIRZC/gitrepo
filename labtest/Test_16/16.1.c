/* 16.1.c--输出一个16位二进制数的第4和第10位 */
#include<stdio.h>
#include<math.h>
int getabit(int n,int bit);
int main(void)
{
	int bit,n;
	printf("请输入一个数：");
	scanf("%d",&n);
	printf("请输入要输出的位的序数,按q键离开输入：");
	while(scanf("%d",&bit))
	{
		printf("%d的第%d位为：%d\n",n,bit,getabit(n,bit));
	}
	return 0;
}
int getabit(int n,int bit)
{
	return n&(int)pow(2,bit-1);
}
