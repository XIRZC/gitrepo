/* �ҳ�1000֮�ڵ��������� */
#include<stdio.h>
int main(void) 
{
	int yinzi[20];
	int i,j,k,sum,count;
	for(i=2;i<1001;i++) /* ���ѭ��ʹ����2������1000 */
	{
		sum=0;  /* ÿ����ѭ�������궼Ҫ���¼Ӻͺͼ���������ֵ */ 
		count=0;
		for(j=1;j<i;j++)  /* �ڲ�ѭ��������䱾����������ӣ�����Ӽ��� */ 
		{ 
			if(i%j==0) 
			{
				yinzi[count]=j;
				sum+=j; 
				count++;
			}
		}
		if(sum==i)
		{
			printf("%d its factors are : ",i);
			printf("%d",yinzi[0]);
			for(k=1;k<count;k++)  /* ��������� */
			{
				printf(",%d",yinzi[k]);
			}
			printf("\n"); 	
		}		
	}
	getchar(); 
	return 0; 
}
