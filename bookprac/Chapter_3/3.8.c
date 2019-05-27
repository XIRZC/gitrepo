#include<stdio.h>
int main (void)
{
	int c1,c2;
	
	c1=getchar();
	getchar();  
	/*从缓冲区内读取上一次读取按下的换行符，
	以使下一个getchar()可以成功读取字符*/ 
	c2=getchar();
	printf("输出的读取结果为：");
	putchar(c1);
	putchar(' '); 
	putchar(c2);
	printf("\n%c %c",c1,c2);
	getchar();
	getchar();
	/*思考题
	 (1):定义为两者皆可,因为char类型是以int类型形式存储，且putchar()函数
	     可接受int类型的参数，并输出对应的字符。 
	 (2):用printf()函数中的格式化字符串中的%d转换说明来输出该字符对应的ASCII码 。 
	 (3):不是在任何情况下都能相互代替 ,如用printf()函数输出时在定义为int时
	     便不能用%c转换说明来输出对应的字符 。 
	 */
	return 0;
 } 
