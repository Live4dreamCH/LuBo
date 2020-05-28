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
	int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
	int tm_min;   // 分，范围从 0 到 59
	int tm_hour;  // 小时，范围从 0 到 23
	int tm_mday;  // 一月中的第几天，范围从 1 到 31
	int tm_mon;   // 月，范围从 0 到 11
	int tm_year;  // 自 1900 年起的年数
	int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
	int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
	int tm_isdst; // 夏令时
}
il1I|LjJ0oOxXzZ
*/