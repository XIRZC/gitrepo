/* 11.3.c--ͳ���Ӵ����ַ����г��ֵĴ��� */
#include<stdio.h>
int number(char mcharray[],char zchar);
int main(void)
{
	char mcharray[20],zchar;
	printf("������һ���ַ�����");
	gets(mcharray);
	printf("����������ͳ�ƴ������Ӵ����ַ�,��CTRL+C�뿪���룺");
	while(scanf("%c",&zchar))
	{
		printf("���Ӵ����ַ����г��ֵĴ���Ϊ��%d\n",number(mcharray,zchar));
		getchar();  /* ��ȡ���������ڵ�\n������scnaf()������ŵ��������ڣ����¶�ȡ���� */
	}
	return 0;
}
int number(char *mcharray,char zchar)
{
	int mlen=strlen(mcharray);
	int count=0,i;
	for(i=0;i<mlen;i++)
	{
		if(mcharray[i]==zchar)
		{
			count++;
		}
	}
	return count;
}
