/* 8.7.c--һ���ַ����Ĳ��ָ��� */ 
#include<stdio.h>
char *partcopy(char *string,int m);
int main(void)
{
    int m;
    char string[50];
    char *charray;
    printf("������һ���ַ�����");
    gets(string);
    printf("������һ����ʼ��������");
    scanf("%d",&m);
    charray=partcopy(string,m);
    puts(charray);
    return 0;
}
char *partcopy(char *string,int m)
{
    int n=strlen(string),count=0;
    static char charray[30];  /* �ں����з�������ʱҪ������Ϊ��̬�� */ 
    char *i;
    for(i=string+m-1;i<string+n;i++)
    {
        *(charray+count++)=*i;
    }
    return charray;
}
