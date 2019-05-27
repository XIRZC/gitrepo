/* 6.9.c--递归函数以及循环二分查找 */
#include<stdio.h>
int find(int array[],int key,int right,int left);
void read(int array[]); /* 读取函数声明 */ 
void sort(int array[]); /* 倒排序函数声明 */
int main(void)
{
 	int key,fault,array[15];
 	int i;
 	read(array);
	sort(array);
 	printf("倒排序后数组为："); 
 	for(i=0;i<15;i++)
		printf("%d ",array[i]);
 	printf("\n请输入要查找的数：");
	scanf("%d",&key); 
 	fault=find(array,key,0,14);  /* 利用查找函数的返回值判断是否能找到这个数 */ 
 	if(fault>=0)
 		printf("该元素索引为：array[%d]",fault);
    else
    	printf("该数组中无该数据");  /* 数据检验 */ 
    	
    	
    /* 循环二分查找 */
    
    
	/* int key,array[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1},right=0,mid,left=14;
	printf("请输入要查找的数：");
	scanf("%d",&key);
	while(1)
	{
		if(right<=left)
		{
			mid=(right+left)/2;
			if(array[mid]<key)
			{
				left=mid-1;
			}
			else if(array[mid]==key)
			{
				printf("数组元素对应为array[%d]",mid);
				break;  若找到则退出死循环 
			} 
			else {
				right=mid+1;
			}
		}
		else
		{
			printf("该数组中无该项。");	 数据检验 
			break;  若未找到也退出死循环 
		}	
	}*/
	getchar();
	getchar();
    return 0;
}
void read(int array[])/* 封装一个读取数组的函数 */
{
	int i;
	printf("请依次输入十五个数；");
	for(i=0;i<15;i++)
	{
		scanf("%d",&array[i]);
	}
	return;
}
int find(int array[],int key,int right,int left)/* 定义一个查找函数用来递归查找*/ 
{
 	int mid;
 	mid=(right+left)/2;  /* 每次查找区间的中间值 */ 
 	if(right<=left)  /* 要保证是在right<=left的情况下找到该数 */ 
 	{
	 	if(key>array[mid]) 
	   	    find(array,key,right,mid-1);  /* 位于右半区间，因此改变查找区间为：right,mid-1 */ 
		else if(key==array[mid])  /* 递归结束条件 */
		 	return mid;
		else 
	  	 	find(array,key,mid+1,left);  /* 该数位于左半区间，因此改变查找区间为：mid+1,left */
	}
	else
	  	return -1;  /* 找不到时，返回值为-1 */ 
}
void sort(int array[])/* 使用冒泡排序封装一个数组排序函数 */ 
{
	int i,j,temp;
	for(i=14;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	return;
}
