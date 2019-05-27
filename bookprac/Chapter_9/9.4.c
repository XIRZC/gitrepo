/* 9.4.c--学生数据记录的输入输出 */
#include<stdio.h>
struct grade{
	int num;
	char name[10];
	int score[3];
};
void input(struct grade *sgrade);
void print(struct grade *sgrade); 
int main(void)
{
	struct grade sgrade[5]; 
	input(sgrade);
	print(sgrade);
	return 0;
}
void input(struct grade *sgrade)
{
	struct grade *temp;
	int i;
	printf("请依次输入五个学生的成绩数据记录,各学生成绩记录以ENTER键隔开：\n"); 
	for(temp=sgrade;temp<sgrade+5;temp++)
	{
		scanf("%d %s",&temp->num,temp->name);
		for(i=0;i<3;i++)
		{
			scanf("%d",temp->score+i);
		}
	}
	return;
}
void print(struct grade *sgrade)
{
	struct grade *temp;
	int i;
	printf("各学生成绩记录为：\n");
	for(temp=sgrade;temp<sgrade+5;temp++)
	{
		printf("%s\t%d   ",temp->name,temp->num);
		for(i=0;i<3;i++)
		{
			printf("%d  ",*(temp->score+i));
		}
		printf("\n");
	}
	return;
}
