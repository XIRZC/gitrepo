/* 10.3.c--�ַ�Сд���д�����浽�ļ��� */ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char ch;
	FILE *fpt;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/test.txt","w+");
	if(fpt==NULL)
	{
		printf("�������������ļ���������\n");
		exit(0);
	}
	else 
	{
		printf("������һ���ַ���������!�������룺");
		scanf("%c",&ch);
		while(ch!='!')
		{
			fputc(toupper(ch),fpt);
			scanf("%c",&ch);
		}
		getchar();
	}
	fclose(fpt);
	return 0;
}
