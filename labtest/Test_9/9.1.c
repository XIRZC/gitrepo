/*5.1.c--������*/
#include<stdio.h>
void write(void){
	printf("ѡ��˵���\n\
	1 ���������ĺ�\n\
	2 ���������Ĳ�\n\
	3 �����������̺�����\n\
	4 ���������ĵ���֮��\n\
	0 �˳�ϵͳ \n");
	printf("�밴�����˵��������������ѡ��������Ĺ���\n");
}

int main (void)
{
	int num,a,b; 
	write();
	scanf("%d",&num);
	while(num!=0){
		printf("������������ a b:");
		scanf("%d %d",&a,&b);
		switch(num){
			case 1:
				printf("�������ĺ�Ϊ��%d\n",a+b);
				break;
			case 2:
				printf("�������Ĳ�Ϊ��%d\n",a-b);
				break;
			case 3:
				printf("���������̺������ֱ�Ϊ��%d %d\n",a/b,a%b);
				break;
			case 4:
				printf("�������ĵ���֮��Ϊ��%.2f\n",1/(float)a+1/(float)b);
				break;
			default:
				printf("����ֵ������Χ\n");
		}
		printf("�밴��������ظò˵�\n");
		getch(); 
		
		write();
		printf("������˵���ţ�");
		scanf("%d",&num);
	}
	return 0;
} 
