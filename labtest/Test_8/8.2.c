/* 8.2.c--�ҳ������е����ֵ�����к��� */
#include<stdio.h>
#include<math.h>
#include<time.h> 
int main(void)
{
	int juzhen[4][5];
	int i,j,max,row,col;
	max=0;
	srand((unsigned)time(NULL));  /* ������������� */
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			juzhen[i][j]=rand()%20*11+i+j;/* ������ɢ�͵������ */
			if(max<juzhen[i][j])
			{
				max=juzhen[i][j];
				row=i;
				col=j;
			}
				
		}
	}
	printf("�����ɵľ���Ϊ��\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%6d  ",juzhen[i][j]);
		}
		printf("\n");
	}
	printf("���ֵΪ��%d����Ӧ����Ϊ��%d,��Ӧ����Ϊ��%d",max,row+1,col+1);
	return 0; 
}
