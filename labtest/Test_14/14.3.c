/* 14.3.c--����ѧ����Ϣ��¼�ļ�����ȡ�ļ�����ѧ�������Ϣ */
#include<stdio.h>
#include<stdlib.h>
struct student{
	long num;
	char name[10];
	float score;
	long telenum;
}stu[10];
int find(long num,struct student *pt,int count);
/* �������룺
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
	/* ֻ��r���Զ�ȡ����,��Ϊw��aʱ���ᵼ�¶�ȡʧ�ܣ�w�������ԭ�ļ����� */
	if(fpt==NULL)
	{
		printf("�ļ�����ʧ�ܣ�����\n");
		exit(0);
	}
	printf("����������ѧ����ȫ����Ϣ����ѧ�ţ��������ܷ֣���ϵ�绰������0�뿪���룺");
	scanf("%ld %s %f %ld",&stu[count].num,stu[count].name,&stu[count].score,&stu[count].telenum); 
	while(stu[count].num!=0)
	{
		fwrite(&stu[count],sizeof(struct student),1,fpt);
		count++;
		scanf("%ld %s %f %ld",&stu[count].num,stu[count].name,&stu[count].score,&stu[count].telenum); 
	}
	printf("ѧ����Ϣ��¼��ϣ�\n");
	printf("������Ҫ��ѯ��ѧ����ѧ��,��q���뿪���룺");
	while(scanf("%d",&num))
	{ 
		if(find(num,stu,count))     ;
		else printf("δ��¼�����ѧ������Ϣ��˲��Ҳ��������������룡����\n");
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
			printf("ѧ�ţ�%-10ld������%-20s�ܷ�%-10.2f��ϵ�绰��%-10ld\n",
			pt[i].num,pt[i].name,pt[i].score,pt[i].telenum); 
			flag=1;  /* ��Ϊ���ҵ���ѧ����flag��Ϊ0�������Ϊ1 */
		}
	}
	return flag;
} 
