/* 15.4.c--˳��������� */
#include<stdio.h>
#include"sum.h"
#include<stdlib.h>
int main(void)
{
	stu *head;
	long num;
	printf("�뱣֤���ڵ�ĳɼ�˳����С�������У�\n");
	head = create();
	printf("������Ҫ�����ѧ����ѧ�ţ���q�뿪���룺");
	while (scanf("%ld", &num))
	{
		head = insert(head, num);
		print(head);
	}
	system("pause");
	return 0;
}