#pragma once
#include <windows.h>
class my_keybd_event
{
public:
    // 向腾讯会议输入会议号,要求已经聚焦在输入框内,并且最终回车进入会议界面(里面没写等待,实际上要加载一段时间)
    void enterNum(int num);
    // 开始/结束录播的快捷键
    void hotKeys();
    void Esc();
};

