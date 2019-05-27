/* 8.12.c--指针数组对十个不等长的字符串排序 */
#include<stdio.h>
#include<stdlib.h>
#define N 10
void strsort(char **pt); /* 传入一个指向指针的指针来得到该指针数组的相关值 */ 
int main(void)
{
	
	char *charray[N];
	int i;
	printf("请输入%d个字符串，以ENTER键隔开：\n",N);
	for(i=0;i<N;i++)
	{
		charray[i]=(char *)calloc(N,sizeof(char));  /* 用动态内存分配的方式为指针变量赋初值，以便能读取一个字符串 */
		gets(charray[i]);
	}
	strsort(charray);
	printf("排序后的字符串为：\n");
	for(i=0;i<N;i++)
	{
		puts(charray[i]);
	}
	return 0;
}
void strsort(char **pt)
{
	int i,j;
	char *temp;
	char k;
	for(i=0;i<N;i++) /* 利用选择排序来对字符串排序 */ 
	{
		k=i;
		for(j=i+1;j<N;j++)
		{
			if(strcmp(*(pt+k),*(pt+j))>0) /* 利用strcmp（）函数来判断指针数组中的各指针变量指向的字符串的大小 */ 
			{
				k=j;
			}
		}
		if(k!=i)
		{ 
			temp=*(pt+k);      /* 交换时是交换指向的字符串，即交换指针变量所存的地址 */ 
			*(pt+k)=*(pt+i);
			*(pt+i)=temp;
		}
	}
	return;
}
