#include "my_time.h"

bool my_time::isAfterThisTime(int weekday, int hour, int minute, int second)
{
	time_t now = time(0);
	tm* ltm;
	tm mytm;
	ltm = &mytm;
	localtime_s(ltm, &now);
	//if (ltm->tm_wday == 0)
	//	ltm->tm_wday = 7;

	if (ltm->tm_wday < weekday || ((ltm->tm_wday == 5 || ltm->tm_wday == 6) && (weekday == 0 || weekday == 1)))
		return false;
	else if (ltm->tm_wday > weekday)
		return true;

	if (ltm->tm_hour < hour)
		return false;
	else if (ltm->tm_hour > hour)
		return true;

	if (ltm->tm_min < minute)
		return false;
	else if (ltm->tm_min > minute)
		return true;

	if (ltm->tm_sec < second)
		return false;
	return true;

}

/*
struct tm {
	int tm_sec;   // �룬������Χ�� 0 �� 59���������� 61
	int tm_min;   // �֣���Χ�� 0 �� 59
	int tm_hour;  // Сʱ����Χ�� 0 �� 23
	int tm_mday;  // һ���еĵڼ��죬��Χ�� 1 �� 31
	int tm_mon;   // �£���Χ�� 0 �� 11
	int tm_year;  // �� 1900 ���������
	int tm_wday;  // һ���еĵڼ��죬��Χ�� 0 �� 6��������������
	int tm_yday;  // һ���еĵڼ��죬��Χ�� 0 �� 365���� 1 �� 1 ������
	int tm_isdst; // ����ʱ
}
il1I|LjJ0oOxXzZ
*/