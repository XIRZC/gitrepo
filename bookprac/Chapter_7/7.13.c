/* 7.13.c--�ݹ鷽����n�����õ¶���ʽ��ֵ */
#include<stdio.h>
int P(int x,int n);  /* �������� */ 
int main(void)
{
	int x,n;
	printf("��ֱ�����������x��n,��q�뿪��");
	while(scanf("%d %d",&x,&n))  /* ����scanf()�ķ���ֵ������ѭ�����˳� */ 
		printf("n�����õ¶���ʽ��ֵΪ��%d\n",P(x,n));
	return 0;
}
int P(int x,int n)
{
	if(n==0)  /* �ݹ���ֹ���� */ 
		return 1;
	else if(n==1)  /* �ݹ���ֹ���� */ 
		return x;
	else 
		return ((2*n-1)*x-P(x,n-1)-(n-1)*P(x,n-2))/n;  /* ���ƹ��� */ 
}
