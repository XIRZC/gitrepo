/* 10.5.c--结构体数据保存到文件中 */ 
#include<stdio.h>
#include<stdlib.h>
/*样例输入：
1003 xiaomign 68 98 67
1001 xiaohong 89 67 56
1002 xiaocan 67 87 87
1005 xiaokai 67 98 75 
1004 xiaogang 67 89 67
*/
struct student{
	long num;
	char name[10];
	float score[3];
	float average;
}stu[5];
int main(void)
{
	FILE *fpt;
	int i,ret;
	fpt=fopen("C://Users/Xiezi/Desktop/temp/stud.txt","wb");
	if(fpt==NULL)
	{
		printf("创建存储信息的文件出错！！！\n");
		exit(0);
	}
	else
	{
		printf("请依次输入五个学生的学号，姓名，三门学科成绩不同学生间以ENTER键隔开：\n");
		for(i=0;i<5;i++)
		{
			scanf("%ld %s %f %f %f",&stu[i].num,stu[i].name,stu[i].score,stu[i].score+1,stu[i].score+2);
			stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3; 
			/*fprintf(fpt,"%ld %s %.2f %.2f %.2f %.2f",stu[i].num,stu[i].name,
			stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].average);
			 利用fprintf()将原数据重定向输入到文本文件中 */
			ret=fwrite(&stu[i],sizeof(struct student),1,fpt);  
			/*以二进制格式直接写入到文件中，这种形式下只能以二进制格式读取到正常数据 */
			/*fputc('\n',fpt);  /*为文本文件数据增加换行符 */
		}
		if(ret!=1)
			printf("写入数据到文件时出错！！\n");
		else
			printf("写入数据成功\n");
	}
	fclose(fpt);
	return 0;
}
