#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<10;i++){
		if(i<6){
			for(j=1;j<6-i;j++){
				printf(" ");
			}
			for(j=1;j<2*i;j++){
			printf("0");
			}
		}
		else{
			for(j=1;j<i-4;j++){
				printf(" ");
			}
			for(j=1;j<2*(10-i);j++){
				printf("0");
			}
		}
		
		printf("\n");
	}
	return 0;
}
