#pragma once
#include <ctime>
class my_time
{
public:
	bool isAfterThisTime(int weekday, int hour, int minute, int second = 0);
};
