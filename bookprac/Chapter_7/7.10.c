/* 7.10.c--����ַ����е������ -4��״̬��״̬�� */ 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void printlong(char charray[]);
int main(void)
{
	char charray[50];
	printf("�밴CTRL+C���˳�����ѭ��\n");
	while (1)
		printlong(charray);
	return 0;
}
void printlong(char charray[])
{
	int state=0,number[20]={0},max=0,order=0; /* �ַ�������״̬��0Ϊ��ʼ״̬��1Ϊ����״̬��2Ϊ�ո�״̬��3Ϊ�����ַ�״̬ */
	int i,temp;    /* numΪһ�����ʵĳ��ȼ��ַ�������orderΪ���ʵ��������ڼ�����maxΪ���ĵ��ʵĳ��� */
	char chtemp[20][20];
	printf("������һ���ַ���:");
	gets(charray);
	charray[strlen(charray)]=' ';  
	/* ��������������ַ��������Ͽո���ô��������ַ������޿ո�ʱ�ᵼ�����һ������δ����Ƚϳ��Ⱦ��˳�forѭ���� */ 
	for(i=0;i<strlen(charray);i++)
	{
		switch(state)
		{
			case 0:
				if(isspace(charray[i]))
					state=2;   /* ת��Ϊ�ո�״̬2 */ 
				else if(isalpha(charray[i]))
				{
					state=1;chtemp[order][number[order]]=charray[i];number[order]++; 
					/* ���ɳ�ʼ״̬ת��Ϊ��ĸ״̬ʱ���ʳ��ȿ�ʼ����������ʼ�洢�õ��ʵ�ÿһ����ĸ */ 
				}
				else 
					state=3;  /* ת��Ϊ������״̬3 */ 
				break;
			case 1:
				if(isspace(charray[i]))
				{ 
					state=2;    
					chtemp[order][number[order]]='\0';  /* ������ĸ״̬ת��Ϊ�ո�״̬ʱ���ʳ��ȼ�����ɣ���Ҫ��֮ǰ���������Ƚ� */ 
					/* �������������ַ����鲢�����Բ��ϸ�ֵ�ķ�ʽ��ֵ�ģ���������ַ����������Ͻ�����־\0 */ 
					if(max<number[order])
					{
						max=number[order];temp=order;   /* ʹmaxΪ��ǰ״̬������ȣ������浥�ʵ������Ա��ں����������� */ 
					}
					order++;  /* ������ĸ״̬ת��Ϊ�ո�״̬ʱ����������һ*/ 
				} 
				else if(ispunct(charray[i]))
				{
					state=3;  /* �뵥��״̬ת��Ϊ�ո�״̬��������� */ 
					chtemp[order][number[order]]='\0';
					if(max<number[order])
					{
						max=number[order];temp=order;
					}
					order++;
				}
				else
				{
					chtemp[order][number[order]]=charray[i];number[order]++;  /* ��ĸ״̬״̬����ʱ��������1 */ 
				}
				break;
			case 2:
				if(isalpha(charray[i]))
				{
					state=1;chtemp[order][number[order]]=charray[i];number[order]++;  /* �ո�״̬ת��Ϊ��ĸ״̬ʱ��ʼ���� */ 
				}
				else if(ispunct(charray[i]))
					state=3;
				else
					; /* ����� */ 
				break;
			case 3:
				if(isalpha(charray[i]))
				{
					state=1;chtemp[order][number[order]]=charray[i];number[order]++; /* ������״̬ת��Ϊ��ĸ״̬ʱ��ʼ���� */ 
				}
				else if(isspace(charray[i]))
					state=2;
				else
					;
				break;
		}
	}
	printf("���ַ�������ĵ���Ϊ��");
	for(i=0;i<strlen(charray);i++)  /* ��ĳ��ŵĶ�Ӧ���ʸ�����temp����ŵ�numֵ��ͬ������������������ж����ͬ������ʸ��� */
	{

		if(number[i]==number[temp])
			printf("%s\t",chtemp[i]); 
	}
	printf("\n");
	return;
}
