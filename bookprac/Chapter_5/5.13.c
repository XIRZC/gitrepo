/* 5.13.c--�õ�������һ������ƽ���� */
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,x1,x2;
	printf("������Ҫ��ƽ����������");
	scanf("%f",&a);
	x1=a/2;  /* ��x1��һ����ֵ */
	x2=(x1+a/x1)/2;  
	while(fabs(x1-x2)>=1.0e-5)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	printf("%.0f ��ƽ����ֵΪ��%.4f",a,x2);
	return 0;
}
