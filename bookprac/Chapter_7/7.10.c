/* 7.10.c--输出字符串中的最长单词 -4个状态的状态机 */ 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void printlong(char charray[]);
int main(void)
{
	char charray[50];
	printf("请按CTRL+C来退出无限循环\n");
	while (1)
		printlong(charray);
	return 0;
}
void printlong(char charray[])
{
	int state=0,number[20]={0},max=0,order=0; /* 字符串所处状态，0为初始状态，1为单词状态，2为空格状态，3为其他字符状态 */
	int i,temp;    /* num为一个单词的长度即字符个数，order为单词的序数即第几个，max为最大的单词的长度 */
	char chtemp[20][20];
	printf("请输入一个字符串:");
	gets(charray);
	charray[strlen(charray)]=' ';  
	/* 若不在所输入的字符串最后加上空格，那么如果输入字符串后无空格时会导致最后一个单词未参与比较长度就退出for循环了 */ 
	for(i=0;i<strlen(charray);i++)
	{
		switch(state)
		{
			case 0:
				if(isspace(charray[i]))
					state=2;   /* 转换为空格状态2 */ 
				else if(isalpha(charray[i]))
				{
					state=1;chtemp[order][number[order]]=charray[i];number[order]++; 
					/* 当由初始状态转换为字母状态时单词长度开始计数，并开始存储该单词的每一个字母 */ 
				}
				else 
					state=3;  /* 转换为标点符号状态3 */ 
				break;
			case 1:
				if(isspace(charray[i]))
				{ 
					state=2;    
					chtemp[order][number[order]]='\0';  /* 当由字母状态转换为空格状态时单词长度计数完成，需要与之前的最长长度相比较 */ 
					/* 由于声明的是字符数组并且是以不断赋值的方式赋值的，因此须在字符串最后面加上结束标志\0 */ 
					if(max<number[order])
					{
						max=number[order];temp=order;   /* 使max为当前状态下最长长度，并保存单词的序数以便于后续输出最长单词 */ 
					}
					order++;  /* 当由字母状态转换为空格状态时单词序数加一*/ 
				} 
				else if(ispunct(charray[i]))
				{
					state=3;  /* 与单词状态转换为空格状态相情况相似 */ 
					chtemp[order][number[order]]='\0';
					if(max<number[order])
					{
						max=number[order];temp=order;
					}
					order++;
				}
				else
				{
					chtemp[order][number[order]]=charray[i];number[order]++;  /* 字母状态状态不变时计数增加1 */ 
				}
				break;
			case 2:
				if(isalpha(charray[i]))
				{
					state=1;chtemp[order][number[order]]=charray[i];number[order]++;  /* 空格状态转换为字母状态时开始计数 */ 
				}
				else if(ispunct(charray[i]))
					state=3;
				else
					; /* 空语句 */ 
				break;
			case 3:
				if(isalpha(charray[i]))
				{
					state=1;chtemp[order][number[order]]=charray[i];number[order]++; /* 标点符号状态转换为字母状态时开始计数 */ 
				}
				else if(isspace(charray[i]))
					state=2;
				else
					;
				break;
		}
	}
	printf("该字符串中最长的单词为：");
	for(i=0;i<strlen(charray);i++)  /* 若某序号的对应单词个数和temp该序号的num值相同，则输出，用来处理有多个相同的最长单词个数 */
	{

		if(number[i]==number[temp])
			printf("%s\t",chtemp[i]); 
	}
	printf("\n");
	return;
}
