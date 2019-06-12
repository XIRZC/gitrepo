/* 9.11.c--a链表中删除b链表中相同学号的结点 */
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
				/* 如果该过程中没有删除头结点，则保留原头结点，若删除了头结点，则赋值为新的头结点以便后续输出 */
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
		printf("该链表为空表!!!\n");
	else
	{
		pt1=head;
		while(pt1->num!=num&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* 正常情况下pt2和pt1分别为要删除的结点的前一个结点以及要删除的结点 */
		}
		if(pt1->num==num)   /* 在找到的情形下 */
		{
			if(pt1==head)
				head=pt1->next;  
				/* 要考虑到该种特殊情况，删除的结点为第一个结点，需要把head的值赋为第二个结点的值 */
			else
			{
				pt2->next=pt1->next;  /* 包含要去除的结点在最后一个节点的情况 */
			} 
			printf("已删除该该节点\n"); 	
		}
		else  /* 在未找到的情形下 */ 
			printf("该链表中无该项！！！\n");
	}
	return head;
}
stu *create(void)
{
	stu *head=NULL,*pt1,*pt2;
	int n=0;
	printf("请输入若干个学生的学号和姓名,均属入0离开输入：\n");
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
		printf("该链表已无结点！！\n");
	else
	{
		printf("当前的链表相关数据为：\n");
		while(pt!=NULL)
		{
			printf("该学生学号：%ld  成绩为：%s\n",pt->num,pt->name);
			pt=pt->next;
		}
	}
	return;
}
