/*  5.3.c--�������������Լ������С������  */
#include<stdio.h>
int main(void)
{
	int m,n,r,yue,bei,temp;
	printf("��������������");
	scanf("%d %d",&m,&n);
	yue=m;
	temp=n;
	while(temp!=0)  /* շת������������Լ�� */ 
	{
		r=yue%temp;
		yue=temp;
		temp=r;
	}
	bei=m*n/yue;  /* ��С�������������Լ�����������˻� */
	printf("�����������Լ��Ϊ��%d\n"
	"����������С������Ϊ��%d",yue,bei);
	getchar();
	getchar();
	return 0;
}
