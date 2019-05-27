/*5.1.c--计算器*/
#include<stdio.h>
void write(void){
	printf("选择菜单：\n\
	1 求两个数的和\n\
	2 求两个数的差\n\
	3 求两个数的商和余数\n\
	4 求两个数的倒数之和\n\
	0 退出系统 \n");
	printf("请按上述菜单输入数字序号来选择计算器的功能\n");
}

int main (void)
{
	int num,a,b; 
	write();
	scanf("%d",&num);
	while(num!=0){
		printf("请输入两个数 a b:");
		scanf("%d %d",&a,&b);
		switch(num){
			case 1:
				printf("两个数的和为：%d\n",a+b);
				break;
			case 2:
				printf("两个数的差为：%d\n",a-b);
				break;
			case 3:
				printf("两个数的商和余数分别为：%d %d\n",a/b,a%b);
				break;
			case 4:
				printf("两个数的倒数之和为：%.2f\n",1/(float)a+1/(float)b);
				break;
			default:
				printf("输入值超出范围\n");
		}
		printf("请按任意键返回该菜单\n");
		getch(); 
		
		write();
		printf("请输入菜单序号：");
		scanf("%d",&num);
	}
	return 0;
} 
