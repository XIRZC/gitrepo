/* 9.6.c--Բ����ϯ���������� */
#include<stdio.h>
#define LEN sizeof(per)  /* �Զ���ṹ�����ռ���ֽ��� */ 
#define N 13   /* ����һ�����Ըı�ԭ���������ķ��ų��������ں������ĸı� */ 
typedef struct person{
	int num;
	int isdel;  
	/* �ж��Ƿ���һ��ѭ����ɾ���ý��ı�־��Ա������Ĭ��Ϊ0��Ϊ��ɾ��״̬ */ 
	struct student *next;
}per; 
per *create(void);
void print(per *head);
per *del(per *head);
int main(void)
{
	per *head,*pt;
	int count=0;
	pt=head=create();
	while(head->next!=NULL)   /* ��ѭ������ͷ����next��ΪNULL��ʹ���ʣ��һ����� */ 
	{
		for(pt=head;pt!=NULL;pt=pt->next)
		{
			count++;
			if(count%3==0)
			{
				pt->isdel=1;
				count=0;
			}
		}
		head=del(head);  /* ÿ�ֶ�head��ͷ���ĸ��¼�ɾ��һ������countΪ3�Ľ�� */ 
	}
	print(head);
	return 0;
}
per *create(void)  /* ����ָ���õ�������Ϣ��������������� */
{
	per *pt1,*pt2,*head;
	int i;
	for(i=1;i<N+1;i++)
	{
		if(i==1)
		{
			pt2=head=(per *)malloc(LEN);  /* Ϊ���ڵ㶯̬�����ڴ�ռ䲢�Գ�Ա��������ֵ */ 
			head->num=i;
			head->isdel=0;  /* Ĭ�Ͼ�Ϊ��ɾ��״̬ */
		}
		else
		{
			pt1=(per *)malloc(LEN);  /* �����½�� */ 
			pt1->num=i;
			pt1->isdel=0;
			pt2->next=pt1;  /*�½����ɽ������� */ 
			pt2=pt1;  /* ����һ����� */ 
		}
	}
	pt2->next=NULL;
	return head;
}
void print(per *head)
{
	per *pt=head;
	if(head==NULL)
		printf("���������޽�㣡��\n");
	else
	{
		printf("��ǰ�������������Ϊ��\n");
		while(pt!=NULL)
		{
			printf("��ѧ��ѧ�ţ�%d \n",pt->num ); 
			 /* ����Ҫ����������ĸ��������������Լ���Ϣ��ѡ��ͬ�������ʽ */
			pt=pt->next;
		}
	}
	return;
}
per *del(per *head)
{
	per *pt1,*pt2;
	while(head->isdel!=0)  /* ��ʹͷ���Ϊ��ɾ����״̬ */ 
	{
		head=head->next;
	}
	pt1=head;
	while(pt1!=NULL)  
	/* ����û�е�һ��whileѭ������ʹ��ͷ���Ҫɾ��ʱ��pt2û����ֵ���ʹ��һ��������ͷ���ɾ�������������ͨ���������ͬ */ 
	{
		if(pt1->isdel)
		{
			pt2->next=pt1->next;
		}
		pt2=pt1;
		pt1=pt1->next;
	}
	return head;
}
