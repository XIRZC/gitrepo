/* 7.18.c--�ꡢ�¡������������������� */
#include<stdio.h>
int count(int year,int month,int day);
int main(void)
{
	int year,month,day;
	printf("�����������ꡢ�¡���,��q���뿪:");
	while(scanf("%d %d %d",&year,&month,&day))
	{
		printf("%d-%d-%dΪ����ĵ�%d��\n",year,month,day,count(year,month,day));
	}
	getchar();
	getchar();
	return 0;
} 

int count(int year,int month,int day)
{
	int isrun(int year); /* ��count()�����е���isrun�������� */ 
	int days=0,i;
	for(i=1;i<=month-1;i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:days+=31;break; 
			case 2:
				if(isrun(year))
				{
					days+=29;break;
				}	
				else
				{
					days+=28;break;
				}	
			case 4:
			case 6:
			case 9:
			case 11:days+=30;break;
		}
	}
	days+=day;
	return days;
}
int isrun(int year)  /* �������꺯�������ж϶��µ������������ز���ֵ�Թ����������� */ 
{
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else
		return 0;
}

