/* 8.15.c--ѧ���ɼ���ز��� */
#include<stdio.h>
float firstaver(int (*pt)[5]);
float studentaver(int (*pt)[5],int n);
void findprintinfo(int (*pt)[5]);
void isgreat(int (*pt)[5]); 
int main(void)
{
	int array[4][5]={86,87,93,89,90,91,96,95,94,98,78,82,86,90,56,56,58,89,76,54};
	/*1ȫ���ɼ���85���ϣ�2ƽ���ɼ���90�����ϣ�3������ 4������ */
	printf("��һ�ſγ�ƽ����Ϊ��%.2f\n",firstaver(array));
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
				printf("��%d��ѧ��������������������\n",i+1);
				printf("��ѧ����ȫ���γ̳ɼ�Ϊ��");
				for(k=0;k<5;k++) 
				{
					printf("%d ",pt[i][k]);
				}
				printf("\n��ѧ����ƽ���ɼ�Ϊ��%.2f\n",studentaver(pt,i));
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
			flag=1;   /* ����flag���жϸ�ѧ���Ƿ����㼴�ɼ��Ƿ�ﵽ��׼ */ 
			for(j=0;j<5;j++)
			{
				if(pt[i][j]<=85)
				{
					flag=0;  /* ��ƽ���ɼ�����90��ʱ������һ�ŵ���85����Ϊ������ */ 
				}
			}
		}
		if(flag)
			printf("��%d��ѧ��ƽ���ɼ���90�����ϻ����гɼ�Ϊ85������\n",i+1);
	}
	return;
}
