/* 7.17.c--�ݹ鷨����ת��Ϊ�ַ��� */
#include<stdio.h>
void int2char(int n);
int main(void)
{
	int n;
	printf("������һ��������");
	scanf("%d",&n);
	printf("ת������ַ���Ϊ��");
	int2char(n);
	return 0; 
}
void int2char(int n)
{
	int k;
	k=n/10;
	if(k>0)  /* �ݹ���ֹ���� */ 
	{
		int2char(k);  
	}
	/* λ�ڵ��ƹ���֮������ᵹ��ִ�У����ʹ�������ɵ������������������������ */ 
	putchar(n%10+'0'); /* ͨ���������ַ��ķ�ʽ��ʵ�����ɸ����ֶ�Ӧ���ַ�*/ 
	return; 
}
