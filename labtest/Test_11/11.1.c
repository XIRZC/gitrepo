/* 11.1.c--指针变量和函数来顺序输出三个整数 */
#include<stdio.h>
void sort3(int *pt1,int *pt2,int *pt3);
void sort2(int *pt1,int *pt2);
int main(void)
{
	int num1,num2,num3;
	int *numpt1=&num1,*numpt2=&num2,*numpt3=&num3;
	printf("请输入三个整数：");
	scanf("%d %d %d",numpt1,numpt2,numpt3);
	sort3(numpt1,numpt2,numpt3);
	printf("大小顺序为：%d %d %d\n",*numpt1,*numpt2,*numpt3);
	return 0;
}
void sort3(int *pt1,int *pt2,int *pt3)
{					
	sort2(pt1,pt2);   
	/* 比较顺序一定，必须先得保证a指针对应值为最小，再保证
	b指针对应值比c指针对应值最小，以此类推 */
	sort2(pt1,pt3); 
	sort2(pt2,pt3); 
	return;
}
void sort2(int *pt1,int *pt2)
{
	int temp;
	if(*pt1>*pt2)
	{
		/* 交换的是指针变量所指向的变量的值 */
		temp=*pt1;
		*pt1=*pt2;
		*pt2=temp;
	}
	return;
}
