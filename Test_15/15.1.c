/* 15.1.c--ѧ��ɾ��������Ľ�� */
#include<stdio.h>
#include"sum.h"
int main(void)
{
	struct student stu1,stu2,stu3,stu4,*head,*pt;
	int num;
	head=&stu1;
	stu1.next=&stu2;
	stu2.next=&stu3;
	stu3.next=&stu4;  /* ����һ�����ĸ����ľ�̬���� */
	stu4.next=NULL;
	printf("������4��ѧ����ѧ�ţ��������Ա����䣬������ɼ�:");
	pt=head;
	while(pt!=NULL)   /* ���ݳɼ����������Ӹ��ڵ㲢�ֳ����� */
	{
		scanf("%ld %s %s %d %f",&pt->num,pt->name,pt->sex,&pt->age,&pt->score);
		pt=pt->next;
	}
	printf("������Ҫɾ���Ľ���ѧ��ѧ��,��q�뿪���룺");
	while(scanf("%d",&num))
	{
		head=del1(head,num);
		print(head);
	}
	system("pause");
	return 0;
}

