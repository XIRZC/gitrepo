/* 16.3.c--输出一个数的原码，补码以及反码 */ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LEN sizeof(int)*8
void tobina(int n,int flag);
int main(void)
{
	int n;
	printf("请连续输入一个数，按q键离开输入：");
	while(scanf("%d",&n))
	{
		printf("原码为：");
		tobina(n,0);
		printf("反码为：");
		tobina(n,1);
		printf("补码为：");
		tobina(n,2);
	}
	system("pause");
	return 0;
}
void tobina(int n,int flag)
{
	int i,r[LEN],k=1,pn=abs(n);
	r[0]=(n>0?0:1);
	for(i=1;i<LEN;i++)
	{
		if(!r[0]||flag==0)
			r[32-i]=pn%2;
		else if(flag==1)
			r[32-i]=1-pn%2;
		else if(flag==2)
		{
			if(k-pn%2==1)
				r[32-i]=0;
			else
			{
				r[32-i]=1-pn%2+k;
				k=0;
			}
		}
		pn/=2;	
	}
	for(i=0;i<32;i++)
	{
		printf("%d",r[i]);
	}
	printf("\n");
	return;
}
