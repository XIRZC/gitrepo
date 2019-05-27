/* 7.14.c--����ʵ�ֳɼ����� */
#include<stdio.h>
float student_average(float score[][5],int i);
float subject_average(float score[][5],int j);
int *highest_info(float score[][5]);  /* �ú�����7.10�е��ַ���ͳ�Ʋ�ͬ���͵ĸ������ƣ�Ҳ����ȫ�ֱ����ʹ�����������ķ��� */ 
float sigma(float studentaverage[]);
void order(void);  /* ����˵��������Ա����ظ�����˵� */ 
int main(void)
{
	float score[10][5]=
	{{67,87,97,67,81},{97,56,76,94,65},{65,74,73,83,89},{56,65,97,56,96},
	{96,56,45,75,58},{85,85,96,57,97},{56,87,98,67,98},{67,89,78,56,98},
	{78,97,67,78,57},{78,98,67,56,87}};
	float studentaverage[10];
	int *highinfo_point;
	int i,num;
	float sigmav;
	order();
	scanf("%d",&num);
	while(num!=0)
	{
		switch(num)
		{
			case 1:  /* ����switch()�����ʵ�ֶ����������ж� */ 
				for(i=0;i<10;i++)
					printf("��%d��ѧ����ƽ����Ϊ��%2.f\n",i+1,student_average(score,i));
				break;
			case 2:
				for(i=0;i<5;i++)
					printf("��%d�ſε�ƽ����Ϊ��%.2f\n",i+1,subject_average(score,i));
				break;
			case 3:
				highinfo_point=highest_info(score);
				printf("��߷�����Ӧ��ѧ����źͿγ���ŷֱ�Ϊ��%d %d\n",*(highinfo_point)+1,*(highinfo_point+1)+1);
				break;   /* ����ָ��Ľ�������������õ���ָ������Ӧ��ֵ */ 
			case 4:
				for(i=0;i<10;i++)
					studentaverage[i]=student_average(score,i);
				sigmav=sigma(studentaverage);
				printf("����Ϊ:%.2f\n",sigmav);
				break;
			default:
				printf("���ݴ���\n");
		}
		printf("�밴��������ز˵�\n");
		getch();  /* �޻���������ʵ�ֲ��ð�ENTER����ֻ��һ��������ķ�ʽʹ������ͣ�����˳��ִ�� */ 
		order();
		scanf("%d",&num);
	}
	getchar();
	getchar(); 
	return 0;	
}
float student_average(float score[][5],int i)
{
	float sum=0;
	int j;
	for(j=0;j<5;j++)  /* �ú���Ϊ�õ�����ѧ����ƽ���֣���˻���Ҫ������ǵڼ���ѧ������Ҫ���������м�һ����ѭ������ѧ����� */
	{
		sum+=score[i][j];
	}
	return sum/5;
}
float subject_average(float score[][5],int j)
{
	float sum;    /* �ú���Ϊ�õ����Ƶ�ƽ���֣���˻���Ҫ������ǵڼ��ƣ���Ҫ���������м�һ����ѭ��������Ŀ��� */
	int i;
	for(i=0;i<10;i++)
	{
		sum+=score[i][j];
	}
	return sum/10;
}
int *highest_info(float score[][5])
{
	static int info[2]={0};
	float max=score[0][0];
	int i,j;
	for(i=0;i<10;i++)  
	{
		for(j=0;j<5;j++)
		{
			if(score[i][j]>max) /* ���ϴ洢�������ֵ�������Ϣ */ 
			{
				max=score[i][j];
				info[0]=i;
				info[1]=j;
			}
		}
	}
	return info;
}
float sigma(float studentaverage[])  /* �����������ڴ��µ�һ������������õ�ѧ��ƽ���֣�������˺��� */ 
{
	float sum1=0,sum2=0;
	int i;
	for(i=0;i<10;i++)
	{
		sum1+=studentaverage[i]*studentaverage[i];
		sum2+=studentaverage[i];
	}
	return sum1/10-(sum2/10)*(sum2/10); 
}
void order(void)
{
	printf("���ܲ˵����£�\n"  /* ����C�е������ַ������ÿո��������Զ�����Ϊһ�����ص���ʵ�ַ��� */ 
	"\t1.����ÿ��ѧ����ƽ����\n"
	"\t2.������ſε�ƽ����\n"
	"\t3.�ҳ�����50����������ߵķ�����Ӧ��ѧ���Ϳγ�\n"
	"\t4.����ƽ���ַ���\n"
	"\t0.�뿪�˵�\n");
	printf("ͨ�����ʵ�ֲ˵���ѡ��,������������ز˵���");
	return; 
}
