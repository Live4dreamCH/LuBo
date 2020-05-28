#include "my_mouse_event.h"

void my_mouse_event::myClickLeft(int x, int y)
{
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);  //按下左键
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);    //松开左键
}

void my_mouse_event::myClickLeft(int axis[])
{
    int x = axis[0], y = axis[1];
    myClickLeft(x, y);
}
/*
状态栏: 右下角1535, 863 腾讯会议173, 845 直播姬220, 845 (单击)
桌面: 腾讯会议35, 35 直播姬35, 135
直播姬内: 编辑图层190, 126 确定图层715, 505 开始/暂停ctrl+shift+L
腾讯会议内: 加入会议633, 201 聚焦输入框890, 184(需双击) 全屏1222, 147 关闭会议界面1242, 127 确认离开会议817, 474

默认开始时已打开腾讯会议初始界面以及录播姬, 录播姬最大化
    int clear[2] = { 1535, 863 }, meetingOnce[2] = { 173, 845 }, liveOnce[2] = { 220, 845 };
    int deskMeet[2] = { 35, 35 }, deskLive[2] = { 35, 135 };
    int edit[2] = { 190, 126 }, sure[2] = { 715, 505 };
    int enterMeet[2] = { 633, 201 }, focus[2] = { 890, 184 }, fullScreen[2] = { 1222, 147 }, closeMeet[2] = { 1242,127 }, ensureLeave[2] = { 817, 474 };
*/
void my_mouse_event::startLuBo()
{
    myClickLeft(clear);
    Sleep(500);
    myClickLeft(meetingOnce);
    Sleep(1000);
    myClickLeft(liveOnce);
    Sleep(1000);
    myClickLeft(edit);
    Sleep(1000);
    myClickLeft(sure);
}

void my_mouse_event::enterMeeting()
{
    myClickLeft(clear);
    Sleep(500);
    myClickLeft(meetingOnce);
    Sleep(1000);
    myClickLeft(enterMeet);
    Sleep(1000);
    myClickLeft(focus);
    Sleep(100);
    myClickLeft(focus);
}

void my_mouse_event::showMeeting()
{
    myClickLeft(clear);
    Sleep(500);
    myClickLeft(meetingOnce);
    Sleep(1500);
    SetCursorPos(fullScreen[0], fullScreen[1]);
    Sleep(500);
    myClickLeft(fullScreen);
}

void my_mouse_event::leaveMeeting()
{
    myClickLeft(clear);
    Sleep(1000);
    myClickLeft(meetingOnce);
    Sleep(1000);
    myClickLeft(closeMeet);
    Sleep(1000);
    myClickLeft(ensureLeave);
}