/* 9.7.c--����ɾ���ڵ㺯�� */
#include<stdio.h>
#define LEN sizeof(struct student)
struct student{
	long num;
	float score;
	struct student *next;
}; 
struct student *create(void);
struct student *del(struct student *head,int num);
void print(struct student *head);
int main(void)
{
	struct student *head=create(),*nhead;
	long num;
	printf("������Ҫɾ���Ľ���ѧ��ѧ��,��q�뿪���룺");
	nhead=head; 
	while(scanf("%ld",&num))
	{
		nhead=del(nhead,num);
		print(nhead);
	}
	return 0;
}
struct student *create(void)
{
	struct student *head=NULL,*pt1,*pt2;
	int n=0;
	pt1=(struct student *)malloc(LEN);
	scanf("%d %f",&pt1->num,&pt1->score); 
	/* ����Ҫ����������ĸ��������������Լ���Ϣ��ѡ��ͬ�������ʽ */
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
		pt1=(struct student *)malloc(LEN);
		scanf("%d %f",&pt1->num,&pt1->score);
	}
	pt2->next=NULL;
	return head;
}
struct student *del(struct student *head,int num)
{
	struct student *pt1,*pt2;
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
void print(struct student *head)
{
	struct student *pt=head;
	if(head==NULL)
		printf("���������޽�㣡��\n");
	else
	{
		printf("��ǰ�������������Ϊ��\n");
		while(pt!=NULL)
		{
			printf("��ѧ��ѧ�ţ�%d  �ɼ�Ϊ��%.2f\n",pt->num,pt->score ); 
			 /* ����Ҫ����������ĸ��������������Լ���Ϣ��ѡ��ͬ�������ʽ */
			pt=pt->next;
		}
	}
	return;
}
