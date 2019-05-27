/* 5.17.c--队员分类 */
#include<stdio.h>
int main(void)
{
	char i,j,k;
	printf("三队赛手的名单为：\n"); 
	/* 设i为A对战的选手,j为B对战的选手，k为C对战的选手*/
	for(i='X';i<='Z';i++) 
	{
		for(j='X';j<='Z';j++)
		{
			if(i!=j)  /* 对战A和B的选手不能一样 */ 
			{
				for(k='X';k<='Z';k++)
				{
					if(i!=k&&j!=k) /* 对战A和C以及对战C和B的选手不能一致 */ 
					{
						if(i!='X'&&k!='X'&&k!='Z')
						/* A不和X比，C不和X、Y比 */ 
							
							printf("A  %c\nB  %c\nC  %c\n",i,j,k);
					}
				}
			}
		}
	}
	getchar(); 
	return 0;
}
