/* 9.11.c--a������ɾ��b��������ͬѧ�ŵĽ�� */
#include<stdio.h>
#define LEN sizeof(stu)
typedef struct student{
	long num;
	char name[10];
	struct student *next;
}stu; 
stu *create(void);
void print(stu *head);
stu *del(stu* head,int num);
int main(void)
{
	stu *heada,*headb,*pt1,*pt2;
	heada=create();
	headb=create();
	for(pt1=heada;pt1!=NULL;pt1=pt1->next)
	{
		for(pt2=headb;pt2!=NULL;pt2=pt2->next)
		{
			if(pt2->num==pt1->num )
			{
				heada=del(heada,pt1->num);
				/* ����ù�����û��ɾ��ͷ��㣬����ԭͷ��㣬��ɾ����ͷ��㣬��ֵΪ�µ�ͷ����Ա������� */
			}
		}
	}
	print(heada);
	return 0;
} 
stu *del(stu *head,int num)
{
	stu *pt1,*pt2;
	if(head==NULL)
		printf("������Ϊ�ձ�!!!\n");
	else
	{
		pt1=head;
		while(pt1->num!=num&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* ���������pt2��pt1�ֱ�ΪҪɾ���Ľ���ǰһ������Լ�Ҫɾ���Ľ�� */
		}
		if(pt1->num==num)   /* ���ҵ��������� */
		{
			if(pt1==head)
				head=pt1->next;  
				/* Ҫ���ǵ��������������ɾ���Ľ��Ϊ��һ����㣬��Ҫ��head��ֵ��Ϊ�ڶ�������ֵ */
			else
			{
				pt2->next=pt1->next;  /* ����Ҫȥ���Ľ�������һ���ڵ����� */
			} 
			printf("��ɾ���øýڵ�\n"); 	
		}
		else  /* ��δ�ҵ��������� */ 
			printf("���������޸������\n");
	}
	return head;
}
stu *create(void)
{
	stu *head=NULL,*pt1,*pt2;
	int n=0;
	printf("���������ɸ�ѧ����ѧ�ź�����,������0�뿪���룺\n");
	pt1=(stu *)malloc(LEN);
	scanf("%ld %s",&pt1->num,pt1->name);
	while(pt1->num!=0)
	{
		n+=1;
		if(n==1)
			head=pt1;
		else 
		{
			pt2->next=pt1;
		}
		pt2=pt1;
		pt1=(stu *)malloc(LEN);
		scanf("%ld %s",&pt1->num,pt1->name);
	}
	pt2->next=NULL;
	return head;
}
void print(stu *head)
{
	stu *pt=head;
	if(head==NULL)
		printf("���������޽�㣡��\n");
	else
	{
		printf("��ǰ�������������Ϊ��\n");
		while(pt!=NULL)
		{
			printf("��ѧ��ѧ�ţ�%ld  �ɼ�Ϊ��%s\n",pt->num,pt->name);
			pt=pt->next;
		}
	}
	return;
}
