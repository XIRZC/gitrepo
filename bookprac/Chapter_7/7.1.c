/* 7.1.c--�����������������������Լ������С������ */
#include<stdio.h>
int gongyue(int a,int b);
int gongbei(int a,int b,int c);  /* �������� */ 
int main(void)
{
    int a,b;
    int yue,bei;
    printf("�����������Ǹ�������");
    scanf("%d %d",&a,&b);
    yue=gongyue(a,b);   /* �������� */ 
    bei=gongbei(a,b,yue);
    printf("����������С����������С��Լ���ֱ�Ϊ��%d %d",yue,bei);
    getchar();
    getchar();
    return 0;
}
int gongyue(int a,int b)  /* �������� */
{
    int r;
    while(b!=0)
    {
        r=a%b;   /* շת������������Լ�� */
        a=b;
        b=r;
    }
    return a;
}
int gongbei(int a,int b,int c)  /* ����ǰһ���������ص����Լ��,ֱ�Ӽ�����С������ */
{ 
    return a*b/c;
}
