#include<stdio.h>
#define PI 3.141592 /*��Ԥ�������������ų���PI*/ 
int main (void)
{
	int h;  /*�������*/ 
	float r,l,s,S,v,V;
	printf("��ֱ�����뾶r��Բ����h:");
	scanf("%f %d",&r,&h);
	
	l=2*r*PI;  /*��������*/ 
	s=PI*r*r;
	S=4*PI*r*r;
	v=3.0/4.0*PI*r*r;
	V=s*h;
	
	printf("Բ�ܳ���%.2f\nԲ�����%.2f \nԲ��������%.2f \n"
	"Բ�������%.2f\nԲ�������%.2f",l,s,S,v,V); /*�������*/ 
	getchar();
	getchar(); 
	return 0;
 } 
