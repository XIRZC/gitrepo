/* 11.2.c--�����·�������·�Ӣ������ */
#include<stdio.h>
int main(void)
{
	int month;
	char *charray[12]={"January","Febrary","March","April","May","June","July","August","Semtemper","October","November","December"};
	/* �Գ����ַ���������ĵ�ַ��Ϊ����ָ�����鸳��ֵ */ 
	printf("������һ��������q�뿪���룺");
	while(scanf("%d",&month))
	{
		if(month>=1&&month<=12)
		{
			printf("%s\n",charray[month-1]);  /* %sת��˵����ָ��������������ַ��� */ 
		}
		else
			printf("������󣡣� \n");
	} 
	return 0;
	
}
