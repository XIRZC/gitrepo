/* 7.9.3.c--�ַ���ͳ�Ƹ������� -���������鴫����ʽ */
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* �ں��ַ����Ժ��ַ�ӳ�亯����ԭ�� */ 
void count(char charray[],int num[]);
int main(void)
{
    char charray[30];
    int num[4]={0};
    printf("������һ���ַ�����");
    gets(charray);
    count(charray,num);
    printf("�ַ�������ĸ����Ϊ��%d\n"
	"�ַ��������ָ���Ϊ��%d\n"
	"�ַ����пո����Ϊ��%d\n"
	"�ַ����������ַ�����Ϊ��%d\n",
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
