/* 10.10.c--职工工资文件中删除一个职工数据并存放到原文件 */
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
	fpt=fopen("C://Users/Xiezi/Desktop/temp/simp_empl.txt","r");  /* 以只读的方式打开文件 */
	if(fpt==NULL)
	{
		printf("第一次打开文件失败！！！\n");
		exit(0);
	}
	while(!feof(fpt))
	{
		fscanf(fpt,"%s %f",stu[count].name,&stu[count].salary );
		count++;
	}
	fclose(fpt);
	fpt=fopen("C://Users/Xiezi/Desktop/temp/simp_empl.txt","w"); 
	/* 以只写的方式打开文件，此时文件内容清空，重新写入即可 */ 
	if(fpt==NULL)
	{
		printf("第二次打开文件失败！！！\n");
		exit(0);
	}
	printf("请输入要删除的职工的职工名：");
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
