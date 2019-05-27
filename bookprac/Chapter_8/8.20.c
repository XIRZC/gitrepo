/* 8.20.c--双重指针对5个字符串进行排序 */
#include<stdio.h>
#include<stdlib.h>
#define N 5 
int main(void)
{
	
	char *charray[N];
	char *temp,**pt=charray;
	char k;
	int i,j;
	printf("请输入%d个字符串，以ENTER键隔开：\n",N);
	for(i=0;i<N;i++)
	{
		*(pt+i)=(char *)calloc(N,sizeof(char));  /* 用动态内存分配的方式为指针变量赋初值，以便能读取一个字符串 */
		gets(*(pt+i));
	}
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
	printf("排序后的字符串为：\n");
	for(i=0;i<N;i++)
	{
		puts(*(pt+i));
	}
	return 0;
}
