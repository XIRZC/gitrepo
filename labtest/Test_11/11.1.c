/* 11.1.c--ָ������ͺ�����˳������������� */
#include<stdio.h>
void sort3(int *pt1,int *pt2,int *pt3);
void sort2(int *pt1,int *pt2);
int main(void)
{
	int num1,num2,num3;
	int *numpt1=&num1,*numpt2=&num2,*numpt3=&num3;
	printf("����������������");
	scanf("%d %d %d",numpt1,numpt2,numpt3);
	sort3(numpt1,numpt2,numpt3);
	printf("��С˳��Ϊ��%d %d %d\n",*numpt1,*numpt2,*numpt3);
	return 0;
}
void sort3(int *pt1,int *pt2,int *pt3)
{					
	sort2(pt1,pt2);   
	/* �Ƚ�˳��һ���������ȵñ�֤aָ���ӦֵΪ��С���ٱ�֤
	bָ���Ӧֵ��cָ���Ӧֵ��С���Դ����� */
	sort2(pt1,pt3); 
	sort2(pt2,pt3); 
	return;
}
void sort2(int *pt1,int *pt2)
{
	int temp;
	if(*pt1>*pt2)
	{
		/* ��������ָ�������ָ��ı�����ֵ */
		temp=*pt1;
		*pt1=*pt2;
		*pt2=temp;
	}
	return;
}
