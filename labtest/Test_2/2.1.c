#include<stdio.h>
int main(void)
{
    int a=2,b=3,c=4;
    float x=1.414;
    printf("��x=%fʱ,����ʽ 2*x*x*x+3*x*x+4 ��ֵΪ��%6.4f\n",
	x,a*x*x*x+b*x*x+c);
    getchar();
    return 0;   
}
