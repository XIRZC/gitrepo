/* 15.2.0.c--test.c--*/
#include<stdio.h>
#include"sum.h"
#include<stdlib.h>
int main(void)
{
	struct student *head=NULL,*pt=NULL,*head1=NULL,*head2=NULL,*pt1=NULL,*pt2=NULL;
	int n1=0,n2=0,i;
	head=create();
	pt=head;
	while(pt!=NULL)  /* 根据成绩来重新连接各节点并分成两类 */
	{
		if(pt->score>80)
		{
			n1++;
			if(n1==1)
				head1=pt1=pt;
			else
			{
				pt1->next=pt;
				pt1=pt1->next;
			}
		}
		else 
		{
			n2++;
			if(n2==1)
				head2=pt2=pt;
			else
			{
				pt2->next=pt;
				pt2=pt2->next;
			}
		}
		pt=pt->next;
	}
	pt1->next=NULL;
	pt2->next=NULL;
	print(head1);
	print(head2);
	system("pause");
	return 0;
}


