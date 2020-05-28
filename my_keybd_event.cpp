#include "my_keybd_event.h"

// 向腾讯会议输入会议号,要求已经聚焦在输入框内
void my_keybd_event::enterNum(int num)
{
    int curr, ten = 100000000;
    Sleep(100);
    for (int i = 0; i < 9; i++)
    {
        curr = num / ten;
        num %= ten;
        ten /= 10;
        keybd_event(48 + curr, 0, 0, 0);
        keybd_event(48 + curr, 0, KEYEVENTF_KEYUP, 0);
        Sleep(100);
    }
    keybd_event(13, 0, 0, 0);
    keybd_event(13, 0, KEYEVENTF_KEYUP, 0);
}

// 开始/结束录播的快捷键
void my_keybd_event::hotKeys()
{
	keybd_event(17, 0, 0, 0);
	Sleep(100);
	keybd_event(16, 0, 0, 0);
	Sleep(100);
	keybd_event(76, 0, 0, 0);
	keybd_event(76, 0, KEYEVENTF_KEYUP, 0);
	Sleep(100);
	keybd_event(16, 0, KEYEVENTF_KEYUP, 0);
	Sleep(100);
	keybd_event(17, 0, KEYEVENTF_KEYUP, 0);
	Sleep(100);
}

void my_keybd_event::Esc()
{
    keybd_event(VK_ESCAPE, 0, 0, 0);
    keybd_event(VK_ESCAPE, 0, KEYEVENTF_KEYUP, 0);
    Sleep(100);
}