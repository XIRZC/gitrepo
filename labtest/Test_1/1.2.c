#include<stdio.h>
#define PI 3.1415
int main (void)
{
    double r,s,l;
    printf("请输入半径："); 
    scanf("%lf",&r);
    printf("面积：%6.2f \n周长：%6.2f\n",s=PI*r*r,l=PI*2*r);
    getchar();
    return 0;
}
