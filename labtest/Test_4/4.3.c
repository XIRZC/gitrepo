#include<stdio.h>
#define TIMES 100000
#define P1 0.10
#define P2 0.075
#define P3 0.05
#define P4 0.03
#define P5 0.015
#define P6 0.01
int main(void) 
{
	float profit,award;
	award=0;
	printf("请输入你的利润:");
	scanf("%f",&profit);
	profit/=100000;
	
	if(profit<=1.0)
		award+=TIMES*profit*P1;
	else if(profit<=2.0)
		award+=TIMES*(P1+(profit-1.0)*P2);
	else if(profit<=4.0)
		award+=TIMES*(P1+P2+(profit-2.0)*P3);
	else if(profit<=6.0)
		award+=TIMES*(P1+P2+2*P3+(profit-4.0)*P4);
	else if(profit<=10.0)
		award+=TIMES*(P1+P2+2*P3+2*P4+(profit-6.0)*P5);
	else
		award+=TIMES*(P1+P2+2*P3+2*P4+4*P5+(profit-10.0)*P6);
	printf("你的奖金总额为:%.2f",award);
	return 0;
	
}
