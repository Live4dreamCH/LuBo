#pragma once
#include <windows.h>
class my_keybd_event
{
public:
    // ����Ѷ������������,Ҫ���Ѿ��۽����������,�������ջس�����������(����ûд�ȴ�,ʵ����Ҫ����һ��ʱ��)
    void enterNum(int num);
    // ��ʼ/����¼���Ŀ�ݼ�
    void hotKeys();
    void Esc();
};

