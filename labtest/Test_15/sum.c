/* sum.c--综合函数包括输出，创建，插入，删除函数定义处 */ 
#include<stdio.h>
#include"sum.h"
#include<string.h>
stu *insert(stu *head,int num)
{
	struct student *pt1,*pt2,*ptnew;
	if(head==NULL)   /* 当原链表为空链表时 */
	{
		ptnew=(struct student *)malloc(LEN);
		printf("请输入该学生姓名，性别，年龄，计算机成绩:");
		ptnew->num=num;
		scanf("%s %s %d %f", ptnew->name, ptnew->sex, &ptnew->age, &ptnew->score);
		head=ptnew;
		ptnew->next=NULL; /* 需为该新链表的终结点的next处添加NULL */
	}
	else  /* 当原链表已有结点时 */
	{
		pt1=head;
		while(pt1->num<num&&pt1->next!=NULL)  /* 当pt1指向最后一个元素时或当前所指向元素大于num时退出循环 */
		{
			pt2=pt1;
			pt1=pt1->next;
		}
		if(pt1->num==num)  /* 防止出现两个学号相同的结点 */
		{
			printf("该学号已对应一个结点，请重新选择：\n");
		}
		else 
		{
			ptnew=(struct student *)malloc(LEN);
			printf("请输入该学生姓名，性别，年龄，计算机成绩:");
			ptnew->num=num;
			scanf("%s %s %d %f", ptnew->name, ptnew->sex, &ptnew->age, &ptnew->score);
			if(pt1->num<num)  /* 当插入位置为最后一个位置时 */
			{
				pt1->next=ptnew;  /* 插入新生成的结点 */
				ptnew->next=NULL;
			}
			else if(pt1==head)  /* 当插入位置为头位置时 */
			{
				ptnew->next=head;
				head=ptnew;
			}
			else  /* 当插入位置为中间时 */
			{
				pt2->next=ptnew;
				ptnew->next=pt1;
			}
			printf("该节点已添加\n");
		}
	}
	return head;
}
stu *del2(stu *stupt,char *chpt)
{
	struct student *pt1,*pt2,*head=stupt;
	if(head==NULL)
		printf("该链表为空表!!!\n");
	else
	{
		pt1=head;
		while(strcmp(pt1->name,chpt)!=0&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* 正常情况下pt2和pt1分别为要删除的结点的前一个结点以及要删除的结点 */
		}
		if(strcmp(pt1->name,chpt)==0)   /* 在找到的情形下 */
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
stu *del1(stu *stupt,int num)
{
	struct student *pt1,*pt2,*head=stupt;
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
void print(stu *head)
{
	struct student *pt=head;
	if(head==NULL)
		printf("该链表已无结点！！\n");
	else
	{
		printf("当前的链表相关数据为：\n");
		while(pt!=NULL)
		{
			printf("该学生学号：%ld 名字为：%s 性别为：%s 年龄为：%d 成绩为：%.2f\n",
				pt->num,pt->name,pt->sex,pt->age,pt->score );
			pt=pt->next;
		}
	}
	return;
}
stu *create(void)
{
	struct student *head=NULL,*pt1,*pt2;
	int n=0;
	pt1=(struct student *)malloc(LEN);
	printf("请输入若干个学生的学号，姓名，性别，年龄，计算机成绩:");
	scanf("%ld %s %s %d %f",&pt1->num,pt1->name,pt1->sex,&pt1->age,&pt1->score);
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
		scanf("%ld %s %s %d %f",&pt1->num,pt1->name,pt1->sex,&pt1->age,&pt1->score);
	}
	pt2->next=NULL;
	return head;
}
void sort(stu *head)
{
	stu * pt1, *pt2;
	long tempnum;
	int tempage;
	char tempname[10],tempsex[10];
	float tempscore;
	pt1 = pt2 = head;
	while (pt1 != NULL)
	{
		pt2 = pt1->next;
		while (pt2 != NULL)
		{
			if (pt1->score > pt2->score)
			{
				tempscore = pt1->score;
				pt1->score = pt2->score;
				pt2->score = tempscore;
				tempage = pt1->age;
				pt1->age = pt2->age;
				pt2->age = tempage;
				tempnum = pt1->num;
				pt1->num = pt2->num;
				pt2->num = tempnum;
				strcpy(tempname, pt1->name);
				strcpy(pt1->name, pt2->name);
				strcpy(pt2->name, tempname);
				strcpy(tempsex, pt1->sex);
				strcpy(pt1->sex, pt2->sex);
				strcpy(pt2->sex, tempsex);
			}
			pt2 = pt2->next;
		}
		pt1 = pt1->next;
	}
	return;
}
