#include<stdio.h>
int main(void)
{
	int n,sign;
	double sum,precision;
	sum=1.0;
	sign=-1;
	n=1;
	precision=1.0;
	while(precision>=0.001){
		precision=1.0/(n*n+1.0);
		sum+=precision*sign;
		sign=-sign;
		n++;
	} 
	printf("%f",sum);
	return 0; 
 } 
