/* 8.5.c--圆桌退席 */
#include<stdio.h>
int main(void)
{
	int people[50],*pt=people;
	int n,count1,i,k,count2,count3=1;
	/* count1代表圆周上剩下的人数，count2代表每次循环一轮所退席的人数，count3代表每个轮到这个人所读的序数 */
	printf("请输入圆桌上的人数:");
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		*(pt+i)=i+1;
	}
	count1=n;
	count2=0;
	while(count1>1)  /* 当圆桌上剩下一个人时退出循环因为最后一个走的人序号不能置为0 */ 
	{
		count1=count1-count2;  /* 每过一轮后count1等于原圆桌上的人减去每轮走的人 */ 
		count2=0;
		for(i=0;i<n;i++)
		{
			if(*(pt+i)!=0)
			{
				if(count3%3==0)
				{
					*(pt+i)=0;
					count2++;
					count3++;   /* 无论轮到人的走不走，都要报序号加1 */ 
				}
				else
				{
					count3++;
				}
			}
				
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(pt+i)!=0)
		{
			printf("留下的那个人为原来的桌子上的%d号\n",i+1);
		}
	}
	return 0;
} 
