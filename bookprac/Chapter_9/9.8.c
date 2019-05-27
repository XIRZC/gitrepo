/* 9.8.c--�������ڵ㺯�� */
#include<stdio.h>
#define LEN sizeof(struct student)
typedef struct student{
	long num;
	float score;
	struct student *next;
}stu;
stu *create(void);
void print(stu *head);
struct student *insert(stu *head,long num);
int main(void)
{
	printf("�뱣֤ԭ�����ѧ��Ϊ����С�����˳������!!!\n");
	stu *head=create(),*nhead;
	int num;
	printf("������Ҫ��ӵĽ���ѧ��ѧ��,��q�뿪���룺");
	nhead=head;
	while(scanf("%d",&num))
	{
		nhead=insert(nhead,num);
		print(nhead); 
	}
	return 0;
}
stu *insert(stu *head,long num)
{
	stu *pt1,*pt2,*ptnew;
	if(head==NULL)  /* ��ԭ����Ϊ��ʱ */ 
	{
		ptnew=(stu *)malloc(LEN);
		printf("�������ѧ���ĳɼ���");    /* �����µĽ�� */
		ptnew->num=num;
		scanf("%f",&ptnew->score );
		head=ptnew;
		ptnew->next=NULL; /* ��Ϊ����������ս���next�����NULL */
	}
	else  /* ��ԭ�����Ѵ��ڽ��ʱ */ 
	{
		pt1=head;
		while(pt1->num<num&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;
		}
		if(pt1->num==num)  /* ��������ý���ѧ����ͬ�Ľ��ʱ */ 
		{
			printf("��ѧ���Ѷ�Ӧһ����㣬������ѡ��\n");
		}
		else /* ��������ͬѧ��ʱ */ 
		{
			ptnew=(stu *)malloc(LEN);
			printf("������Ҫ��ӵĽ���ѧ���ɼ���");
			ptnew->num=num;
			scanf("%f",&ptnew->score );
			if(pt1->num<num)  /* ����������Ľ��ĺ���Ľ��ʱ */ 
			{
				pt1->next=ptnew;
				ptnew->next=NULL;
			}
			else if(pt1==head)  /* �������ͷ���ǰ��һ�����ʱ */ 
			{
				ptnew->next=head;
				head=ptnew;
			}
			else  /* ��������м��ĳһ���ʱ */
			{
				pt2->next=ptnew;
				ptnew->next=pt1;
			}
			printf("�ýڵ������\n");
		}
	}
	return head;
}
stu *create(void)
{
	stu *head=NULL,*pt1,*pt2;
	int n=0;
	printf("���������ɸ�ѧ����ѧ�źͳɼ���������0�뿪���룺\n") ;
	pt1=pt2=(stu *)malloc(LEN);
	scanf("%d %f",&pt1->num,&pt1->score);
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
		scanf("%d %f",&pt1->num,&pt1->score);
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
			printf("��ѧ��ѧ�ţ�%d  �ɼ�Ϊ��%.2f\n",pt->num,pt->score );
			pt=pt->next;
		}
	}
	return;
}
