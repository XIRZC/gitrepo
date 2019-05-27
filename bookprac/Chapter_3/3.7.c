#include<stdio.h>
#define PI 3.141592 /*用预处理器命令定义符号常量PI*/ 
int main (void)
{
	int h;  /*获得数据*/ 
	float r,l,s,S,v,V;
	printf("请分别输入半径r和圆柱高h:");
	scanf("%f %d",&r,&h);
	
	l=2*r*PI;  /*处理数据*/ 
	s=PI*r*r;
	S=4*PI*r*r;
	v=3.0/4.0*PI*r*r;
	V=s*h;
	
	printf("圆周长：%.2f\n圆面积：%.2f \n圆球表面积：%.2f \n"
	"圆球体积：%.2f\n圆柱体积：%.2f",l,s,S,v,V); /*输出数据*/ 
	getchar();
	getchar(); 
	return 0;
 } 
