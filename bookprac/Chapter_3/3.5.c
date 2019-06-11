#include<stdio.h>
int main(void)
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b); 
	/*输入格式为: a=1b=7  注意：再已有非转换说明的字符下，格式化字符串必须与输入格式一模一样，因为此时不会自动跳过空格 */
	scanf("%f%e",&x,&y); /*输入格式为：8.50.7182e+2*/  
	/*getchar(); 读取缓冲区内的换行字符或空白，否则下面的scanf()函数的
	              第一个%c转换说明会读取换行符*/
	/*也可以直接放在一行内输入，但输入x,y后在输入Aa时不要加空白*/ 
	scanf("%c%c",&c1,&c2); /*输入格式为：Aa,原因：scanf()函数在使用其他转换说明
	读取时会自动跳过空白，但用%c转换说明时不会，因此两个字符间不能有空格*/
	/*不加getchar()时输入格式为：a=1b=7 8.5 0.7182e+2Aa*/ 
	printf("%d %d\n",a,b);
	printf("%.2f %.2f\n",x,y);
	printf("%c %c",c1,c2);
	getchar();
	getchar();
	return 0;
 } 
