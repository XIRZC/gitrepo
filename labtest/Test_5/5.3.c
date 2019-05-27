#include<stdio.h>
int main(void)
{
	char ch;
	int ch_num,num_num,else_num,count;
	ch_num=num_num=else_num=0;
	count=1;
	printf("请输入30个字符");
	while(count<=30){
		ch=getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
			ch_num++;
		}
		else if(ch>='0'&&ch<='9'){
			num_num++;
		}
		else{
			else_num++;
		}
		count++;
	}
	printf("数字个数为：%d\n字母个数为：%d\n其他字符个数为：%d",
	ch_num,num_num,else_num);
	return 0;
}
