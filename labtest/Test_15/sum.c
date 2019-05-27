/* sum.c--�ۺϺ���������������������룬ɾ���������崦 */ 
#include<stdio.h>
#include"sum.h"
#include<string.h>
stu *insert(stu *head,int num)
{
	struct student *pt1,*pt2,*ptnew;
	if(head==NULL)   /* ��ԭ����Ϊ������ʱ */
	{
		ptnew=(struct student *)malloc(LEN);
		printf("�������ѧ���������Ա����䣬������ɼ�:");
		ptnew->num=num;
		scanf("%s %s %d %f", ptnew->name, ptnew->sex, &ptnew->age, &ptnew->score);
		head=ptnew;
		ptnew->next=NULL; /* ��Ϊ����������ս���next�����NULL */
	}
	else  /* ��ԭ�������н��ʱ */
	{
		pt1=head;
		while(pt1->num<num&&pt1->next!=NULL)  /* ��pt1ָ�����һ��Ԫ��ʱ��ǰ��ָ��Ԫ�ش���numʱ�˳�ѭ�� */
		{
			pt2=pt1;
			pt1=pt1->next;
		}
		if(pt1->num==num)  /* ��ֹ��������ѧ����ͬ�Ľ�� */
		{
			printf("��ѧ���Ѷ�Ӧһ����㣬������ѡ��\n");
		}
		else 
		{
			ptnew=(struct student *)malloc(LEN);
			printf("�������ѧ���������Ա����䣬������ɼ�:");
			ptnew->num=num;
			scanf("%s %s %d %f", ptnew->name, ptnew->sex, &ptnew->age, &ptnew->score);
			if(pt1->num<num)  /* ������λ��Ϊ���һ��λ��ʱ */
			{
				pt1->next=ptnew;  /* ���������ɵĽ�� */
				ptnew->next=NULL;
			}
			else if(pt1==head)  /* ������λ��Ϊͷλ��ʱ */
			{
				ptnew->next=head;
				head=ptnew;
			}
			else  /* ������λ��Ϊ�м�ʱ */
			{
				pt2->next=ptnew;
				ptnew->next=pt1;
			}
			printf("�ýڵ������\n");
		}
	}
	return head;
}
stu *del2(stu *stupt,char *chpt)
{
	struct student *pt1,*pt2,*head=stupt;
	if(head==NULL)
		printf("������Ϊ�ձ�!!!\n");
	else
	{
		pt1=head;
		while(strcmp(pt1->name,chpt)!=0&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* ���������pt2��pt1�ֱ�ΪҪɾ���Ľ���ǰһ������Լ�Ҫɾ���Ľ�� */
		}
		if(strcmp(pt1->name,chpt)==0)   /* ���ҵ��������� */
		{
			if(pt1==head)
				head=pt1->next;  
				/* Ҫ���ǵ��������������ɾ���Ľ��Ϊ��һ����㣬��Ҫ��head��ֵ��Ϊ�ڶ�������ֵ */
			else
			{
				pt2->next=pt1->next;  /* ����Ҫȥ���Ľ�������һ���ڵ����� */
			} 
			printf("��ɾ���øýڵ�\n"); 	
		}
		else  /* ��δ�ҵ��������� */ 
			printf("���������޸������\n");
	}
	return head;
}
stu *del1(stu *stupt,int num)
{
	struct student *pt1,*pt2,*head=stupt;
	if(head==NULL)
		printf("������Ϊ�ձ�!!!\n");
	else
	{
		pt1=head;
		while(pt1->num!=num&&pt1->next!=NULL)
		{
			pt2=pt1;
			pt1=pt1->next;  /* ���������pt2��pt1�ֱ�ΪҪɾ���Ľ���ǰһ������Լ�Ҫɾ���Ľ�� */
		}
		if(pt1->num==num)   /* ���ҵ��������� */
		{
			if(pt1==head)
				head=pt1->next;  
				/* Ҫ���ǵ��������������ɾ���Ľ��Ϊ��һ����㣬��Ҫ��head��ֵ��Ϊ�ڶ�������ֵ */
			else
			{
				pt2->next=pt1->next;  /* ����Ҫȥ���Ľ�������һ���ڵ����� */
			} 
			printf("��ɾ���øýڵ�\n"); 	
		}
		else  /* ��δ�ҵ��������� */ 
			printf("���������޸������\n");
	}
	return head;
}
void print(stu *head)
{
	struct student *pt=head;
	if(head==NULL)
		printf("���������޽�㣡��\n");
	else
	{
		printf("��ǰ�������������Ϊ��\n");
		while(pt!=NULL)
		{
			printf("��ѧ��ѧ�ţ�%ld ����Ϊ��%s �Ա�Ϊ��%s ����Ϊ��%d �ɼ�Ϊ��%.2f\n",
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
	printf("���������ɸ�ѧ����ѧ�ţ��������Ա����䣬������ɼ�:");
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
