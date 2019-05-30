/* 14.3.c--建立学生信息记录文件并读取文件根据学号输出信息 */
#include<stdio.h>
#include<stdlib.h>
struct student{
	long num;
	char name[10];
	float score;
	long telenum;
}stu[10];
int find(long num,struct student *pt,int count);
/* 样例输入：
1003 xiaohong 585 1234562
1374 xiaokun 620 1423573
1086 xiaocan 591 1008611
1074 xiaoming 701 1001010 
*/
int main(void)
{
	FILE *fpt;
	int count=0,i,num;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/stulog.txt","w");  
	/* 只有r可以读取数据,若为w或a时都会导致读取失败，w还会清空原文件内容 */
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
		if(find(num,stu,count))     ;
		else printf("未曾录入过该学生的信息因此查找不到，请重新输入！！！\n");
	}
	fclose(fpt);
	return 0;
} 
int find(long num,struct student *pt,int count)
{
	int i,flag=0;
	for(i=0;i<count;i++)
	{
		if(num==pt[i].num )
		{
			printf("学号：%-10ld姓名：%-20s总分%-10.2f联系电话：%-10ld\n",
			pt[i].num,pt[i].name,pt[i].score,pt[i].telenum); 
			flag=1;  /* 若为查找到该学生，flag就为0，否则就为1 */
		}
	}
	return flag;
} 
