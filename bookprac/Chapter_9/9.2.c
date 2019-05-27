/* 9.2.c--*/ 
#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int isprime(int);
int main(void)
{
    struct date date1;
    int i,days=0;
    printf("请分别输入年、月、日：");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.day);
    for(i=1;i<date1.month;i++)
    {
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10: days+=31;break;
            case 2:  days+=(isprime(date1.year)?29:28);break;
            default: days+=30;break;
        }
    }
    days+=date1.day;
    printf("该日为这一年中的第%d天",days);
    return 0;
}
int isprime(int year)
{
    if((year%4==0&&year%100!=0)||(year%400==0))
        return 1;
    else 
        return 0;
}
