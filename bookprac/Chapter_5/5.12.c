/* ���ӵ�һ��ժ�Ҹ��� */
#include<stdio.h>
int main(void)
{
	int last,i;
	last=1;
	for(i=1;i<10;i++)
	{
		last=(last+1)*2;
	}
	printf("��һ��ժ�ҵĸ���Ϊ��%d",last);
	return 0;
}
