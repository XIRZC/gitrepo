/* 13.2.c--��������ʱ�����ʽ�����ϵͳ���ں�ʱ�� */
#include<stdio.h> 
#include<time.h> 
/*
struct tm {
    int tm_sec;  �ա�ʱ���֡���Ϊ������Χ 
    int tm_min;   ��Ϊ��ǰ��һ���1900���������������ʱҪ��1900 
    int tm_hour;   �·ݷ�ΧΪ0��11�����Ҫ��1 
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;  �����ڵĵڼ��죬��ΧΪ��0-6��0���������գ� 
    int tm_yday;  �����еĵڼ��� 
    int tm_isdst;   �ýṹ��Ϊtime.hͷ�ļ����Ѷ���õģ��������ϵͳ��ǰʱ��������Ϣ 
  };*/
  
/*
  time()��localtime()����ԭ��
  time_t __cdecl time(time_t *_Time);
  struct tm *__cdecl localtime(const time_t *_Time); 
*/ 
int main(void)
{
	time_t now;
	struct tm *nowtmpt;  
	/* ����һ��tm�ṹ���ָ��������������ɵ�tm�ṹ�ĵ�ַ�����θ�localtime()���� */ 
	now=time(NULL);  /* ����time()����������ָ�����õ���ǰ����ʱ�䵽1970����������� */ 
	nowtmpt=localtime(&now);  /* ����localtime()����������time_t���͵�ָ�������ɵ�ǰϵͳʱ���tm�ṹ���ַ */
	printf("ϵͳʱ��Ϊ��%d��/%d��/%d��  %d:%d:%d",
	nowtmpt->tm_year+1900,nowtmpt->tm_mon+1,nowtmpt->tm_mday,nowtmpt->tm_hour,
	nowtmpt->tm_min,nowtmpt->tm_sec);
	return 0; 
} 
