/* 9.10.c--链表合并以及排序 */ 
#include<stdio.h>
#define LEN sizeof(stu)
typedef struct student{
	long num;
	float score;
	struct student *next;
}stu; 
/*样例输入：
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
	printf("请输入若干个学生的学号和成绩,均属入0离开输入：\n");
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
	while(pt1->next!=NULL)  /* 找到前一个链表的尾节点的地址 */
	{
		pt1=pt1->next;
	}
	pt1->next=pt2;
	return head1; 
}
void sort(stu *head)   /* 通过仅仅交换数据(冒泡排序)来实现排序 */
{
	stu *pt1,*pt2;
	stu temp; 
	for(pt1=head;pt1->next!=NULL;pt1=pt1->next )
	{
		for(pt2=head;pt2->next!=NULL;pt2=pt2->next)
		{
			if(pt2->num>pt2->next->num)
			{
				temp.num=pt2->num;
				pt2->num=pt2->next->num;
				pt2->next->num=temp.num;
				temp.score=pt2->score;
				pt2->score=pt2->next->score;
				pt2->next->score=temp.score;
			}
		}
	} 
	return;
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
			printf("该学生学号：%ld  成绩为：%.2f\n",pt->num,pt->score );
			pt=pt->next;
		}
	}
	return;
}
