/* 9.12.c--根据结点的成员变量的数据删除结点 */ 
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
	printf("请输入一个年龄，会删除产生的链表中年龄与该值相同的结点：");
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
	printf("请输入若干个学生的学号、姓名、性别、年龄,均属入0离开输入：\n");
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
stu *del(stu *head,int age)  /* 当用年龄删除结点而不是学号时只需改变while和if的控制条件即可 */
{
	stu *pt1,*pt2;
	if(head==NULL)
		printf("该链表为空表!!!\n");
	else
	{
		pt1=head;
		while(pt1->age!=age&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* 正常情况下pt2和pt1分别为要删除的结点的前一个结点以及要删除的结点 */
		}
		if(pt1->age==age)   /* 在找到的情形下 */
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
			printf("该学生学号：%ld  姓名为：%s 性别为：%s 年龄为：%d\n",
			pt->num,pt->name,pt->sex,pt->age );
			pt=pt->next;
		}
	}
	return;
}
