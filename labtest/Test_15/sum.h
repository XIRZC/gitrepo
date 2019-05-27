# define LEN sizeof(stu)
typedef struct student{
	long num;
	char name[10];
	char sex[10];
	int age;
	float score;
	struct student *next;
} stu;
stu *insert(stu *head,long num);
stu *del2(stu *stupt,char *chpt);
stu *del1(stu *stupt,int num);
void print(stu *head);
stu *create(void);
void sort(stu *head);
