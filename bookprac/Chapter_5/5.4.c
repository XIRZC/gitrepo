/* 统计字符串中英文字母、空格、数字、和其他字符的个数 */
#include<stdio.h>
int main(void)
{
	char ch;
	int alpha_num,digit_num,space_num,punct_num;
	alpha_num=digit_num=space_num=punct_num=0;
	printf("请输入一行字符串,按#离开输入\n");
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
	printf("英文字母个数为：%d\n"
	"数字个数为：%d\n"
	"空格个数为：%d\n"
	"其他字符个数为：%d\n",
	alpha_num,digit_num,space_num,punct_num);
	getchar();
	getchar(); 
	return 0;
 } 
