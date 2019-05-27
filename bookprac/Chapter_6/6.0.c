/* 6.0.c--Ã°ÅİÅÅĞò  */
#include<stdio.h>
void sort(int array[10]);
int main(void)
{
 	int i,array[10]={10,9,8,7,6,5,4,3,2,1};
 	sort(array);
 	for(i=0;i<10;i++)
 	{
	     printf("%d\t",array[i]);
	}
	getchar();
	return 0;
}
void sort(int array[10])
{
 	 int i,j,temp;
 	 for(i=9;i>0;i--)
 	 {
	      for(j=0;j<i;j++)
	      {
 				  if(array[j]>array[j+1])
				  {
						temp=array[j];
						array[j]=array[j+1];
						array[j+1]=temp;
				  }
		  }
	  }
	  return;
 }
