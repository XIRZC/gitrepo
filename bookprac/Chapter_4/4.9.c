/* 4.9.c--����ĳ����λ���͸�λ��������� */ 
#include<stdio.h>
int main(void)
{
	int x,i,reverse,t;
	printf("������x��ֵ��");
	scanf("%d",&x);
	reverse=0;
	if(x>=10000) 
		printf("λ������5λ������������\n");
	else
	{
		for(i=0;x>0;i++,x/=10)
		{
			reverse=reverse*10+x%10;
		}
		printf("��%dλ��\n",i);
		t=reverse;
		for(i=1;reverse>0;i++,reverse/=10)
		{
			printf("��%dλ����Ϊ��%d\n",i,reverse%10);
		}
		printf("���������Ϊ��%d",t);
	}
	getchar();
	getchar();
	return 0; 
	
}
