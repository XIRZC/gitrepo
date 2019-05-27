/* 7.14.c--函数实现成绩操作 */
#include<stdio.h>
float student_average(float score[][5],int i);
float subject_average(float score[][5],int j);
int *highest_info(float score[][5]);  /* 该函数与7.10中的字符串统计不同类型的个数相似，也可用全局变量和传入数组参数的方法 */ 
float sigma(float studentaverage[]);
void order(void);  /* 定义菜单函数，以便于重复输出菜单 */ 
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
			case 1:  /* 利用switch()语句来实现多重条件的判断 */ 
				for(i=0;i<10;i++)
					printf("第%d个学生的平均分为：%2.f\n",i+1,student_average(score,i));
				break;
			case 2:
				for(i=0;i<5;i++)
					printf("第%d门课的平均分为：%.2f\n",i+1,subject_average(score,i));
				break;
			case 3:
				highinfo_point=highest_info(score);
				printf("最高分数对应的学生序号和课程序号分别为：%d %d\n",*(highinfo_point)+1,*(highinfo_point+1)+1);
				break;   /* 利用指针的解引用运算符来得到该指针所对应的值 */ 
			case 4:
				for(i=0;i<10;i++)
					studentaverage[i]=student_average(score,i);
				sigmav=sigma(studentaverage);
				printf("方差为:%.2f\n",sigmav);
				break;
			default:
				printf("数据错误！\n");
		}
		printf("请按任意键返回菜单\n");
		getch();  /* 无缓冲输入来实现不用按ENTER键而只按一个任意键的方式使程序暂停后继续顺序执行 */ 
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
	for(j=0;j<5;j++)  /* 该函数为得到单个学生的平均分，因此还需要传入的是第几个学生，还要再主函数中加一个单循环遍历学生序号 */
	{
		sum+=score[i][j];
	}
	return sum/5;
}
float subject_average(float score[][5],int j)
{
	float sum;    /* 该函数为得到单科的平均分，因此还需要传入的是第几科，还要再主函数中加一个单循环遍历科目序号 */
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
			if(score[i][j]>max) /* 不断存储下来最大值的相关信息 */ 
			{
				max=score[i][j];
				info[0]=i;
				info[1]=j;
			}
		}
	}
	return info;
}
float sigma(float studentaverage[])  /* 需在主函数内存下第一个函数计算而得的学生平均分，来传入此函数 */ 
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
	printf("功能菜单如下：\n"  /* 利用C中的两个字符串若用空格隔开则会自动连接为一个的特点来实现分行 */ 
	"\t1.计算每个学生的平均分\n"
	"\t2.计算各门课的平均分\n"
	"\t3.找出所有50个分数中最高的分数对应的学生和课程\n"
	"\t4.计算平均分方差\n"
	"\t0.离开菜单\n");
	printf("通过序号实现菜单的选择,并按任意键返回菜单：");
	return; 
}
