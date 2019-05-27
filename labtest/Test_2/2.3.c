#include<stdio.h>
int main (void)
{
	int  F;
    double C;
    printf("请输入一个华氏温度：");
    scanf("%d",&F);
    C=5.0/9.0*(F-32);
    printf("%6.2f",C);
    getchar();
    getchar();
    return 0;
}
