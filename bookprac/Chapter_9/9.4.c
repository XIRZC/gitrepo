/* 9.4.c--ѧ�����ݼ�¼��������� */
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
	printf("�������������ѧ���ĳɼ����ݼ�¼,��ѧ���ɼ���¼��ENTER��������\n"); 
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
	printf("��ѧ���ɼ���¼Ϊ��\n");
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
