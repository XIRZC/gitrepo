/* 7.16.1.c--十六进制数转换为十进制数的函数 */
#include<stdio.h>
void hex2decimal(void);
int main(void)
{
	hex2decimal();
	getchar();
	getchar(); 
	return 0;
	
}
void hex2decimal(void)
{
	int hexv;
	printf("请输入一个十六进制数:"); 
	scanf("%x",&hexv);  /* 以十六进制数的转换说明%x读入该整数 */ 
	printf("该数的十进制数为：%d",hexv); /*以十进制转换说明%d来输出该整数 */ 
	return;
}
