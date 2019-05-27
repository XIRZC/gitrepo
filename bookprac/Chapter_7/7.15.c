/* 7.15.c--职工函数 */
#include<stdio.h>
#include<string.h>
void readinfo(char name[][10],int number[]);
void sort(char name[][10],int number[]);
int find(int key);
static int number[10];
int main(void) 
{
	char name[10][10];
	int key;
	readinfo(name,number);
	sort(name,number);
	printf("请输入你要查找的职工号，按q键离开:");
	while(scanf("%d",&key))
	{
		if(find(key))
			printf("该职工号对应的职工名字为：%s\n",name[find(key)]);
		else
			printf("无该职工\n");
	}
	return 0;
}
void readinfo(char name[][10],int number[])
{
	int i;
	printf("请依次输入10个员工的名字以及职工号,两者以enter键分隔开：\n");
	for(i=0;i<10;i++)
	{
		gets(name[i]);
		scanf("%d",number+i);
		getchar();
	}
	return;
}
void sort(char name[][10],int number[])  /* 定义排序函数 */ 
{
	int i,temp1,k,j;
	char temp2[10];
	for(i=0;i<10;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		{
			if(number[k]>number[j])
				k=j;
		}
		if(k!=i)
		{
			temp1=number[i];  /* 选择排序，并通过strcpy()函数来交换字符串的值 */ 
			number[i]=number[k];
			number[k]=temp1;
			strcpy(temp2,name[i]);
			strcpy(name[i],name[k]);
			strcpy(name[k],temp2);
		}
	}
	return;
}
int find(int key)  /* 定义二分查找函数 */
{
	int mid,right=9,left=0;
	while(1)
	{
		mid=(left+right)/2;
		if(left<=right)
		{
			if(number[mid]==key)
				return mid;
			else if(number[mid]<key)
				left=mid+1;
			else
				right=mid-1;
		}
		else
			return 0;
	}
}
/*
输入示例:
xiaoming
12
xiaohong 
30
xioagang 
45
xiaocai 
2
xiaozi 
80
xiaozhen 
51
xiaoku 
41
xiaoshu 
89
xiaowu 
70
xiaoke 
90
*/

