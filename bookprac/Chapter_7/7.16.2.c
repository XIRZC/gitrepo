/* 7.16.2.c--ʮ��������ת��Ϊʮ������-�����ַ����� */ 
#include<stdio.h>
#include<string.h>
#include<ctype.h>  /* �ַ����Ժ�����ͷ�ļ� */
void hex2decimal(void);
int main(void)
{
	hex2decimal();
	getchar();
	getchar(); 
	return 0;	
} 
void hex2decimal(void)
{
	char hexch[10];
	int i,mi;
	int decimal=0;
	printf("������һ��ʮ����������");
	gets(hexch);
	mi=1;
	for(i=strlen(hexch)-1;i>=0;i--)  /* ����ʮ����������ͬλ�Ĳ�ͬ������Բ�ͬ�ķ�ʽ���ݼӺ� */ 
	{     /* �����ַ�����ĵ�һλΪ16������ݣ���˴����һλ��ʼ */ 
		if(isdigit(hexch[i]))
		{
			decimal+=(hexch[i]-'0')*mi;
			mi*=16;
		}
		else if(hexch[i]>='a'&&hexch[i]<='f')
		{
			decimal+=(hexch[i]-'a'+10)*mi;
			mi*=16;
		}
		else if(hexch[i]>='A'&&hexch[i]<='F')
		{
			decimal+=(hexch[i]-'A'+10)*mi;
			mi*=16;     /* ÿ���ж�һ�κ��ʹ�����ٳ�16 */ 
		}
		else 
		{
			printf("���ݴ��󣡣�\n");
			break;
		}
	}
	printf("ת�����ʮ������Ϊ:%d",decimal);
	return;
}
