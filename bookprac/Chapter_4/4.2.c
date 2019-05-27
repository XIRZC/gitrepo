/* 4.2.c--表示真假的方式 */ 
#include<stdio.h>
#include<stdbool.h> /* 引入stdbool.h头文件，应用bool数据类型，其值非0即1 */ 
int main(void)
{
	int a,b,c;
	bool x,y;
	a=2;b=3;c=4;
	x=a>b;
	y=c==4;
	printf("%d %d",x,y); 
	getchar();
	return 0;
	
}
/* 计算机用0和非零数值主要为 1 来分别表示 False 和 True */ 
