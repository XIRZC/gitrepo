/* 8.20.c--˫��ָ���5���ַ����������� */
#include<stdio.h>
#include<stdlib.h>
#define N 5 
int main(void)
{
	
	char *charray[N];
	char *temp,**pt=charray;
	char k;
	int i,j;
	printf("������%d���ַ�������ENTER��������\n",N);
	for(i=0;i<N;i++)
	{
		*(pt+i)=(char *)calloc(N,sizeof(char));  /* �ö�̬�ڴ����ķ�ʽΪָ���������ֵ���Ա��ܶ�ȡһ���ַ��� */
		gets(*(pt+i));
	}
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
	printf("�������ַ���Ϊ��\n");
	for(i=0;i<N;i++)
	{
		puts(*(pt+i));
	}
	return 0;
}
