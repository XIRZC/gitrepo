/* ͳ���ַ�����Ӣ����ĸ���ո����֡��������ַ��ĸ��� */
#include<stdio.h>
int main(void)
{
	char ch;
	int alpha_num,digit_num,space_num,punct_num;
	alpha_num=digit_num=space_num=punct_num=0;
	printf("������һ���ַ���,��#�뿪����\n");
	while((ch=getchar())!='#')
	{
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
			alpha_num++;
		else if(ch>='0'&&ch<='9')
			digit_num++;
		else if(ch==' ')
			space_num++;
		else 
			punct_num++;
	}
	printf("Ӣ����ĸ����Ϊ��%d\n"
	"���ָ���Ϊ��%d\n"
	"�ո����Ϊ��%d\n"
	"�����ַ�����Ϊ��%d\n",
	alpha_num,digit_num,space_num,punct_num);
	getchar();
	getchar(); 
	return 0;
 } 
