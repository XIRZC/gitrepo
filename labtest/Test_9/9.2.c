/* 9.2.c--�������η���f(x)=sin(2x)+x�Ļ���ֵ�ĺ��� */
#include<stdio.h>
#include<math.h>
float jifen(float a,float b,int n);
int main(void)
{
	int n;
	float a,b;
	printf("���������������a,b�ͻ�������Ļ��ָ���n,��q�뿪:");
	while(scanf("%f %f %d",&a,&b,&n)==3)
		printf("n=10���Ļ���ֵΪ��%.3f\n",jifen(a,b,n)); 
	getchar();
	getchar();
	return 0;
 } 
float jifen(float a,float b,int n)
{
	float sum=0,x1,x2;
	int i;
	for(i=0;i<n;i++)
	{
		x1=a+(b-a)/n*i;
		x2=a+(b-a)/n*(i+1);
		sum+=(sin(2*x1)+x1+sin(2*x2)+x2)*(b-a)/n/2;
	}
	return sum;
	
}
