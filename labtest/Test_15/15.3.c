/* 15.3.c--利用链表的成员变量的数据大小直接进行选择排序并交换值 */
#include<stdio.h>
#include<stdlib.h>
#include"sum.h"
/* 样例输入：
298 xiaogang woman 21 80
234 xiaohong man 23 98
249 xiaocan man 25 72
239 xiaoming man 23 97


int main(void)
{
	stu *head,*pt,*head0,*pt0;
	int count=0,i,j,k,n=0;
	float score[10],temp;
	pt=head=create();
	while(pt!=NULL)  将各个结点的成绩数据存储下来
	{
		score[count]=pt->score;
		count++;
		pt=pt->next;
	}
	for(i=0;i<count;i++)
	{
		k=i;
		for(j=i+1;j<count;j++)
		{
			if(score[k]>score[j])
			{
				k=j;
			}
		}
		if(k!=i)
		{
			temp=score[i];
			score[i]=score[k];
			score[k]=temp;
		}
	}  /* 对所得到的成绩数据进行选择排序
	for(i=0;i<count;i++)
	{
		pt=head;
		while(pt!=NULL)
		{
			if(score[i]==pt->score)
			{
				n++;
				if(n==1)
				{
					pt0=head0=pt;
				}
				else
				{
					pt0->next=pt;
					pt0=pt0->next;
				}
				break;
			}
			if(i==3)
				break;
			pt=pt->next;
		}
	}
	pt0->next=NULL;
	print(head0);
	return 0;
}
*/
int main(void)
{
	stu *head, *pt;
	float sum = 0, average;
	int count = 0;
	pt = head = create();
	sort(pt);
	while (pt != NULL)
	{
		sum += pt->score;
		pt = pt->next;
		count++;
	}
	pt = head;
	average = sum / count;
	printf("学生的平均分为：%.2f\n", average);
	count = 0;
	while (pt != NULL)
	{
		if (pt->score > average)
		{
			count++;
		}
		pt = pt->next;
	}
	printf("高于平均分的人数为：%d\n", count);
	print(head);
	system("pause");
	return 0;
}
