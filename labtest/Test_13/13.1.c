/* 13.1.c--结构体输入输出学生的信息 */ 
#include<stdio.h>
typedef struct student_info{
	long num;
	char name[10];
	int age;
	float c_score,math_score,eng_score,average,sum;  /* 利用typedef关键字来简化该结构体的名称 */ 
} stuinfo;
void input(stuinfo *);
void print(stuinfo *,int);  /* 函数声明时可只声明参数类型，而不用传入具体变量标识符 */ 
int main(void)
{
	stuinfo stu[3];  /* 定义一个结构体数组来存放三个学生的相关数据 */
	int i;
	printf("请输入三个学生的学号，名字，年龄，c语言、微积分、英语成绩：");
	for(i=0;i<3;i++)
		input(stu+i);
	for(i=0;i<3;i++)
		print(stu+i,i);
	return 0;
}
void input(stuinfo *pt)
{
	scanf("%ld %s %d %f %f %f",&pt->num,pt->name,&pt->age,&pt->c_score,
	&pt->math_score,&pt->eng_score);
	pt->sum=pt->c_score+pt->math_score+pt->eng_score;
	pt->average=pt->sum/3;
	return;
}
void print(stuinfo *pt,int n)
{
	printf("第%d个学生的学号，姓名，总分，平均分分别为：%d %s %.2f %.2f\n",
	n+1,pt->num,pt->name,pt->sum,pt->average);
	return;
}
