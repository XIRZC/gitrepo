/* 7.16.2.c--十六进制数转换为十进制数-利用字符数组 */ 
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* 字符测试函数的头文件 */
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
	char hexch[10];
	int i,mi;
	int decimal=0;
	printf("请输入一个十六进制数：");
	gets(hexch);
	mi=1;
	for(i=strlen(hexch)-1;i>=0;i--)  /* 根据十六进制数不同位的不同情况来以不同的方式求幂加和 */ 
	{     /* 由于字符数组的第一位为16的最高幂，因此从最后一位开始 */ 
		if(isdigit(hexch[i]))
		{
			decimal+=(hexch[i]-'0')*mi;
			mi*=16;
		}
		else if(hexch[i]>='a'&&hexch[i]<='f')
		{
			decimal+=(hexch[i]-'a'+10)*mi;
			mi*=16;
		}
		else if(hexch[i]>='A'&&hexch[i]<='F')
		{
			decimal+=(hexch[i]-'A'+10)*mi;
			mi*=16;     /* 每次判断一次后就使幂数再乘16 */ 
		}
		else 
		{
			printf("数据错误！！\n");
			break;
		}
	}
	printf("转换后的十进制数为:%d",decimal);
	return;
}
