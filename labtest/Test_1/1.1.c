#include<stdio.h>
int main (void)
{
	int a,b;
	printf("��������������");
	scanf("%d %d",&a,&b);
	printf("�������ĺ�Ϊ��%d\n"
		"�������Ĳ�Ϊ��%d\n"
		"�������Ļ�Ϊ��%d\n"
		"����������Ϊ��%d",
		a+b,a-b,a*b,a/b);
	getchar(); 
	getchar(); 
	return 0;
}
