/* 9.1.c--�ṹ������洢������������ڼ��� */
#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int days(int,int,int);
int isprime(int);
int main(void)
{
    struct date date1;
    printf("��ֱ������ꡢ�¡��գ�");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.day);
    printf("����Ϊ��һ���еĵ�%d��",days(date1.year,date1.month,date1.day));
    return 0;
}
int days(int year,int month,int day)
{
    int i,days=0;
    for(i=1;i<month;i++)
    {
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10: days+=31;break;
            case 2:  days+=(isprime(year)?29:28);break;
            default: days+=30;break;
        }
    }
    days+=day;
    return days;
}
int isprime(int year)
{
    if((year%4==0&&year%100!=0)||(year%400==0))
        return 1;
    else 
        return 0;
}
