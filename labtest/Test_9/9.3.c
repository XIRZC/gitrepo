/* 9.3.c--ʹ��������������100�ڵ������������� */
#include<stdio.h>
int prime(int n);
int main(void)
{
    int count=0,i;
    for(i=100;i>1;i--)
    {
        if(prime(i))
        {
  		    count++;
 			printf("100�ڵ�����%d������Ϊ��%d\n",count,i);
		}
		if(count>=3)
            break;
	}
	getchar();
	return 0;
}
int prime(int n)
{
    int flag=1,i;
    if(n==0)
    	flag=0;
    else if(n==1||n==2)
    	flag=1;
    else
    {
	    for(i=2;i*i<n;i++)
	    {
	        if(n%i==0)
	            flag=0;
	    }
	}
    return flag;
}
