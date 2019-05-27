/* 8.14.c--数组倒序输出 */ 
#include<stdio.h>
void reverse(void);
int main(void)
{
	reverse();
	return 0; 
}
void reverse(void)
{
	int count=0,i,temp;
	int *array=(int*)calloc(50,sizeof(int));  /* 利用动态内存分配的方法来为要存的数分配空间 */ 
	printf("请输入一系列数，按q键离开输入：");
	while(scanf("%d",array+count))
		count++;
	for(i=0;i<count/2;i++)
	{
		temp=*(array+i);
		*(array+i)=*(array+count-i-1);
		*(array+count-i-1)=temp;
	}
	for(i=0;i<count;i++)
	{
		printf("%d ",*(array+i));
	}
	free((void*)array);
}
