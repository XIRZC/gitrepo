/* 8.15.c--学生成绩相关操作 */
#include<stdio.h>
float firstaver(int (*pt)[5]);
float studentaver(int (*pt)[5],int n);
void findprintinfo(int (*pt)[5]);
void isgreat(int (*pt)[5]); 
int main(void)
{
	int array[4][5]={86,87,93,89,90,91,96,95,94,98,78,82,86,90,56,56,58,89,76,54};
	/*1全部成绩在85以上，2平均成绩在90分以上，3正常， 4不及格 */
	printf("第一门课程平均分为：%.2f\n",firstaver(array));
	findprintinfo(array);
	isgreat(array);
	return 0;
}
float firstaver(int (*pt)[5])
{
	float sum=0;
	int i;
	for(i=0;i<4;i++)
	{
		sum+=pt[i][0];
	}
	return sum/4;
}
void findprintinfo(int (*pt)[5])
{
	int i,j,fail,k;
	for(i=0;i<4;i++)
	{
		fail=0;
		for(j=0;j<5;j++)
		{
			if(pt[i][j]<60)
			{
				fail++;
			}
			if(fail>2)
			{
				printf("第%d个学生不及格门数超过两门\n",i+1);
				printf("该学生的全部课程成绩为：");
				for(k=0;k<5;k++) 
				{
					printf("%d ",pt[i][k]);
				}
				printf("\n该学生的平均成绩为：%.2f\n",studentaver(pt,i));
			}
		}
	}
	return;
}
float studentaver(int (*pt)[5],int number)
{
	float sum=0;
	int i,j;
	for(i=0;i<5;i++)
	{
		sum+=pt[number][i];
	}
	return sum/5;
}
void isgreat(int (*pt)[5])
{
	int flag,i,j;
	for(i=0;i<4;i++)
	{
		if(studentaver(pt,i)>90)
		{
			flag=1;
		}
		else
		{
			flag=1;   /* 利用flag来判断该学生是否优秀即成绩是否达到标准 */ 
			for(j=0;j<5;j++)
			{
				if(pt[i][j]<=85)
				{
					flag=0;  /* 在平均成绩低于90分时，若有一门低于85，则为不优秀 */ 
				}
			}
		}
		if(flag)
			printf("第%d个学生平均成绩在90分以上或所有成绩为85分以上\n",i+1);
	}
	return;
}
