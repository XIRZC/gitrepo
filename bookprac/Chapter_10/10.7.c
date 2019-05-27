/* 10.7.c--文件读取二进制数据然后进行排序 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	long num;
	char name[10];
	float score[3];
	float average;
}stu[5];
int main(void)
{
	FILE *fpt1,*fpt2;
	int i,j;
	long tempnum;
	float tempscore[3],tempaver;
	char tempname[10];
	fpt1=fopen("C://Users/Xiezi/Desktop/temp/stu.txt","rb");
	fpt2=fopen("C://Users/Xiezi/Desktop/temp/stu_sort.txt","wb");
	if(fpt1==NULL)
	{
		printf("读取文件出错！！\n");
		exit(0); 
	}
	if(fpt2==NULL)
	{
		printf("创建文件时出错！！！\n");
		exit(0);
	}
	for(i=0;i<5;i++)
	{
		fread(&stu[i],sizeof(struct student),1,fpt1);	
	} 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(stu[j].average>stu[j+1].average)
			{
				tempaver=stu[j].average;
				stu[j].average=stu[j+1].average;
				stu[j+1].average=tempaver;
				strcpy(tempname,stu[j].name );
				strcpy(stu[j].name,stu[j+1].name );
				strcpy(stu[j+1].name,tempname);
				
			}
		}
	}
}
