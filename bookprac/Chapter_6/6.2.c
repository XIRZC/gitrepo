/* 6.2.c--选择排序法 */
#include<stdio.h>
int main()
{
	int array[10],i,j,temp1,temp2;
	printf("请输入十个数：");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		temp1=i;
        for(j=i+1;j<10;j++)
        {
  			if(array[temp1]>array[j])
       			temp1=j;  /* 利用双循环找出每个数的后面的数中最小的数的下标 */
        }
        temp2=array[temp1];  /* 然后只用将改位置的值与array[i]处的值交换 */ 
        array[temp1]=array[i];
        array[i]=temp2;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",array[i]);
  	}
  	getchar();
	getchar(); 
  	return 0;
}
