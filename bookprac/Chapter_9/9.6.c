/* 9.6.c--圆桌退席问题链表处理 */
#include<stdio.h>
#define LEN sizeof(per)  /* 自定义结构体的所占的字节数 */ 
#define N 13   /* 定义一个可以改变原桌上人数的符号常量以用于后续数的改变 */ 
typedef struct person{
	int num;
	int isdel;  
	/* 判断是否在一轮循环中删除该结点的标志成员变量，默认为0即为不删除状态 */ 
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
	while(head->next!=NULL)   /* 外循环控制头结点的next不为NULL以使最后剩余一个结点 */ 
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
		head=del(head);  /* 每轮对head即头结点的更新即删除一轮下来count为3的结点 */ 
	}
	print(head);
	return 0;
}
per *create(void)  /* 产生指定好的数据信息，而不是输入产生 */
{
	per *pt1,*pt2,*head;
	int i;
	for(i=1;i<N+1;i++)
	{
		if(i==1)
		{
			pt2=head=(per *)malloc(LEN);  /* 为各节点动态分配内存空间并对成员变量赋初值 */ 
			head->num=i;
			head->isdel=0;  /* 默认均为不删除状态 */
		}
		else
		{
			pt1=(per *)malloc(LEN);  /* 产生新结点 */ 
			pt1->num=i;
			pt1->isdel=0;
			pt2->next=pt1;  /*新结点与旧结点的连接 */ 
			pt2=pt1;  /* 存上一个结点 */ 
		}
	}
	pt2->next=NULL;
	return head;
}
void print(per *head)
{
	per *pt=head;
	if(head==NULL)
		printf("该链表已无结点！！\n");
	else
	{
		printf("当前的链表相关数据为：\n");
		while(pt!=NULL)
		{
			printf("该学生学号：%d \n",pt->num ); 
			 /* 根据要创建的链表的各结点的数据类型以及信息来选择不同的输出格式 */
			pt=pt->next;
		}
	}
	return;
}
per *del(per *head)
{
	per *pt1,*pt2;
	while(head->isdel!=0)  /* 先使头结点为不删除的状态 */ 
	{
		head=head->next;
	}
	pt1=head;
	while(pt1!=NULL)  
	/* 如若没有第一个while循环，会使当头结点要删除时，pt2没赋初值则会使第一不报错并且头结点删除的情况不与普通情况操作相同 */ 
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
