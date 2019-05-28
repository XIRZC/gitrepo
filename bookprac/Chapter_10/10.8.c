/* 10.7.c--文件读取二进制数据然后进行排序,然后插入一个学生并插入到原文件 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	long num;
	char name[10];
	float score[3];
	float average;
}stu[5],stunew;
struct TEMP{
	long num;
	char name[10];
	float average;
}temp;
void swapscore(float *pt1,float *pt2);
int main(void)
{
	FILE *fpt1,*fpt2;
	int i,j,k,count;
	float sum=0;
	fpt1=fopen("C://Users/Xiezi/Desktop/temp/stud.txt","rb");
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
	for(i=0;i<4;i++)  /* 冒泡排序对平均成绩进行排序，并保持其他数据跟随其平均成绩交换 */ 
	{
		for(j=0;j<4-i;j++)
		{
			if(stu[j].average>stu[j+1].average)
			{
				swapscore(&stu[j].average,&stu[j+1].average );
				for(k=0;k<3;k++)
					swapscore(stu[j].score+k,stu[j+1].score+k);
				strcpy(temp.name,stu[j].name );
				strcpy(stu[j].name,stu[j+1].name );
				strcpy(stu[j+1].name,temp.name);
				temp.num=stu[j].num;
				stu[j].num=stu[j+1].num;
				stu[j+1].num=temp.num;
			}
		}
	}
	for(i=0;i<5;i++)
		fwrite(&stu[i],sizeof(struct student),1,fpt2);
	/* main函数再次行之前的部分是为了为五个学生平均成绩进行排序并生成文件，之后为读取插入操作 */
	printf("请输入要插入学生的各种信息,包括学号，姓名，三门学科成绩：");
	scanf("%ld %s %f %f %f",&stunew.num,stunew.name,stunew.score,stunew.score+1,
	stunew.score+2);
	sum+=stunew.score[0]+stunew.score[1]+stunew.score[2];
	stunew.average=sum/3;
	for(i=0;i<5;i++)
	{
		if(stu[i].average>stunew.average)
		{
			count=i;  /* 找到要插入的位置 */
			break;
		}
	}
	if(i==5)  /* 若i到5才退出循环，则说明要插入到最后 */
		count=5;
	else if(i==0)  /* 若i为0时就退出则说明要插入到最前 */ 
		count=0;
	else ;
	fseek(fpt2,(long)sizeof(struct student)*count,0);
	fwrite(&stunew,sizeof(struct student),1,fpt2);
	fclose(fpt1);
	fclose(fpt2); 
	return 0;
}
void swapscore(float *pt1,float *pt2)
{
	float temp;
	temp=*pt1;
	*pt1=*pt2;
	*pt2=temp;
	return;
}
