/* 10.10.c--ְ�������ļ���ɾ��һ��ְ�����ݲ���ŵ�ԭ�ļ� */
#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[10];
	long num;
	char sex[10];
	int age;
	char addr[10];
	float salary;
	char health;
	char culture;
}stu[10];
int main(void)
{
	FILE *fpt;
	char name[10];
	int count=0,i;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/simp_empl.txt","r");  /* ��ֻ���ķ�ʽ���ļ� */
	if(fpt==NULL)
	{
		printf("��һ�δ��ļ�ʧ�ܣ�����\n");
		exit(0);
	}
	while(!feof(fpt))
	{
		fscanf(fpt,"%s %f",stu[count].name,&stu[count].salary );
		count++;
	}
	fclose(fpt);
	fpt=fopen("C://Users/Xiezi/Desktop/temp/simp_empl.txt","w"); 
	/* ��ֻд�ķ�ʽ���ļ�����ʱ�ļ�������գ�����д�뼴�� */ 
	if(fpt==NULL)
	{
		printf("�ڶ��δ��ļ�ʧ�ܣ�����\n");
		exit(0);
	}
	printf("������Ҫɾ����ְ����ְ������");
	gets(name);
	for(i=0;i<count-1;i++)
	{
		if(strcmp(name,stu[i].name )!=0)
		{
			fprintf(fpt,"%-10s %-10.2f\n",stu[i].name,stu[i].salary );
		}
	}
	fclose(fpt);
	system("pause");
	return 0;
} 
