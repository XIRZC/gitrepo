#include<stdio.h>
int main(void)
{
	int num;
	printf("��ѯ�˵�\n"
	"\t1 ����������\n"
	"\t2 �����߲���\n"
	"\t3 �������Ų���\n"
	"\t4 �����������\n"
	"\t0 ����\n");
	printf("���������ѡ��˵�:");
	scanf("%d",&num); 
	while(num!=0)
	{
		switch(num)
		{
			case 1:printf("����������\n");break;
			case 2:printf("�����߲���\n");break;
			case 3:printf("�������Ų���\n");break;
			case 4:printf("�����������\n");break;
			case 0:printf("����\n");break;
			default: printf("�������,����������\n");
		}
		scanf("%d",&num);
	}
	getchar();
	getchar();
	return 0;
}
