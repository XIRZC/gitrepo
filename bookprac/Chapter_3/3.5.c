#include<stdio.h>
int main(void)
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b); /*�����ʽΪ: a=1b=7*/
	scanf("%f%e",&x,&y); /*�����ʽΪ��8.50.7182e+2*/  
	/*getchar(); ��ȡ�������ڵĻ����ַ���հף����������scanf()������
	              ��һ��%cת��˵�����ȡ���з�*/
	/*Ҳ����ֱ�ӷ���һ�������룬������x,y��������Aaʱ��Ҫ�ӿհ�*/ 
	scanf("%c%c",&c1,&c2); /*�����ʽΪ��Aa,ԭ��scanf()������ʹ������ת��˵��
	��ȡʱ���Զ������հף�����%cת��˵��ʱ���ᣬ��������ַ��䲻���пո�*/
	/*����getchar()ʱ�����ʽΪ��a=1b=7 8.5 0.7182e+2Aa*/ 
	printf("%d %d\n",a,b);
	printf("%.2f %.2f\n",x,y);
	printf("%c %c",c1,c2);
	getchar();
	getchar();
	return 0;
 } 