/* 6.13.c--�ַ������� */
#include<stdio.h>
int main(void)
{
	char str1[20],str2[20];
	int i=0,j=0;
	printf("�����������ַ�������Enter������һ���ַ�������:  ");
	gets(str1);
	gets(str2);
	while(str1[i]!='\0')  /* ʹ��ת���ַ�'\0'���ж��ַ����Ƿ���� */ 
		i++;
	while(str2[j]!='\0')  /* ��str1�Ľ�β��ʼʹ��str2��ֵΪstr1��ֵ */ 
		str1[i++]=str2[j++];
	puts(str1);
	getchar();
	getchar(); 
	return 0;
}
