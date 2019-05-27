#include<stdio.h>
int main(void)
{
	int num;
	printf("查询菜单\n"
	"\t1 按书名查找\n"
	"\t2 按作者查找\n"
	"\t3 按出版编号查找\n"
	"\t4 按出版社查找\n"
	"\t0 返回\n");
	printf("请输入序号选择菜单:");
	scanf("%d",&num); 
	while(num!=0)
	{
		switch(num)
		{
			case 1:printf("按书名查找\n");break;
			case 2:printf("按作者查找\n");break;
			case 3:printf("按出版编号查找\n");break;
			case 4:printf("按出版社查找\n");break;
			case 0:printf("返回\n");break;
			default: printf("输入错误,请重新输入\n");
		}
		scanf("%d",&num);
	}
	getchar();
	getchar();
	return 0;
}
