/* 15.4.c--顺序链表插入 */
#include<stdio.h>
#include"sum.h"
#include<stdlib.h>
int main(void)
{
	stu *head;
	long num;
	printf("请保证各节点的成绩顺序由小到大排列：\n");
	head = create();
	printf("请输入要插入的学生的学号，按q离开输入：");
	while (scanf("%ld", &num))
	{
		head = insert(head, num);
		print(head);
	}
	system("pause");
	return 0;
}