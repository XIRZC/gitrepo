/* 7.2.c--成绩操作 */
#include<stdio.h>
#include<math.h>
#include<time.h>
int main(void)
{
	int n,i,max,min,sum,average,count;
	sum=max=0;
	min=100;
	printf("请输入学生个数n:");
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
	printf("最高分为：%d最低分为：%d\n",max,min);
	for(i=0;i<n;i++)
	{
		if(score[i]>=average)
			count++;
	}
	printf("高于平均分的人数为：%d",count);
	return 0;
 } 
