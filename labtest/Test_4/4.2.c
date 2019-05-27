/*4.2.c--二次方程的求根问题*/ 
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c;
	double d;
	printf("某方程为a*x*x+b*x+c=0\n");
	printf("请输入a,b,c,按q离开输入\n");
	while(scanf("%f %f %f",&a,&b,&c)==3){ 
		d=b*b-4*a*c;
		if(a==0){
			printf("该方程不为二次方程\n");
			printf("x解为: %6.2f\n",(-c)/(double)b);
			
		}
		else if(d==0){
			printf("该方程有两个相同的实根\n");
			printf("x解为：%6.2f\n",(-b+sqrt(d))/(2*a));
		}		
		else if(d>0){
			printf("该方程有两个不同的实根\n");
			printf("x解为: %6.2f    %6.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
		}
		else{
			printf("该方程无实根,有两个共轭复根\n");
			printf("x解为：%.2f+%.2fi   %.2f+%.2fi\n",
			-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),-sqrt(-d)/(2*a)); 
		}
	} 
	return 0;

 } 
