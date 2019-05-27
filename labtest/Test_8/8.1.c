/* 8.2.c--将一维数组放入二维数组中 */
#include<stdio.h> 
#include<math.h>
#include<time.h> 
int main(void)
{
	int i,j;
	int a[9],b[3][3]={0};
	srand((unsigned int)time(NULL));
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[3*i+j]=rand()%9+11;
			b[i][j]=a[3*i+j];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
