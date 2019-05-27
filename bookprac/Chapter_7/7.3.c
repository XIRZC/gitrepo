/* 7.3.c--判断素数的函数 */
#include<stdio.h>
int prime(int k);  /* 声明判断素数的函数 */ 
int main(void)
{
    int k;
    printf("请输入一个数,按q键离开："); 
    while(scanf("%d",&k))  /* 通过scanf的返回值即争取读取的个数来退出循环 */ 
    {
        if(prime(k))
            printf("该数为素数\n");
        else
            printf("该数不为素数\n"); 
    }
    getchar();
    getchar(); 
    return 0;
}  
int prime(int k)  /* 素数函数定义 */ 
{
    if(k==1)
            return 0;  /* 特殊数1直接返回0使其不为素数 */ 
    else
    {
            int i;
            int flag=1;  /* 定义flag，通过其值的改变来判断一个数是否为素数 */ 
            for(i=2;i*i<=k;i++)
            {
                if(k%i==0)  /* 有一个小于其开方的数能被整除，则使flag的值为0 */ 
                    flag=0;          
            } 
            return flag;      
    }           
}  
