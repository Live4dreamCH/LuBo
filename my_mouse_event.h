#pragma once
#include <windows.h>
#include"my_keybd_event.h"
/*
状态栏: 右下角1535, 863 腾讯会议173, 845 直播姬220, 845 (单击)
桌面: 腾讯会议35, 35 直播姬35, 135
直播姬内: 编辑图层190, 126 确定图层715, 505 开始/暂停ctrl+shift+L
腾讯会议内: 加入会议633, 201 聚焦输入框890, 184(需双击) 全屏1222, 147 关闭会议界面1242, 127 确认离开会议840, 474

默认开始时已打开腾讯会议初始界面以及录播姬, 录播姬最大化
*/
class my_mouse_event
{
	int clear[2] = { 1535, 863 }, meetingOnce[2] = { 173, 845 }, liveOnce[2] = { 220, 845 };
	int deskMeet[2] = { 35, 35 }, deskLive[2] = { 35, 135 };
	int edit[2] = { 190, 126 }, sure[2] = { 715, 505 };
	int enterMeet[2] = { 633, 201 }, focus[2] = { 890, 184 }, fullScreen[2] = { 1222, 147 }, closeMeet[2] = { 1242,127 }, ensureLeave[2] = { 840, 474 };
	void myClickLeft(int x, int y);
	void myClickLeft(int axis[]);
public:
	//将会议界面加载进录播界面内
	void startLuBo();
	//打开会议初始界面
	//打开会议号界面, 并聚焦在文本框上
	void enterMeeting();
	//最大化会议
	void showMeeting();
	//离开会议,回到腾讯会议初始界面
	void leaveMeeting();
};

