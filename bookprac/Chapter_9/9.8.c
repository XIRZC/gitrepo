/* 9.8.c--链表插入节点函数 */
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
	printf("请保证原链表的学号为按从小到大的顺序输入!!!\n");
	stu *head=create(),*nhead;
	int num;
	printf("请输入要添加的结点的学生学号,按q离开输入：");
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
	if(head==NULL)  /* 若原链表为空时 */ 
	{
		ptnew=(stu *)malloc(LEN);
		printf("请输入该学生的成绩：");    /* 产生新的结点 */
		ptnew->num=num;
		scanf("%f",&ptnew->score );
		head=ptnew;
		ptnew->next=NULL; /* 需为该新链表的终结点的next处添加NULL */
	}
	else  /* 当原链表已存在结点时 */ 
	{
		pt1=head;
		while(pt1->num<num&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;
		}
		if(pt1->num==num)  /* 若存在与该结点的学号相同的结点时 */ 
		{
			printf("该学号已对应一个结点，请重新选择：\n");
		}
		else /* 不存在相同学号时 */ 
		{
			ptnew=(stu *)malloc(LEN);
			printf("请输入要添加的结点的学生成绩：");
			ptnew->num=num;
			scanf("%f",&ptnew->score );
			if(pt1->num<num)  /* 当添加在最后的结点的后面的结点时 */ 
			{
				pt1->next=ptnew;
				ptnew->next=NULL;
			}
			else if(pt1==head)  /* 当添加在头结点前的一个结点时 */ 
			{
				ptnew->next=head;
				head=ptnew;
			}
			else  /* 当添加在中间的某一结点时 */
			{
				pt2->next=ptnew;
				ptnew->next=pt1;
			}
			printf("该节点已添加\n");
		}
	}
	return head;
}
stu *create(void)
{
	stu *head=NULL,*pt1,*pt2;
	int n=0;
	printf("请输入若干个学生的学号和成绩，均属入0离开输入：\n") ;
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
		printf("该链表已无结点！！\n");
	else
	{
		printf("当前的链表相关数据为：\n");
		while(pt!=NULL)
		{
			printf("该学生学号：%d  成绩为：%.2f\n",pt->num,pt->score );
			pt=pt->next;
		}
	}
	return;
}
