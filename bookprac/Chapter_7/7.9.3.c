/* 7.9.3.c--字符串统计个数函数 -主函数数组传入形式 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* 内含字符测试和字符映射函数的原型 */ 
void count(char charray[],int num[]);
int main(void)
{
    char charray[30];
    int num[4]={0};
    printf("请输入一个字符串：");
    gets(charray);
    count(charray,num);
    printf("字符串中字母个数为：%d\n"
	"字符串中数字个数为：%d\n"
	"字符串中空格个数为：%d\n"
	"字符串中其他字符个数为：%d\n",
	num[0],num[1],num[2],num[3]);
	getchar();
	getchar();
	return 0;
} 
void count(char charray[],int num[])
{  
    int i;
    for(i=0;i<strlen(charray);i++)
    {
    	if(isdigit(charray[i]))
    		num[1]++;
    	else if(isalpha(charray[i]))
    		num[0]++;
    	else if(isspace(charray[i]))
    		num[2]++;
    	else
    		num[3]++;
	}
	return;
}
