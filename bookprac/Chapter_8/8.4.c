/* 8.4.c--整数后移 */
#include<stdio.h>
void back_turn(int n,int *array,int m);
int main(void)
{
	int array[50];
	int m,count,i;
	printf("请输入各整数,按q键完成输入：");
	count=0;
	while(scanf("%d",array+count))  /* 利用scanf()控制该循环来使用户能自定义输入n个数 */ 
	{
		count++;
	}
	getchar();     
	/* 若不加getchar()读取'q'，则会使下面的scanf()不能正常读取，因为scanf()在读取到非正常数据时会将该字符仍放在缓冲区内  */ 
	printf("请输入要后移的位数：");
	scanf("%d",&m); 
	back_turn(count,array,m);
	printf("后移后的各整数为：\n");
	for(m=0;m<count;m++)
	{
		printf("%d ",*(array+m));
	}
	return 0;
}
void back_turn(int n,int *farray,int m)
{
	int i,j,k;
	m=m%n;  /* 当n大于m时，则取余使m为只走一轮而小于n的数 */ 
	for(i=n-m-1;i>=0;i--)
	{
		for(j=i;j<i+m;j++)
		{
			k=farray[j];
			farray[j]=farray[j+1];    /* 直接交把n-m-1到0下标的数与后面三个数相交换 */ 
			farray[j+1]=k;
		}
	}
	return;
}
