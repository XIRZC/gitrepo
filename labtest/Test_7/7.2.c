/* 7.2.c--�ɼ����� */
#include<stdio.h>
#include<math.h>
#include<time.h>
int main(void)
{
	int n,i,max,min,sum,average,count;
	sum=max=0;
	min=100;
	printf("������ѧ������n:");
	scanf("%d",&n);
	int score[n];
	srand((unsigned int)time(NULL));
	for(i=0;i<n;i++)
	{
		score[i]=rand()%50+51;
		if(score[i]>max)
			max=score[i];
		if(score[i]<min)
			min=score[i];
		sum+=score[i];
	}
	average=(float)sum/n;
	printf("��߷�Ϊ��%d��ͷ�Ϊ��%d\n",max,min);
	for(i=0;i<n;i++)
	{
		if(score[i]>=average)
			count++;
	}
	printf("����ƽ���ֵ�����Ϊ��%d",count);
	return 0;
 } 
