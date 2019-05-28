/* 14.3.c--建立学生信息记录文件并读取文件根据学号输出信息 */
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
		printf("文件创建失败！！！\n");
		exit(0);
	}
	printf("请依次输入学生的全部信息包括学号，姓名，总分，联系电话均属入0离开输入：");
	scanf("%ld %s %f %ld",&stu[count].num,stu[count].name,&stu[count].score,&stu[count].telenum); 
	while(stu[count].num!=0)
	{
		fwrite(&stu[count],sizeof(struct student),1,fpt);
		count++;
		scanf("%ld %s %f %ld",&stu[count].num,stu[count].name,&stu[count].score,&stu[count].telenum); 
	}
	printf("学生信息记录完毕！\n");
	printf("请输入要查询的学生的学号,按q键离开输入：");
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
			printf("学号：%-10ld姓名：%-20s总分%-10.2f联系电话：%-10ld\n",
			pt[i].num,pt[i].name,pt[i].score,pt[i].telenum); 
		}
	}
	return;
} 
