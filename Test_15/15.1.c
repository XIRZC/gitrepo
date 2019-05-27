/* 15.1.c--学号删除单链表的结点 */
#include<stdio.h>
#include"sum.h"
int main(void)
{
	struct student stu1,stu2,stu3,stu4,*head,*pt;
	int num;
	head=&stu1;
	stu1.next=&stu2;
	stu2.next=&stu3;
	stu3.next=&stu4;  /* 创建一个含四个结点的静态链表 */
	stu4.next=NULL;
	printf("请输入4个学生的学号，姓名，性别，年龄，计算机成绩:");
	pt=head;
	while(pt!=NULL)   /* 根据成绩来重新连接各节点并分成两类 */
	{
		scanf("%ld %s %s %d %f",&pt->num,pt->name,pt->sex,&pt->age,&pt->score);
		pt=pt->next;
	}
	printf("请输入要删除的结点的学生学号,按q离开输入：");
	while(scanf("%d",&num))
	{
		head=del1(head,num);
		print(head);
	}
	system("pause");
	return 0;
}

