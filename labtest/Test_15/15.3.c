/* 15.3.c--��������ĳ�Ա���������ݴ�Сֱ�ӽ���ѡ�����򲢽���ֵ */
#include<stdio.h>
#include<stdlib.h>
#include"sum.h"
/* �������룺
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
	while(pt!=NULL)  ���������ĳɼ����ݴ洢����
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
	}  /* �����õ��ĳɼ����ݽ���ѡ������
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
	printf("ѧ����ƽ����Ϊ��%.2f\n", average);
	count = 0;
	while (pt != NULL)
	{
		if (pt->score > average)
		{
			count++;
		}
		pt = pt->next;
	}
	printf("����ƽ���ֵ�����Ϊ��%d\n", count);
	print(head);
	system("pause");
	return 0;
}
