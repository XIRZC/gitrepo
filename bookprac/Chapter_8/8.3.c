/* 8.3.c--�������� */
#include<stdio.h>
void input(int *intarray);
void process(int *intarray);
void print(int *intarray);
int main(void)
{
	int array[10];
	input(array);
	process(array);
	print(array);
	return 0;
} 
void input(int *intarray)
{
	int i;
	printf("������ʮ������:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",intarray+i);
	}
	return;
}
void process(int *intarray)
{
	int maxv=*intarray,minv=*intarray;
	int i,temp,max,min;
	for(i=0;i<10;i++)
	{
		if(*(intarray+i)>maxv)
		{
			maxv=*(intarray+i);  
			/* ÿ�κ����ֵ����Сֵ��Ƚϣ������ڻ�С�������Сֵ����±꣬�����������Сֵ */ 
			max=i;
		}
		if(*(intarray+i)<minv)
		{
			minv=*(intarray+i);
			min=i;
		}
	}
	temp=*(intarray+9);
	*(intarray+9)=*(intarray+max);   /* ����λ�� */ 
	*(intarray+max)=temp;
	temp=*intarray;
	*intarray=*(intarray+min);
	*(intarray+min)=temp;
	return;
}
void print(int *intarray)
{
	int i;
	printf("ʮ�������������Ϊ��\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",*(intarray+i));
	}
	return;
}
