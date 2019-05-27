/* 7.15.c--ְ������ */
#include<stdio.h>
#include<string.h>
void readinfo(char name[][10],int number[]);
void sort(char name[][10],int number[]);
int find(int key);
static int number[10];
int main(void) 
{
	char name[10][10];
	int key;
	readinfo(name,number);
	sort(name,number);
	printf("��������Ҫ���ҵ�ְ���ţ���q���뿪:");
	while(scanf("%d",&key))
	{
		if(find(key))
			printf("��ְ���Ŷ�Ӧ��ְ������Ϊ��%s\n",name[find(key)]);
		else
			printf("�޸�ְ��\n");
	}
	return 0;
}
void readinfo(char name[][10],int number[])
{
	int i;
	printf("����������10��Ա���������Լ�ְ����,������enter���ָ�����\n");
	for(i=0;i<10;i++)
	{
		gets(name[i]);
		scanf("%d",number+i);
		getchar();
	}
	return;
}
void sort(char name[][10],int number[])  /* ���������� */ 
{
	int i,temp1,k,j;
	char temp2[10];
	for(i=0;i<10;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		{
			if(number[k]>number[j])
				k=j;
		}
		if(k!=i)
		{
			temp1=number[i];  /* ѡ�����򣬲�ͨ��strcpy()�����������ַ�����ֵ */ 
			number[i]=number[k];
			number[k]=temp1;
			strcpy(temp2,name[i]);
			strcpy(name[i],name[k]);
			strcpy(name[k],temp2);
		}
	}
	return;
}
int find(int key)  /* ������ֲ��Һ��� */
{
	int mid,right=9,left=0;
	while(1)
	{
		mid=(left+right)/2;
		if(left<=right)
		{
			if(number[mid]==key)
				return mid;
			else if(number[mid]<key)
				left=mid+1;
			else
				right=mid-1;
		}
		else
			return 0;
	}
}
/*
����ʾ��:
xiaoming
12
xiaohong 
30
xioagang 
45
xiaocai 
2
xiaozi 
80
xiaozhen 
51
xiaoku 
41
xiaoshu 
89
xiaowu 
70
xiaoke 
90
*/

