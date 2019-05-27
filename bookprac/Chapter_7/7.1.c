/* 7.1.c--用两个函数求两个数的最大公约数和最小公倍数 */
#include<stdio.h>
int gongyue(int a,int b);
int gongbei(int a,int b,int c);  /* 函数声明 */ 
int main(void)
{
    int a,b;
    int yue,bei;
    printf("请输入两个非负整数：");
    scanf("%d %d",&a,&b);
    yue=gongyue(a,b);   /* 函数调用 */ 
    bei=gongbei(a,b,yue);
    printf("两个数的最小公倍数和最小公约数分别为：%d %d",yue,bei);
    getchar();
    getchar();
    return 0;
}
int gongyue(int a,int b)  /* 函数定义 */
{
    int r;
    while(b!=0)
    {
        r=a%b;   /* 辗转相除法计算最大公约数 */
        a=b;
        b=r;
    }
    return a;
}
int gongbei(int a,int b,int c)  /* 传入前一个函数返回的最大公约数,直接计算最小公倍数 */
{ 
    return a*b/c;
}
