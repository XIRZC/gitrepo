/* 6.6.c--杨辉三角的输出 */
#include<stdio.h>
int main(void)
{
 	int yanghui[10][10]={{1},{1,1}},i,j; /* 为数组的第一行和第二行赋初值 */ 
 	for(i=2;i<10;i++)
 	{
	      yanghui[i][0]=yanghui[i][i]=1;  /* 使每一行两边值为1 */ 
  	      for(j=1;j<i;j++)
  	      {
		        yanghui[i][j]=yanghui[i-1][j]+yanghui[i-1][j-1];  /* 为数组中间的数赋值 */ 
		  }
	 }
	 for(i=0;i<10;i++)
	 {
  	      for(j=0;j<i+1;j++)
  	      {
		        printf("%d\t",yanghui[i][j]);
		  }
		  printf("\n");
	}
	getchar();
	return 0;
}
