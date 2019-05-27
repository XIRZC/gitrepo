/* 9.7.c--链表删除节点函数 */
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
	printf("请输入要删除的结点的学生学号,按q离开输入：");
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
	/* 根据要创建的链表的各结点的数据类型以及信息来选择不同的输入格式 */
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
void print(struct student *head)
{
	struct student *pt=head;
	if(head==NULL)
		printf("该链表已无结点！！\n");
	else
	{
		printf("当前的链表相关数据为：\n");
		while(pt!=NULL)
		{
			printf("该学生学号：%d  成绩为：%.2f\n",pt->num,pt->score ); 
			 /* 根据要创建的链表的各结点的数据类型以及信息来选择不同的输出格式 */
			pt=pt->next;
		}
	}
	return;
}
