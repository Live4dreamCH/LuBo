#pragma once
#include <windows.h>
#include"my_keybd_event.h"
/*
״̬��: ���½�1535, 863 ��Ѷ����173, 845 ֱ����220, 845 (����)
����: ��Ѷ����35, 35 ֱ����35, 135
ֱ������: �༭ͼ��190, 126 ȷ��ͼ��715, 505 ��ʼ/��ͣctrl+shift+L
��Ѷ������: �������633, 201 �۽������890, 184(��˫��) ȫ��1222, 147 �رջ������1242, 127 ȷ���뿪����840, 474

Ĭ�Ͽ�ʼʱ�Ѵ���Ѷ�����ʼ�����Լ�¼����, ¼�������
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
	//�����������ؽ�¼��������
	void startLuBo();
	//�򿪻����ʼ����
	//�򿪻���Ž���, ���۽����ı�����
	void enterMeeting();
	//��󻯻���
	void showMeeting();
	//�뿪����,�ص���Ѷ�����ʼ����
	void leaveMeeting();
};

