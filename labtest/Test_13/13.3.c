/* 13.3.c--�ṹ��Ƕ�׹�����ͳ��ѧ������ʦ�Ĳ�ͬ���� */ 
#include<stdio.h>
typedef struct INFO{
	char name[10],occu[10],sex[10]; /* ְҵ */
	long num;
	union DIFF{
		int classnum;  /* �༶�� */ 
		char job[10];  /* ��ʦְ�� */ 
	}diff;  /* ���ù�����ʹ��ͬһ����ַ����ܲ�ͬ������ */ 
}info;
void input(info *);
void print(info *);
int main(void)
{
	info schinfo[10];
	int i,count=0;
	printf("�������У�����ɸ���ʦ��ѧ����������ѧ�ţ��Ա�ְҵ,4��ֵ��Ϊ0ʱ�뿪���룺");
	for(i=0;i<10;i++)
	{
		input(schinfo+i);
		if((schinfo+i)->num==0)
			break;
		count++;
	}
	for(i=0;i<count;i++)
	{
		print(schinfo+i);
	}
	return 0;
}
void input(info *pt)
{
	scanf("%s %ld %s %s",pt->name,&pt->num,pt->sex,pt->occu);
	if(strcmp(pt->occu,"student")==0||strcmp(pt->occu,"ѧ��")==0)
	{
		printf("�������ѧ���İ༶���룺"); 
		scanf("%d",&pt->diff.classnum);
	}
	else if(strcmp(pt->occu,"teacher")==0||strcmp(pt->occu,"��ʦ")==0)
	{
		printf("���������ʦ��ְ��");
		scanf("%s",pt->diff.job);
	}
	else
	{
		printf("ְ��������󣡣�");
	}
	return;
}
void print(info *pt)
{
	if(strcmp(pt->occu,"student")==0||strcmp(pt->occu,"ѧ��")==0)
	{
		printf("��ѧ����������ѧ�ţ��Ա𣬰༶�ֱ�Ϊ��%s %ld %s  %d\n",
		pt->name,pt->num,pt->sex,pt->diff.classnum);
	}
	else if(strcmp(pt->occu,"teacher")==0||strcmp(pt->occu,"��ʦ")==0)
	{
		printf("����ʦ��������ְ���ţ��Ա�ְ��ֱ�Ϊ��%s %ld %s %s\n",
		pt->name,pt->num,pt->sex,pt->diff.job);
	}
	return;
}
