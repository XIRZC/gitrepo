/* 13.1.c--�ṹ���������ѧ������Ϣ */ 
#include<stdio.h>
typedef struct student_info{
	long num;
	char name[10];
	int age;
	float c_score,math_score,eng_score,average,sum;  /* ����typedef�ؼ������򻯸ýṹ������� */ 
} stuinfo;
void input(stuinfo *);
void print(stuinfo *,int);  /* ��������ʱ��ֻ�����������ͣ������ô�����������ʶ�� */ 
int main(void)
{
	stuinfo stu[3];  /* ����һ���ṹ���������������ѧ����������� */
	int i;
	printf("����������ѧ����ѧ�ţ����֣����䣬c���ԡ�΢���֡�Ӣ��ɼ���");
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
	printf("��%d��ѧ����ѧ�ţ��������ܷ֣�ƽ���ֱַ�Ϊ��%d %s %.2f %.2f\n",
	n+1,pt->num,pt->name,pt->sum,pt->average);
	return;
}
