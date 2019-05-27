/* 11.2.c--输入月份数输出月份英文名称 */
#include<stdio.h>
int main(void)
{
	int month;
	char *charray[12]={"January","Febrary","March","April","May","June","July","August","Semtemper","October","November","December"};
	/* 以常量字符串所代表的地址来为整个指针数组赋初值 */ 
	printf("请输入一个数，按q离开输入：");
	while(scanf("%d",&month))
	{
		if(month>=1&&month<=12)
		{
			printf("%s\n",charray[month-1]);  /* %s转换说明用指针来传参来输出字符串 */ 
		}
		else
			printf("输入错误！！ \n");
	} 
	return 0;
	
}
