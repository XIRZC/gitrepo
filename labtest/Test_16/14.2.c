/* 14.2.c--�����ѽ����ı��ļ������ݲ����ÿ��ѧ����ƽ���ɼ� */
#include<stdio.h>
#include<stdlib.h>
struct student{
	long num;
	char name[10];
	float engscore;
	float mathscore;
	float comscore;
	float aver;
}stu[10];
int main(void)
{
	FILE *fpt;
	int i,count=0;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/student.txt","r");
	if(fpt==NULL)
	{
		printf("�ļ���ʧ�ܣ�����\n");
		exit(0);
	}
	while(!feof(fpt))
	{
		fscanf(fpt,"%ld %s %f %f %f",&stu[count].num,stu[count].name,&stu[count].engscore,
		&stu[count].mathscore,&stu[count].comscore );
		count++;
	}
	for(i=0;i<count;i++)
	{
		stu[i].aver=(stu[i].engscore+stu[i].mathscore+stu[i].comscore)/3;
		printf("��%d��ѧ����ƽ���ɼ�Ϊ��%.2f\n",i+1,stu[i].aver );
	}
	fclose(fpt);
	return 0;
}
