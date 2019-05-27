#include<stdio.h>
int main (void)
{
    int p;
    printf("请输入数,按q离开");
    while(scanf("%d",&p)==1){
        printf("八进制数：%o 十六进制数：%x\n",p,p);
    }
    getchar();
    getchar();
    return 0;
    
    
} 
