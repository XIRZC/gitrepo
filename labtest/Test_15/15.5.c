/* 15.5.c--��������ɾ����� */
#include<stdio.h>
#include"sum.h"
#include<stdlib.h>
int main(void)
{
	stu *head;
	char *chpt[10];
	int i=0;
	head=create();
	getchar();  /* ��ȡ��create()ʱ�����\n���з� */
	printf("��������Ҫɾ���Ľ�������,��CTRL+C�뿪���룺");
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
