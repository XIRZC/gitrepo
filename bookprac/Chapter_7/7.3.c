/* 7.3.c--�ж������ĺ��� */
#include<stdio.h>
int prime(int k);  /* �����ж������ĺ��� */ 
int main(void)
{
    int k;
    printf("������һ����,��q���뿪��"); 
    while(scanf("%d",&k))  /* ͨ��scanf�ķ���ֵ����ȡ��ȡ�ĸ������˳�ѭ�� */ 
    {
        if(prime(k))
            printf("����Ϊ����\n");
        else
            printf("������Ϊ����\n"); 
    }
    getchar();
    getchar(); 
    return 0;
}  
int prime(int k)  /* ������������ */ 
{
    if(k==1)
            return 0;  /* ������1ֱ�ӷ���0ʹ�䲻Ϊ���� */ 
    else
    {
            int i;
            int flag=1;  /* ����flag��ͨ����ֵ�ĸı����ж�һ�����Ƿ�Ϊ���� */ 
            for(i=2;i*i<=k;i++)
            {
                if(k%i==0)  /* ��һ��С���俪�������ܱ���������ʹflag��ֵΪ0 */ 
                    flag=0;          
            } 
            return flag;      
    }           
}  
