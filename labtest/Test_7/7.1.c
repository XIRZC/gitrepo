#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main(void)
{
	int i,j;
	int randint[15];
	srand((unsigned int)time(NULL));/* �����������rand���������ı��������ķ�ʽ */
	printf("��ENTER�����������������CTRL+C�˳�����ѭ����\n");
	while(1)
	{
		for(i=0;i<15;i++)
		{
			randint[i]=rand()%100+1;/* 100�ȴ������100����Ҳ�������ķ�ΧΪ0-99������ӵ���Ϊʹ�÷�Χ�ڵ������յ�ֱ��1 */ 
		}
		for(i=0;i<15;i++)
		{
			printf("%d\t",randint[i]);
			if((i+1)%5==0)
				printf("\n");
		} 
		printf("\n");
		getchar();
	}
	return 0;
 } 
