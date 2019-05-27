/* 4.10.c--用switch语句来根据利润计算奖金 */
#include<stdio.h>
#define TIMES 100000 /* 把十万分离出来，以便以下更好处理和整理数据*/ 
#define P1 0.10  /* 定义整数型的符号变量，以便以后更改数据 */
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
	printf("请输入你的利润:");
	scanf("%f",&profit);
	t=profit;
	t/=TIMES;
	profit/=TIMES;
	
	switch(t)  /* 利用switch语句必须使用常量标签，因此要进行整除处理*/ 
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
	printf("你的奖金总额为:%.2f",award);
	getchar();
	getchar();
	return 0;
	
}
