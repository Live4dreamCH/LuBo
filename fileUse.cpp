#include "fileUse.h"

//��ȡ�ļ�, �ļ���ʧ�ܷ���-2, sû�����еĻ���ŷ���-1,û�������ַ���0, ��ȡ���˷���9λ��
int fileUse::readCode()
{
	std::ifstream input;
	input.open("meetingCode.txt", std::ios::in);
	if (!input)
	{
		std::cout << "fail to open meetingCode.txt!" << std::endl;
		input.close();
		return -2;
	}
	std::cout << "succeed in opening meetingCode.txt!" << std::endl;
	int num = 0;
	input >> num;
	if (num == -1)
	{
		std::cout << "no code avalible now!" << std::endl;
		input.close();
		return -1;
	}
	else if (num == 0)
	{
		std::cout << "did not read a number!" << std::endl;
		input.close();
		return 0;
	}
	else
	{
		std::cout << "read code: " << num << std::endl;
		input.close();
		std::ofstream output;
		output.open("meetingCode.txt", std::ios::trunc);
		if (!output)
		{
			std::cout << "open failed when writing -1!" << std::endl;
			output.close();
			return -2;
		}
		output << -1;
		std::cout << "rewrite -1 successfully!" << std::endl;
		output.close();
		return num;
	}

}

