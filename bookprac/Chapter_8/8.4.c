/* 8.4.c--�������� */
#include<stdio.h>
void back_turn(int n,int *array,int m);
int main(void)
{
	int array[50];
	int m,count,i;
	printf("�����������,��q��������룺");
	count=0;
	while(scanf("%d",array+count))  /* ����scanf()���Ƹ�ѭ����ʹ�û����Զ�������n���� */ 
	{
		count++;
	}
	getchar();     
	/* ������getchar()��ȡ'q'�����ʹ�����scanf()����������ȡ����Ϊscanf()�ڶ�ȡ������������ʱ�Ὣ���ַ��Է��ڻ�������  */ 
	printf("������Ҫ���Ƶ�λ����");
	scanf("%d",&m); 
	back_turn(count,array,m);
	printf("���ƺ�ĸ�����Ϊ��\n");
	for(m=0;m<count;m++)
	{
		printf("%d ",*(array+m));
	}
	return 0;
}
void back_turn(int n,int *farray,int m)
{
	int i,j,k;
	m=m%n;  /* ��n����mʱ����ȡ��ʹmΪֻ��һ�ֶ�С��n���� */ 
	for(i=n-m-1;i>=0;i--)
	{
		for(j=i;j<i+m;j++)
		{
			k=farray[j];
			farray[j]=farray[j+1];    /* ֱ�ӽ���n-m-1��0�±����������������ཻ�� */ 
			farray[j+1]=k;
		}
	}
	return;
}
