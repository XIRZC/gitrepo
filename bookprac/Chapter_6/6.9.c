/* 6.9.c--�ݹ麯���Լ�ѭ�����ֲ��� */
#include<stdio.h>
int find(int array[],int key,int right,int left);
void read(int array[]); /* ��ȡ�������� */ 
void sort(int array[]); /* ������������ */
int main(void)
{
 	int key,fault,array[15];
 	int i;
 	read(array);
	sort(array);
 	printf("�����������Ϊ��"); 
 	for(i=0;i<15;i++)
		printf("%d ",array[i]);
 	printf("\n������Ҫ���ҵ�����");
	scanf("%d",&key); 
 	fault=find(array,key,0,14);  /* ���ò��Һ����ķ���ֵ�ж��Ƿ����ҵ������ */ 
 	if(fault>=0)
 		printf("��Ԫ������Ϊ��array[%d]",fault);
    else
    	printf("���������޸�����");  /* ���ݼ��� */ 
    	
    	
    /* ѭ�����ֲ��� */
    
    
	/* int key,array[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1},right=0,mid,left=14;
	printf("������Ҫ���ҵ�����");
	scanf("%d",&key);
	while(1)
	{
		if(right<=left)
		{
			mid=(right+left)/2;
			if(array[mid]<key)
			{
				left=mid-1;
			}
			else if(array[mid]==key)
			{
				printf("����Ԫ�ض�ӦΪarray[%d]",mid);
				break;  ���ҵ����˳���ѭ�� 
			} 
			else {
				right=mid+1;
			}
		}
		else
		{
			printf("���������޸��");	 ���ݼ��� 
			break;  ��δ�ҵ�Ҳ�˳���ѭ�� 
		}	
	}*/
	getchar();
	getchar();
    return 0;
}
void read(int array[])/* ��װһ����ȡ����ĺ��� */
{
	int i;
	printf("����������ʮ�������");
	for(i=0;i<15;i++)
	{
		scanf("%d",&array[i]);
	}
	return;
}
int find(int array[],int key,int right,int left)/* ����һ�����Һ��������ݹ����*/ 
{
 	int mid;
 	mid=(right+left)/2;  /* ÿ�β���������м�ֵ */ 
 	if(right<=left)  /* Ҫ��֤����right<=left��������ҵ����� */ 
 	{
	 	if(key>array[mid]) 
	   	    find(array,key,right,mid-1);  /* λ���Ұ����䣬��˸ı��������Ϊ��right,mid-1 */ 
		else if(key==array[mid])  /* �ݹ�������� */
		 	return mid;
		else 
	  	 	find(array,key,mid+1,left);  /* ����λ��������䣬��˸ı��������Ϊ��mid+1,left */
	}
	else
	  	return -1;  /* �Ҳ���ʱ������ֵΪ-1 */ 
}
void sort(int array[])/* ʹ��ð�������װһ������������ */ 
{
	int i,j,temp;
	for(i=14;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	return;
}
