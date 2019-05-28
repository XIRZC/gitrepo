/* 10.9.c--文件存取结构体信息并提取某一列信息 */
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
	FILE *fpt1,*fpt2;
	int count=0,i;
	fpt1=fopen("C://Users/Xiezi/Desktop/temp/employee.txt","r");
	fpt2=fopen("C://Users/Xiezi/Desktop/temp/simp_empl.txt","w");
	if(fpt1==NULL)
	{
		printf("打开文本文件失败！！！\n");
		exit(0);
	}
	if(fpt2==NULL)
	{
		printf("创建文件失败！！！\n");
		exit(0);
	}
	while(!feof(fpt1))
	{
		fscanf(fpt1,"%s %ld %s %d %s %f %c %c",stu[count].name,&stu[count].num,
		stu[count].sex,&stu[count].age,stu[count].addr,&stu[count].salary,
		&stu[count].health,&stu[count].culture);
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		fprintf(fpt2,"%-20s %-10.2f\n",stu[i].name,stu[i].salary );
	}
	fclose(fpt1);
	fclose(fpt2);
	system("pause");
	return 0;
}
