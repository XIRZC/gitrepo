/* 14.3.c--����ѧ����Ϣ��¼�ļ�����ȡ�ļ�����ѧ�������Ϣ */
#include<stdio.h>
#include<stdlib.h>
struct student{
	long num;
	char name[10];
	float score;
	long telenum;
}stu[10];
void find(long num,struct student *pt,int count);
int main(void)
{
	FILE *fpt;
	int count=0,i,num;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/stulog.txt","w");
	if(fpt==NULL)
	{
		printf("�ļ�����ʧ�ܣ�����\n");
		exit(0);
	}
	printf("����������ѧ����ȫ����Ϣ����ѧ�ţ��������ܷ֣���ϵ�绰������0�뿪���룺");
	scanf("%ld %s %f %ld",&stu[count].num,stu[count].name,&stu[count].score,&stu[count].telenum); 
	while(stu[count].num!=0)
	{
		fwrite(&stu[count],sizeof(struct student),1,fpt);
		count++;
		scanf("%ld %s %f %ld",&stu[count].num,stu[count].name,&stu[count].score,&stu[count].telenum); 
	}
	printf("ѧ����Ϣ��¼��ϣ�\n");
	printf("������Ҫ��ѯ��ѧ����ѧ��,��q���뿪���룺");
	while(scanf("%d",&num))
	{
		find(num,stu,count);
	}
	fclose(fpt);
	return 0;
} 
void find(long num,struct student *pt,int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(num==pt[i].num )
		{
			printf("ѧ�ţ�%-10ld������%-20s�ܷ�%-10.2f��ϵ�绰��%-10ld\n",
			pt[i].num,pt[i].name,pt[i].score,pt[i].telenum); 
		}
	}
	return;
} 
