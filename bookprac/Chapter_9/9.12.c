/* 9.12.c--���ݽ��ĳ�Ա����������ɾ����� */ 
#include<stdio.h>
#define LEN sizeof(stu)
typedef struct student{
	long num;
	char name[10];
	char sex[10];
	int age;
	struct student *next;
}stu;
stu *create(void);
stu *del(stu *head,int age);
void print(stu *head);
int main(void)
{
	stu *head,*pt1;
	int age;
	head=create();
	printf("������һ�����䣬��ɾ���������������������ֵ��ͬ�Ľ�㣺");
	scanf("%d",&age);
	for(pt1=head;pt1!=NULL;pt1=pt1->next)
	{
		if(pt1->age==age)
		{
			head=del(head,age);
		}
	}
	print(head);
	return 0;
} 
stu *create(void)
{
	stu *head=NULL,*pt1,*pt2;
	int n=0;
	printf("���������ɸ�ѧ����ѧ�š��������Ա�����,������0�뿪���룺\n");
	pt1=(stu *)malloc(LEN);
	scanf("%ld %s %s %d",&pt1->num,pt1->name,pt1->sex,&pt1->age );
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
		scanf("%ld %s %s %d",&pt1->num,pt1->name,pt1->sex,&pt1->age );
	}
	pt2->next=NULL;
	return head;
}
stu *del(stu *head,int age)  /* ��������ɾ����������ѧ��ʱֻ��ı�while��if�Ŀ����������� */
{
	stu *pt1,*pt2;
	if(head==NULL)
		printf("������Ϊ�ձ�!!!\n");
	else
	{
		pt1=head;
		while(pt1->age!=age&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* ���������pt2��pt1�ֱ�ΪҪɾ���Ľ���ǰһ������Լ�Ҫɾ���Ľ�� */
		}
		if(pt1->age==age)   /* ���ҵ��������� */
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
			printf("��ѧ��ѧ�ţ�%ld  ����Ϊ��%s �Ա�Ϊ��%s ����Ϊ��%d\n",
			pt->num,pt->name,pt->sex,pt->age );
			pt=pt->next;
		}
	}
	return;
}
