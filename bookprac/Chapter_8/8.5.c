/* 8.5.c--Բ����ϯ */
#include<stdio.h>
int main(void)
{
	int people[50],*pt=people;
	int n,count1,i,k,count2,count3=1;
	/* count1����Բ����ʣ�µ�������count2����ÿ��ѭ��һ������ϯ��������count3����ÿ���ֵ���������������� */
	printf("������Բ���ϵ�����:");
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		*(pt+i)=i+1;
	}
	count1=n;
	count2=0;
	while(count1>1)  /* ��Բ����ʣ��һ����ʱ�˳�ѭ����Ϊ���һ���ߵ�����Ų�����Ϊ0 */ 
	{
		count1=count1-count2;  /* ÿ��һ�ֺ�count1����ԭԲ���ϵ��˼�ȥÿ���ߵ��� */ 
		count2=0;
		for(i=0;i<n;i++)
		{
			if(*(pt+i)!=0)
			{
				if(count3%3==0)
				{
					*(pt+i)=0;
					count2++;
					count3++;   /* �����ֵ��˵��߲��ߣ���Ҫ����ż�1 */ 
				}
				else
				{
					count3++;
				}
			}
				
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(pt+i)!=0)
		{
			printf("���µ��Ǹ���Ϊԭ���������ϵ�%d��\n",i+1);
		}
	}
	return 0;
} 
