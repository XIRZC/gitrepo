/* 13.2.c--按年月日时分秒格式化输出系统日期和时间 */
#include<stdio.h> 
#include<time.h> 
/*
struct tm {
    int tm_sec;  日、时、分、秒为正常范围 
    int tm_min;   年为当前这一年距1900年的年数，因此输出时要加1900 
    int tm_hour;   月份范围为0，11，因此要加1 
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;  该星期的第几天，范围为：0-6，0代表星期日， 
    int tm_yday;  该月中的第几天 
    int tm_isdst;   该结构体为time.h头文件中已定义好的，用来存放系统当前时间的相关信息 
  };*/
  
/*
  time()和localtime()函数原型
  time_t __cdecl time(time_t *_Time);
  struct tm *__cdecl localtime(const time_t *_Time); 
*/ 
int main(void)
{
	time_t now;
	struct tm *nowtmpt;  
	/* 定义一个tm结构体的指针变量用来存生成的tm结构的地址来传参给localtime()函数 */ 
	now=time(NULL);  /* 利用time()函数并传空指针来得到当前日历时间到1970零点相差的秒数 */ 
	nowtmpt=localtime(&now);  /* 利用localtime()函数并传参time_t类型的指针来生成当前系统时间的tm结构体地址 */
	printf("系统时间为：%d年/%d月/%d日  %d:%d:%d",
	nowtmpt->tm_year+1900,nowtmpt->tm_mon+1,nowtmpt->tm_mday,nowtmpt->tm_hour,
	nowtmpt->tm_min,nowtmpt->tm_sec);
	return 0; 
} 
