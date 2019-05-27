#include<stdio.h>
int main(void)
{
    int a=2,b=3,c=4;
    float x=1.414;
    printf("当x=%f时,多项式 2*x*x*x+3*x*x+4 的值为：%6.4f\n",
	x,a*x*x*x+b*x*x+c);
    getchar();
    return 0;   
}
