#include<stdio.h>
#include<math.h> /*����math.hͷ�ļ��е�log10()����*/
int main (void)
{
	int d=300000,p=6000; /*��ʼ�������� */
	float r=0.01,m;
	
	m=log10(p/(p-d*r))/log10(1+r);
	printf("%.2f",m);
	getchar(); 
	return 0;
} 
