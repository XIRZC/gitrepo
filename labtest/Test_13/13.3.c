/* 13.3.c--结构体嵌套共用体统计学生和老师的不同数据 */ 
#include<stdio.h>
typedef struct INFO{
	char name[10],occu[10],sex[10]; /* 职业 */
	long num;
	union DIFF{
		int classnum;  /* 班级号 */ 
		char job[10];  /* 老师职务 */ 
	}diff;  /* 利用共用体使用同一个地址存可能不同的数据 */ 
}info;
void input(info *);
void print(info *);
int main(void)
{
	info schinfo[10];
	int i,count=0;
	printf("请输入该校内若干个老师和学生的姓名，学号，性别，职业,4个值均为0时离开输入：");
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
	if(strcmp(pt->occu,"student")==0||strcmp(pt->occu,"学生")==0)
	{
		printf("请输入该学生的班级号码："); 
		scanf("%d",&pt->diff.classnum);
	}
	else if(strcmp(pt->occu,"teacher")==0||strcmp(pt->occu,"老师")==0)
	{
		printf("请输入该老师的职务：");
		scanf("%s",pt->diff.job);
	}
	else
	{
		printf("职务输入错误！！");
	}
	return;
}
void print(info *pt)
{
	if(strcmp(pt->occu,"student")==0||strcmp(pt->occu,"学生")==0)
	{
		printf("该学生的姓名，学号，性别，班级分别为：%s %ld %s  %d\n",
		pt->name,pt->num,pt->sex,pt->diff.classnum);
	}
	else if(strcmp(pt->occu,"teacher")==0||strcmp(pt->occu,"老师")==0)
	{
		printf("该老师的姓名，职工号，性别，职务分别为：%s %ld %s %s\n",
		pt->name,pt->num,pt->sex,pt->diff.job);
	}
	return;
}
