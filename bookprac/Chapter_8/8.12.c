/* 8.12.c--ָ�������ʮ�����ȳ����ַ������� */
#include<stdio.h>
#include<stdlib.h>
#define N 10
void strsort(char **pt); /* ����һ��ָ��ָ���ָ�����õ���ָ����������ֵ */ 
int main(void)
{
	
	char *charray[N];
	int i;
	printf("������%d���ַ�������ENTER��������\n",N);
	for(i=0;i<N;i++)
	{
		charray[i]=(char *)calloc(N,sizeof(char));  /* �ö�̬�ڴ����ķ�ʽΪָ���������ֵ���Ա��ܶ�ȡһ���ַ��� */
		gets(charray[i]);
	}
	strsort(charray);
	printf("�������ַ���Ϊ��\n");
	for(i=0;i<N;i++)
	{
		puts(charray[i]);
	}
	return 0;
}
void strsort(char **pt)
{
	int i,j;
	char *temp;
	char k;
	for(i=0;i<N;i++) /* ����ѡ�����������ַ������� */ 
	{
		k=i;
		for(j=i+1;j<N;j++)
		{
			if(strcmp(*(pt+k),*(pt+j))>0) /* ����strcmp�����������ж�ָ�������еĸ�ָ�����ָ����ַ����Ĵ�С */ 
			{
				k=j;
			}
		}
		if(k!=i)
		{ 
			temp=*(pt+k);      /* ����ʱ�ǽ���ָ����ַ�����������ָ���������ĵ�ַ */ 
			*(pt+k)=*(pt+i);
			*(pt+i)=temp;
		}
	}
	return;
}
