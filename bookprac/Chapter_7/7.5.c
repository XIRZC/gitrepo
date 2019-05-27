/* 7.5.c--字符串的输入输出以及反序存放函数 */
#include<stdio.h>
#include<string.h>
void reverse(char charray[]);
int main(void)
{
    char charray[50]; 
    printf("请输入一个字符串：");
    gets(charray);
    reverse(charray);
    printf("反序后字符串为：");
    puts(charray);
    getchar();
    getchar();
    return 0;
}
void reverse(char charray[])
{
    int i;
    char temp;
    for(i=0;i<strlen(charray)/2;i++)
    {
        temp=charray[i];  /* 通过strlen()的返回值以及调换正着数和倒着数的位置的值 */ 
        charray[i]=charray[strlen(charray)-i-1];
        charray[strlen(charray)-i-1]=temp;
    }
    return;
}
