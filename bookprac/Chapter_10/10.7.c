/* 10.7.c--�ļ���ȡ����������Ȼ���������,Ȼ�����һ��ѧ���������ļ� */
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
	FILE *fpt1,*fpt2,*fpt3;
	int i,j,k,count;
	float sum=0;
	fpt1=fopen("C://Users/Xiezi/Desktop/temp/stud.txt","rb");
	fpt2=fopen("C://Users/Xiezi/Desktop/temp/stu_sort.txt","wb");
	fpt3=fopen("C://Users/Xiezi/Desktop/temp/stu_ins.txt","w"); 
	if(fpt1==NULL)
	{
		printf("��ȡ�ļ�������\n");
		exit(0); 
	}
	if(fpt2==NULL)
	{
		printf("�����ļ�ʱ��������\n");
		exit(0);
	}
	if(fpt3==NULL)
	{
		printf("�����ļ�ʱ��������\n");
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
	/* main�����ٴ���֮ǰ�Ĳ�����Ϊ��Ϊ���ѧ��ƽ���ɼ��������������ļ���֮��Ϊ��ȡ������� */
	printf("������Ҫ����ѧ���ĸ�����Ϣ,����ѧ�ţ�����������ѧ�Ƴɼ���");
	scanf("%ld %s %f %f %f",&stunew.num,stunew.name,stunew.score,stunew.score+1,
	stunew.score+2);
	sum+=stunew.score[0]+stunew.score[1]+stunew.score[2];
	stunew.average=sum/3;
	for(i=0;i<5;i++)
	{
		if(stu[i].average>stunew.average)
		{
			count=i;  /* �ҵ�Ҫ�����λ�� */
			break;
		}
	}
	if(i==5)  /* ��i��5���˳�ѭ������˵��Ҫ���뵽��� */
		count=5;
	else if(i==0)  /* ��iΪ0ʱ���˳���˵��Ҫ���뵽��ǰ */ 
		count=0;
	else ;
	for(i=0;i<5;i++)
	{
		if(count==i)
		{
			fprintf(fpt3,"%ld %s %.2f %.2f %.2f %.2f",stunew.num,stunew.name,
			stunew.score[0],stunew.score[1],stunew.score[2],stunew.average);
			fputc('\n',fpt3);
	 	}
		fprintf(fpt3,"%ld %s %.2f %.2f %.2f %.2f",stu[i].num,stu[i].name,
		stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].average);
		fputc('\n',fpt3);
	}
	if(count==5)
	{
		fprintf(fpt3,"%ld %s %.2f %.2f %.2f %.2f",stunew.num,stunew.name,
		stunew.score[0],stunew.score[1],stunew.score[2],stunew.average);
		fputc('\n',fpt3);
	}
	fclose(fpt1);
	fclose(fpt2); 
	fclose(fpt3);
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
