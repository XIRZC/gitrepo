#include<stdio.h>
int main(void)
{
	int n,i,j,answer,sum;
	answer=1;
	/*sum=1;
	for(n=2;n<11;n++){
		answer*=n;
		sum+=answer;
		
	}
	printf("��ѭ����Ϊ��%d\n",sum);
	sum=0;*/
	for(i=1;i<11;i++)
	{
		answer=1;
		for(j=1;j<i+1;j++)
		{
			answer*=j;
		}
		sum+=answer;
	 } 
	printf("˫ѭ����Ϊ��%d",sum);
	return 0;
}
