/* 6.6.c--������ǵ���� */
#include<stdio.h>
int main(void)
{
 	int yanghui[10][10]={{1},{1,1}},i,j; /* Ϊ����ĵ�һ�к͵ڶ��и���ֵ */ 
 	for(i=2;i<10;i++)
 	{
	      yanghui[i][0]=yanghui[i][i]=1;  /* ʹÿһ������ֵΪ1 */ 
  	      for(j=1;j<i;j++)
  	      {
		        yanghui[i][j]=yanghui[i-1][j]+yanghui[i-1][j-1];  /* Ϊ�����м������ֵ */ 
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
