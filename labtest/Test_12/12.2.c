/* 12.2.c--返回两数中较大数的地址 */
#include<stdio.h>
int *sort(int *pt1,int *pt2);
int main(void)
{
	int a,b;
	int *pt1=&a,*pt2=&b,*pt3;
	printf("请输入两个数：");
	scanf("%d %d",pt1,pt2);
	pt3=sort(pt1,pt2);
	printf(
	"a的地址为：%p\n"
	"b的地址为：%p\n" 
	"较大的数的地址为：%p",pt1,pt2,pt3);
	return 0;
}
int *sort(int *pt1,int *pt2)
{
	return (*pt1>*pt2)?pt1:pt2;
}
