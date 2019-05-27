/* 11.3.c--统计子串在字符串中出现的次数 */
#include<stdio.h>
int number(char mcharray[],char zchar);
int main(void)
{
	char mcharray[20],zchar;
	printf("请输入一个字符串：");
	gets(mcharray);
	printf("请输入你想统计次数的子串即字符,按CTRL+C离开输入：");
	while(scanf("%c",&zchar))
	{
		printf("该子串在字符串中出现的次数为：%d\n",number(mcharray,zchar));
		getchar();  /* 读取掉缓冲区内的\n，否则scnaf()会把它放到缓冲区内，导致读取出错 */
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
