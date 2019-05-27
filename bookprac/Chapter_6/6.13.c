/* 6.13.c--字符串连接 */
#include<stdio.h>
int main(void)
{
	char str1[20],str2[20];
	int i=0,j=0;
	printf("请输入两个字符串，按Enter键结束一个字符的输入:  ");
	gets(str1);
	gets(str2);
	while(str1[i]!='\0')  /* 使用转义字符'\0'来判断字符串是否结束 */ 
		i++;
	while(str2[j]!='\0')  /* 从str1的结尾开始使用str2的值为str1赋值 */ 
		str1[i++]=str2[j++];
	puts(str1);
	getchar();
	getchar(); 
	return 0;
}
