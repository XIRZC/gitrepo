/* 8.18.c--ָ�������·���� */
#include<stdio.h>
int main(void)
{
    int *charray[12]={"Month","February","March","April","May","June","July","August","Semptember","October","November","December"};
    int month;   /* ����ָ����������ÿ�������ַ����ĵ�ַ��������ʱֱ�Ӵӳ����ַ�����ַ��ȡ���ַ�ֵ */ 
    printf("�������·�������q���뿪��");
    while(scanf("%d",&month))
    {
    	if(month<13)
        	printf("�·���Ϊ��%s\n",charray[month-1]);
        else
        	printf("���ݴ��󣡣���");
    }
    return 0;
}
