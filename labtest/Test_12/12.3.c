/* 12.3.c--五个字符串中最大字符串的输出 */
#include<stdio.h>
#include<string.h>
int main(void)
{
	char charray[5][10];
	int i,max;
	printf("请输入五个字符串，以ENTER键隔开：");
	for(i=0;i<5;i++)
	{
		gets(charray[i]);
	}
	max=0;
	for(i=1;i<5;i++)
	{
		if(strcmp(charray[i],charray[max])>0)
			max=i;
	} 
	printf("最大的字符串为：\n");
	for(i=0;i<5;i++)
	{
		if(strcmp(charray[i],charray[max])==0)  
		/* 遍历5个字符串，找出与最大字符串相同的字符串并输出，来输出几个相同最大的字符串 */
		{
			printf("第%d个：",i+1);
			puts(charray[i]);
		}
	}
	return 0;
}
