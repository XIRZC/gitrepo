/* 12.2.c--���������нϴ����ĵ�ַ */
#include<stdio.h>
int *sort(int *pt1,int *pt2);
int main(void)
{
	int a,b;
	int *pt1=&a,*pt2=&b,*pt3;
	printf("��������������");
	scanf("%d %d",pt1,pt2);
	pt3=sort(pt1,pt2);
	printf(
	"a�ĵ�ַΪ��%p\n"
	"b�ĵ�ַΪ��%p\n" 
	"�ϴ�����ĵ�ַΪ��%p",pt1,pt2,pt3);
	return 0;
}
int *sort(int *pt1,int *pt2)
{
	return (*pt1>*pt2)?pt1:pt2;
}
