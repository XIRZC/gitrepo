/* 12.3.c--����ַ���������ַ�������� */
#include<stdio.h>
#include<string.h>
int main(void)
{
	char charray[5][10];
	int i,max;
	printf("����������ַ�������ENTER��������");
	for(i=0;i<5;i++)
	{
		gets(charray[i]);
	}
	max=0;
	for(i=1;i<5;i++)
	{
		if(strcmp(charray[i],charray[max])>0)
			max=i;
	} 
	printf("�����ַ���Ϊ��\n");
	for(i=0;i<5;i++)
	{
		if(strcmp(charray[i],charray[max])==0)  
		/* ����5���ַ������ҳ�������ַ�����ͬ���ַ���������������������ͬ�����ַ��� */
		{
			printf("��%d����",i+1);
			puts(charray[i]);
		}
	}
	return 0;
}
