/* 8.18.c--指针数组月份输出 */
#include<stdio.h>
int main(void)
{
    int *charray[12]={"Month","February","March","April","May","June","July","August","Semptember","October","November","December"};
    int month;   /* 利用指针数组来存每个常量字符串的地址，则引用时直接从常量字符串地址出取各字符值 */ 
    printf("请输入月份名，按q键离开：");
    while(scanf("%d",&month))
    {
    	if(month<13)
        	printf("月份名为：%s\n",charray[month-1]);
        else
        	printf("数据错误！！！");
    }
    return 0;
}
