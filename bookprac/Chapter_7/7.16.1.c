/* 7.16.1.c--ʮ��������ת��Ϊʮ�������ĺ��� */
#include<stdio.h>
void hex2decimal(void);
int main(void)
{
	hex2decimal();
	getchar();
	getchar(); 
	return 0;
	
}
void hex2decimal(void)
{
	int hexv;
	printf("������һ��ʮ��������:"); 
	scanf("%x",&hexv);  /* ��ʮ����������ת��˵��%x��������� */ 
	printf("������ʮ������Ϊ��%d",hexv); /*��ʮ����ת��˵��%d����������� */ 
	return;
}
