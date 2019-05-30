/* 16.2.c--检测系统时逻辑右移还是算术右移并实现另外一种右移 */ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LEN sizeof(short)*8
#define NUM 1
short lsr(short n,short num);  /* 逻辑右移函数 */
short asr(short n,short num);  /* 算术右移函数 */ 
int main(void)
{
	short n;/* 定义二进制占16位的整型数据 */
	printf("请输入一个负数，来判断系统此时的右移情况：");
	scanf("%hd",&n);
	if((n>>NUM)>0)
	{
		printf("系统使用的是逻辑右移\n");
		printf("算术右移结果为：%hd\n",asr(n,NUM));
	}
	else
	{
		printf("系统使用的是算术右移\n");
		printf("逻辑右移结果为：%hd\n",lsr(n,NUM));
	}
	system("pause");
	return 0;
}
short asr(short n,short num)  /* 最高位由原符号位的数补齐 */ 
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
short lsr(short n,short num) /* 最高位由0补齐 */
{
	short sum=0,i;
	for(i=0;i<LEN-num;i++)
	{
		sum+=(short)pow(2,i);
	}
	return (n>>num)&sum;
} 
