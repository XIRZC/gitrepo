/* 7.9.1.c--�ַ���ͳ�Ƹ�������-����ָ������ */
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* �ں��ַ����Ժ��ַ�ӳ�亯����ԭ�� */ 
int *count(char charray[]);  /* ����һ������ָ��ĺ��� */ 
/* �������Ҳ����Ϊ������ָ�����͵ģ������������ڶ���һ�����������������ָ��Ĳ����ĺ�������������4��ȫ�ֱ��� */ 
int main(void)
{
    char charray[30];
    int *count_point;  /* ����һ��ָ���������øú����ķ���ֵ */ 
    printf("������һ���ַ�����");
    gets(charray);
    count_point=count(charray);
    printf("�ַ�������ĸ����Ϊ��%d\n"
	"�ַ��������ָ���Ϊ��%d\n"
	"�ַ����пո����Ϊ��%d\n"
	"�ַ����������ַ�����Ϊ��%d\n",
	count_point[0],count_point[1],count_point[2],count_point[3]);  /* ���÷��ص�ָ������ȡֵ */ 
	getchar();
	getchar();
	return 0;
} 
int *count(char charray[])
{
    static int count[4]={0};  
	/* ���巵��ָ�����͵�ָ��ʱ�趨�巵�ص�ָ���Ӧ�����ݶ���Ϊ��̬�ľֲ���������Ȼ�ں��������������ݶ�������ڴ����ͷ� */  
    int i;
    for(i=0;i<strlen(charray);i++)
    {
    	if(isdigit(charray[i]))  /* ֱ��ʹ���ַ����Ժ���isdigit(),isalpha(),isspace()*/
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
