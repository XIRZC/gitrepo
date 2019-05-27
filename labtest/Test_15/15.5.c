/* 15.5.c--输入姓名删除结点 */
#include<stdio.h>
#include"sum.h"
#include<stdlib.h>
int main(void)
{
	stu *head;
	char *chpt[10];
	int i=0;
	head=create();
	getchar();  /* 读取掉create()时多余的\n换行符 */
	printf("请输入你要删除的结点的名字,按CTRL+C离开输入：");
	while(1)
	{
		chpt[i]=(char *)calloc(10,sizeof(char));
		gets(chpt[i]);
		head=del2(head,chpt[i]);
		print(head);
		i++;
	}
	system("pause");
	return 0;
} 
