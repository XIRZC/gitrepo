/* 7.9.2.c--�ַ���ͳ�Ƹ������� -ȫ�ֱ�����ʽ */
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* �ں��ַ����Ժ��ַ�ӳ�亯����ԭ�� */ 
static int digit_num=0,alpha_num=0,space_num=0,others_num=0;  /* ����4��ȫ�ֱ�����ʹ��������ͳ�ƺ������� */ 
void count(char charray[]);
int main(void)
{
    char charray[30];
    printf("������һ���ַ�����");
    gets(charray);
    count(charray);
    printf("�ַ�������ĸ����Ϊ��%d\n"
	"�ַ��������ָ���Ϊ��%d\n"
	"�ַ����пո����Ϊ��%d\n"
	"�ַ����������ַ�����Ϊ��%d\n",
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
