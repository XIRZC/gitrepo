/* 猴子第一天摘桃个数 */
#include<stdio.h>
int main(void)
{
	int last,i;
	last=1;
	for(i=1;i<10;i++)
	{
		last=(last+1)*2;
	}
	printf("第一天摘桃的个数为：%d",last);
	return 0;
}
