/* 7.9.1.c--字符串统计个数函数-返回指针类型 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* 内含字符测试和字符映射函数的原型 */ 
int *count(char charray[]);  /* 声明一个返回指针的函数 */ 
/* 这个函数也可以为不返回指针类型的，可在主函数内定义一个数组来传入带数组指针的参数的函数，或者声明4个全局变量 */ 
int main(void)
{
    char charray[30];
    int *count_point;  /* 定义一个指针变量来获得该函数的返回值 */ 
    printf("请输入一个字符串：");
    gets(charray);
    count_point=count(charray);
    printf("字符串中字母个数为：%d\n"
	"字符串中数字个数为：%d\n"
	"字符串中空格个数为：%d\n"
	"字符串中其他字符个数为：%d\n",
	count_point[0],count_point[1],count_point[2],count_point[3]);  /* 利用返回的指针来获取值 */ 
	getchar();
	getchar();
	return 0;
} 
int *count(char charray[])
{
    static int count[4]={0};  
	/* 定义返回指针类型的指针时需定义返回的指针对应的数据对象为静态的局部变量，不然在函数调用完后该数据对象会在内存中释放 */  
    int i;
    for(i=0;i<strlen(charray);i++)
    {
    	if(isdigit(charray[i]))  /* 直接使用字符测试函数isdigit(),isalpha(),isspace()*/
    		count[1]++;
    	else if(isalpha(charray[i]))
    		count[0]++;
    	else if(isspace(charray[i]))
    		count[2]++;
    	else
    		count[3]++;
	}
	return count;
}
