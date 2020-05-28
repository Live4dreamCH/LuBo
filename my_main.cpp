#include"fileUse.h"
#include"my_keybd_event.h"
#include"my_mouse_event.h"
#include"my_time.h"
#include<iostream>

// 程序入口
int main()
{
	my_keybd_event keybd;
	my_mouse_event mouse;
	my_time timeManager;
	fileUse myfile;
	int day, hour, minute, day2, hour2, minute2, needStart, needEnd,needShutOff;

	std::cout << "输入开始时间:星期 时 分" << std::endl;
	std::cin >> day >> hour >> minute;
	std::cout << "输入结束时间:星期 时 分" << std::endl;
	std::cin >> day2 >> hour2 >> minute2;
	std::cout << "是否需要开始录播? 是否需要结束录播? 完成后是否需要待机?" << std::endl;
	std::cin >> needStart >> needEnd >> needShutOff;

	while (true)
	{
		if (timeManager.isAfterThisTime(day, hour, minute))
			break;
		else
			Sleep(1000);
	}
	if (needStart)
	{
		int code = myfile.readCode();
		if (code > 0)
		{
			mouse.enterMeeting();
			Sleep(100);
			keybd.enterNum(code);
			Sleep(2000);
		}

		mouse.startLuBo();
		Sleep(1500);
		mouse.showMeeting();
		Sleep(1500);
		keybd.hotKeys();
	}

	while (true)
	{
		if (timeManager.isAfterThisTime(day2, hour2, minute2))
			break;
		else
			Sleep(1000);
	}
	if (needEnd)
	{
		keybd.hotKeys();
		Sleep(1000);
		keybd.Esc();
		Sleep(1500);
		mouse.leaveMeeting();
	}

	if (needShutOff)
	{
		std::cout << "60s 后休眠" << std::endl;
		Sleep(60000);
		system("shutdown -h");
	}

	system("pause");
	return 0;
}
/*
进入会议前:
打开会议初始界面
打开会议号界面,并聚焦在文本框上

输入会议号,并进入会议

进入会议后:
将会议界面加入录播界面
最大化会议
开始录播

时间到后: 
停止录播
关闭腾讯会议, 回到腾讯会议初始界面
*/