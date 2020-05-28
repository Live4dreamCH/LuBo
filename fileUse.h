#pragma once
#include <fstream>
#include <iostream>
class fileUse
{
public:
	//读取文件, 文件打开失败返回-2, 没有现有的会议号返回-1,没读到数字返回0, 读取到了返回9位数
	int readCode();
};
