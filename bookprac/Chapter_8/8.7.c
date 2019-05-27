/* 8.7.c--一个字符串的部分复制 */ 
#include<stdio.h>
char *partcopy(char *string,int m);
int main(void)
{
    int m;
    char string[50];
    char *charray;
    printf("请输入一个字符串：");
    gets(string);
    printf("请输入一个起始复制数：");
    scanf("%d",&m);
    charray=partcopy(string,m);
    puts(charray);
    return 0;
}
char *partcopy(char *string,int m)
{
    int n=strlen(string),count=0;
    static char charray[30];  /* 在函数中返回数组时要定义其为静态的 */ 
    char *i;
    for(i=string+m-1;i<string+n;i++)
    {
        *(charray+count++)=*i;
    }
    return charray;
}
