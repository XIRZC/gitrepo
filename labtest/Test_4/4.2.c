/*4.2.c--���η��̵��������*/ 
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c;
	double d;
	printf("ĳ����Ϊa*x*x+b*x+c=0\n");
	printf("������a,b,c,��q�뿪����\n");
	while(scanf("%f %f %f",&a,&b,&c)==3){ 
		d=b*b-4*a*c;
		if(a==0){
			printf("�÷��̲�Ϊ���η���\n");
			printf("x��Ϊ: %6.2f\n",(-c)/(double)b);
			
		}
		else if(d==0){
			printf("�÷�����������ͬ��ʵ��\n");
			printf("x��Ϊ��%6.2f\n",(-b+sqrt(d))/(2*a));
		}		
		else if(d>0){
			printf("�÷�����������ͬ��ʵ��\n");
			printf("x��Ϊ: %6.2f    %6.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
		}
		else{
			printf("�÷�����ʵ��,�����������\n");
			printf("x��Ϊ��%.2f+%.2fi   %.2f+%.2fi\n",
			-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),-sqrt(-d)/(2*a)); 
		}
	} 
	return 0;

 } 
