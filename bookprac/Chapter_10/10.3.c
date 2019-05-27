/* 10.3.c--字符小写变大写并保存到文件中 */ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char ch;
	FILE *fpt;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/test.txt","w+");
	if(fpt==NULL)
	{
		printf("创建保存数据文件出错！！！\n");
		exit(0);
	}
	else 
	{
		printf("请输入一个字符串，并以!结束输入：");
		scanf("%c",&ch);
		while(ch!='!')
		{
			fputc(toupper(ch),fpt);
			scanf("%c",&ch);
		}
		getchar();
	}
	fclose(fpt);
	return 0;
}
