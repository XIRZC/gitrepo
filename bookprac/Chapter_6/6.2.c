/* 6.2.c--ѡ������ */
#include<stdio.h>
int main()
{
	int array[10],i,j,temp1,temp2;
	printf("������ʮ������");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		temp1=i;
        for(j=i+1;j<10;j++)
        {
  			if(array[temp1]>array[j])
       			temp1=j;  /* ����˫ѭ���ҳ�ÿ�����ĺ����������С�������±� */
        }
        temp2=array[temp1];  /* Ȼ��ֻ�ý���λ�õ�ֵ��array[i]����ֵ���� */ 
        array[temp1]=array[i];
        array[i]=temp2;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",array[i]);
  	}
  	getchar();
	getchar(); 
  	return 0;
}
