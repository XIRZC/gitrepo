/* 7.17.c--递归法整数转换为字符串 */
#include<stdio.h>
void int2char(int n);
int main(void)
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	printf("转换后的字符串为：");
	int2char(n);
	return 0; 
}
void int2char(int n)
{
	int k;
	k=n/10;
	if(k>0)  /* 递归终止条件 */ 
	{
		int2char(k);  
	}
	/* 位于递推过程之后的语句会倒序执行，因此使最先生成的余数最后输出，符合输出次序 */ 
	putchar(n%10+'0'); /* 通过余数加字符的方式来实现生成该数字对应的字符*/ 
	return; 
}
