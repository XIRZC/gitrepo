/* 7.5.c--�ַ�������������Լ������ź��� */
#include<stdio.h>
#include<string.h>
void reverse(char charray[]);
int main(void)
{
    char charray[50]; 
    printf("������һ���ַ�����");
    gets(charray);
    reverse(charray);
    printf("������ַ���Ϊ��");
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
        temp=charray[i];  /* ͨ��strlen()�ķ���ֵ�Լ������������͵�������λ�õ�ֵ */ 
        charray[i]=charray[strlen(charray)-i-1];
        charray[strlen(charray)-i-1]=temp;
    }
    return;
}
