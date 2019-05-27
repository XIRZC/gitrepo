/* 8.3.c--整数处理 */
#include<stdio.h>
void input(int *intarray);
void process(int *intarray);
void print(int *intarray);
int main(void)
{
	int array[10];
	input(array);
	process(array);
	print(array);
	return 0;
} 
void input(int *intarray)
{
	int i;
	printf("请输入十个整数:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",intarray+i);
	}
	return;
}
void process(int *intarray)
{
	int maxv=*intarray,minv=*intarray;
	int i,temp,max,min;
	for(i=0;i<10;i++)
	{
		if(*(intarray+i)>maxv)
		{
			maxv=*(intarray+i);  
			/* 每次和最大值和最小值相比较，若大于或小于最大最小值则存下标，并更新最大最小值 */ 
			max=i;
		}
		if(*(intarray+i)<minv)
		{
			minv=*(intarray+i);
			min=i;
		}
	}
	temp=*(intarray+9);
	*(intarray+9)=*(intarray+max);   /* 交换位置 */ 
	*(intarray+max)=temp;
	temp=*intarray;
	*intarray=*(intarray+min);
	*(intarray+min)=temp;
	return;
}
void print(int *intarray)
{
	int i;
	printf("十个整数处理后结果为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",*(intarray+i));
	}
	return;
}
