/* 12.1.c--ѧ��ƽ���ֺͲ�����ѧ���ҳ���ͳ���Ŵ� */
#include<stdio.h>
#define ROWS 3
#define COLS 4
float average(float (*array)[COLS],int n); 
int find_count(float (*array)[COLS],int n);
int main(void)
{
	int i;
	float score[3][4]={{61,62,84,62},{46,86,67,96},{55,56,57,85}};
	for(i=0;i<ROWS;i++)
	{
		printf("��%d��ѧ����ƽ���ɼ�Ϊ��%.2f\n",i+1,average(score,i));
	}
	for(i=0;i<ROWS;i++)
	{
		if(find_count(score,i))
			printf("��%d��ѧ���ɼ����в�������%d��ѧ�Ʋ�����\n",i+1,find_count(score,i));
	} 
	return 0;
}
float average(float (*array)[COLS],int n)
{
	int j,sum=0;
	for(j=0;j<COLS;j++)
	{
		sum+=*(*(array+n)+j);
		
	}
	return (float)sum/4;
}
int find_count(float (*array)[COLS],int n)
{
	int j,count=0;
	for(j=0;j<COLS;j++)
	{
		if(*(*(array+n)+j)<60)
		{
			count++;
		}
	}
	return count;
}
