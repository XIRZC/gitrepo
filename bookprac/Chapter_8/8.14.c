/* 8.14.c--���鵹����� */ 
#include<stdio.h>
void reverse(void);
int main(void)
{
	reverse();
	return 0; 
}
void reverse(void)
{
	int count=0,i,temp;
	int *array=(int*)calloc(50,sizeof(int));  /* ���ö�̬�ڴ����ķ�����ΪҪ���������ռ� */ 
	printf("������һϵ��������q���뿪���룺");
	while(scanf("%d",array+count))
		count++;
	for(i=0;i<count/2;i++)
	{
		temp=*(array+i);
		*(array+i)=*(array+count-i-1);
		*(array+count-i-1)=temp;
	}
	for(i=0;i<count;i++)
	{
		printf("%d ",*(array+i));
	}
	free((void*)array);
}
