#include"fileUse.h"
#include"my_keybd_event.h"
#include"my_mouse_event.h"
#include"my_time.h"
#include<iostream>

// �������
int main()
{
	my_keybd_event keybd;
	my_mouse_event mouse;
	my_time timeManager;
	fileUse myfile;
	int day, hour, minute, day2, hour2, minute2, needStart, needEnd,needShutOff;

	std::cout << "���뿪ʼʱ��:���� ʱ ��" << std::endl;
	std::cin >> day >> hour >> minute;
	std::cout << "�������ʱ��:���� ʱ ��" << std::endl;
	std::cin >> day2 >> hour2 >> minute2;
	std::cout << "�Ƿ���Ҫ��ʼ¼��? �Ƿ���Ҫ����¼��? ��ɺ��Ƿ���Ҫ����?" << std::endl;
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
		std::cout << "60s ������" << std::endl;
		Sleep(60000);
		system("shutdown -h");
	}

	system("pause");
	return 0;
}
/*
�������ǰ:
�򿪻����ʼ����
�򿪻���Ž���,���۽����ı�����

��������,���������

��������:
������������¼������
��󻯻���
��ʼ¼��

ʱ�䵽��: 
ֹͣ¼��
�ر���Ѷ����, �ص���Ѷ�����ʼ����
*/