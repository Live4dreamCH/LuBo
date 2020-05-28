#include "my_mouse_event.h"

void my_mouse_event::myClickLeft(int x, int y)
{
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);  //�������
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);    //�ɿ����
}

void my_mouse_event::myClickLeft(int axis[])
{
    int x = axis[0], y = axis[1];
    myClickLeft(x, y);
}
/*
״̬��: ���½�1535, 863 ��Ѷ����173, 845 ֱ����220, 845 (����)
����: ��Ѷ����35, 35 ֱ����35, 135
ֱ������: �༭ͼ��190, 126 ȷ��ͼ��715, 505 ��ʼ/��ͣctrl+shift+L
��Ѷ������: �������633, 201 �۽������890, 184(��˫��) ȫ��1222, 147 �رջ������1242, 127 ȷ���뿪����817, 474

Ĭ�Ͽ�ʼʱ�Ѵ���Ѷ�����ʼ�����Լ�¼����, ¼�������
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