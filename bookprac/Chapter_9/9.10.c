/* 9.10.c--����ϲ��Լ����� */ 
#include<stdio.h>
#define LEN sizeof(stu)
typedef struct student{
	long num;
	float score;
	struct student *next;
}stu; 
/*�������룺
12 23.4
23 54.2
89 34.2
23 99.2 
*/
stu *merge(stu *head1,stu *head2);
void sort(stu *head);
stu *create(void);
void print(stu *head);
int main(void)
{
	stu *heada,*headb;
	heada=create();
	headb=create();
	heada=merge(heada,headb);
	sort(heada);
	print(heada);
	return 0;
} 
stu *create(void)
{
	stu *head=NULL,*pt1,*pt2;
	int n=0;
	printf("���������ɸ�ѧ����ѧ�źͳɼ�,������0�뿪���룺\n");
	pt1=(stu *)malloc(LEN);
	scanf("%ld %f",&pt1->num,&pt1->score);
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
		scanf("%ld %f",&pt1->num,&pt1->score);
	}
	pt2->next=NULL;
	return head;
}
stu *merge(stu *head1,stu *head2)
{
	stu *pt1=head1,*pt2=head2;
	while(pt1->next!=NULL)  /* �ҵ�ǰһ�������β�ڵ�ĵ�ַ */
	{
		pt1=pt1->next;
	}
	pt1->next=pt2;
	return head1; 
}
void sort(stu *head)
{
	stu *pt1,*pt2;
	long templ;
	float tempf;
	for(pt1=head;pt1->next!=NULL;pt1=pt1->next )  /* ����ð���������Ը�����ĸ���Ա���ݽ��бȽϲ�����ֵ */
	{
		for(pt2=head;pt2->next!=NULL;pt2=pt2->next )  
		/* ע��forѭ���˳�����Ϊpt1->next��=NULL��������pt1->next��=NULL,��Ϊ���ߵĻ���ᵼ�¶�NULLָ��ȥ�˳�Ա������ֵ */
		{
			if(pt2->num>pt2->next->num)
			{
				templ=pt2->num;
				pt2->num=pt2->next->num;
				pt2->next->num=templ;
				tempf=pt2->score;
				pt2->score=pt2->next->score;
				pt2->next->score=tempf;
			}
		}
	}
	return;
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
			printf("��ѧ��ѧ�ţ�%ld  �ɼ�Ϊ��%.2f\n",pt->num,pt->score );
			pt=pt->next;
		}
	}
	return;
}
