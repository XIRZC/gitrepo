#include<stdio.h>
int main (void)
{
	int c1,c2;
	
	c1=getchar();
	getchar();  
	/*�ӻ������ڶ�ȡ��һ�ζ�ȡ���µĻ��з���
	��ʹ��һ��getchar()���Գɹ���ȡ�ַ�*/ 
	c2=getchar();
	printf("����Ķ�ȡ���Ϊ��");
	putchar(c1);
	putchar(' '); 
	putchar(c2);
	printf("\n%c %c",c1,c2);
	getchar();
	getchar();
	/*˼����
	 (1):����Ϊ���߽Կ�,��Ϊchar��������int������ʽ�洢����putchar()����
	     �ɽ���int���͵Ĳ������������Ӧ���ַ��� 
	 (2):��printf()�����еĸ�ʽ���ַ����е�%dת��˵����������ַ���Ӧ��ASCII�� �� 
	 (3):�������κ�����¶����໥���� ,����printf()�������ʱ�ڶ���Ϊintʱ
	     �㲻����%cת��˵���������Ӧ���ַ� �� 
	 */
	return 0;
 } 
