#include<stdio.h>
int main(void)
{
	char ch1='C',ch2='h',ch3='i',ch4='n',ch5='a'; /*��ʼ��������*/ 
	
	printf("ԭ�ַ���Ϊ��%s\n�任���ַ���Ϊ��","China");
	ch1+=4; putchar(ch1);
	ch2+=4; putchar(ch2);
	ch3+=4; putchar(ch3);
	ch4+=4; putchar(ch4);
	ch5+=4; putchar(ch5);
	printf("\n%c%c%c%c%c",ch1,ch2,ch3,ch4,ch5);
	getchar();
	
	return 0;
 } 
