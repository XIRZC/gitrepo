/* 4.2.c--��ʾ��ٵķ�ʽ */ 
#include<stdio.h>
#include<stdbool.h> /* ����stdbool.hͷ�ļ���Ӧ��bool�������ͣ���ֵ��0��1 */ 
int main(void)
{
	int a,b,c;
	bool x,y;
	a=2;b=3;c=4;
	x=a>b;
	y=c==4;
	printf("%d %d",x,y); 
	getchar();
	return 0;
	
}
/* �������0�ͷ�����ֵ��ҪΪ 1 ���ֱ��ʾ False �� True */ 
