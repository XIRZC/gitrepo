/* 10.2.c--������ɸ����������� */
#include<stdio.h>
#define max2(x,y) ((x)>(y)?(x):(y))
#define max3(x,y,z) max2(z,max2(x,y))
int main(void)
{
	int a,b,c;
	printf("��ֱ�����a,b,c����������\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("a,b�нϴ������ֵΪ��%d\n",max2(a,b));
	printf("a,b,c����������ֵΪ��%d\n",max3(a,b,c));
	printf("a-2,b+2����������ֵΪ��%d\n",max2(a-2,b+2));
	printf("a-2,b,c+2����������ֵΪ��%d\n",max3(a-2,b,c+2));
	return 0;
} 
