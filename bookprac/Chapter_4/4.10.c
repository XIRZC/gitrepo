/* 4.10.c--��switch���������������㽱�� */
#include<stdio.h>
#define TIMES 100000 /* ��ʮ�����������Ա����¸��ô������������*/ 
#define P1 0.10  /* ���������͵ķ��ű������Ա��Ժ�������� */
#define P2 0.075
#define P3 0.05
#define P4 0.03
#define P5 0.015
#define P6 0.01
int main(void) 
{
	float profit,award;
	int t;
	award=0;
	printf("�������������:");
	scanf("%f",&profit);
	t=profit;
	t/=TIMES;
	profit/=TIMES;
	
	switch(t)  /* ����switch������ʹ�ó�����ǩ�����Ҫ������������*/ 
	{
		case 0:
			award+=TIMES*profit*P1;break;
		case 1:
			award+=TIMES*(P1+(profit-1.0)*P2);break;
		case 2:
		case 3:
			award+=TIMES*(P1+P2+(profit-2.0)*P3);break;
		case 4:
		case 5:
			award+=TIMES*(P1+P2+2*P3+(profit-4.0)*P4);break;
		case 6:
		case 7:
		case 8:
		case 9:
			award+=TIMES*(P1+P2+2*P3+2*P4+(profit-6.0)*P5);break;
		case 10:
			award+=TIMES*(P1+P2+2*P3+2*P4+4*P5+(profit-10.0)*P6);break;

	}
	printf("��Ľ����ܶ�Ϊ:%.2f",award);
	getchar();
	getchar();
	return 0;
	
}
