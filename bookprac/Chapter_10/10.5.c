/* 10.5.c--�ṹ�����ݱ��浽�ļ��� */ 
#include<stdio.h>
#include<stdlib.h>
/*�������룺
1003 xiaomign 68 98 67
1001 xiaohong 89 67 56
1002 xiaocan 67 87 87
1005 xiaokai 67 98 75 
1004 xiaogang 67 89 67
*/
struct student{
	long num;
	char name[10];
	float score[3];
	float average;
}stu[5];
int main(void)
{
	FILE *fpt;
	int i,ret;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/stud.txt","wb");
	if(fpt==NULL)
	{
		printf("�����洢��Ϣ���ļ���������\n");
		exit(0);
	}
	else
	{
		printf("�������������ѧ����ѧ�ţ�����������ѧ�Ƴɼ���ͬѧ������ENTER��������\n");
		for(i=0;i<5;i++)
		{
			scanf("%ld %s %f %f %f",&stu[i].num,stu[i].name,stu[i].score,stu[i].score+1,stu[i].score+2);
			stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3; 
			/*fprintf(fpt,"%ld %s %.2f %.2f %.2f %.2f",stu[i].num,stu[i].name,
			stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].average);
			 ����fprintf()��ԭ�����ض������뵽�ı��ļ��� */
			ret=fwrite(&stu[i],sizeof(struct student),1,fpt);  
			/*�Զ����Ƹ�ʽֱ��д�뵽�ļ��У�������ʽ��ֻ���Զ����Ƹ�ʽ��ȡ���������� */
			/*fputc('\n',fpt);  /*Ϊ�ı��ļ��������ӻ��з� */
		}
		if(ret!=1)
			printf("д�����ݵ��ļ�ʱ������\n");
		else
			printf("д�����ݳɹ�\n");
	}
	fclose(fpt);
	return 0;
}
