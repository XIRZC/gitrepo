/* 7.9.2.c--字符串统计个数函数 -全局变量形式 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* 内含字符测试和字符映射函数的原型 */ 
static int digit_num=0,alpha_num=0,space_num=0,others_num=0;  /* 声明4个全局变量来使主函数和统计函数共用 */ 
void count(char charray[]);
int main(void)
{
    char charray[30];
    printf("请输入一个字符串：");
    gets(charray);
    count(charray);
    printf("字符串中字母个数为：%d\n"
	"字符串中数字个数为：%d\n"
	"字符串中空格个数为：%d\n"
	"字符串中其他字符个数为：%d\n",
	alpha_num,digit_num,space_num,others_num);
	getchar();
	getchar();
	return 0;
} 
void count(char charray[])
{  
    int i;
    for(i=0;i<strlen(charray);i++)
    {
    	if(isdigit(charray[i]))
    		digit_num++;
    	else if(isalpha(charray[i]))
    		alpha_num++;
    	else if(isspace(charray[i]))
    		space_num++;
    	else
    		others_num++;
	}
	return;
}
