/***********************************************************************

�б�(���ǹ�)
[if]
- ���α׷��� ���� �帧�� �����ϴ� �� ���.
- �־��� ������ ��/������ ���� �ڵ� ��� ����.
- if�� �ۼ��� ������ ������ ���� ��� ����.

if (����)
{
	- �� ������ ���̸� ����Ǵ� �ڵ�
	- ������ ���̸� {} ���� �ڵ� ����, �����̸� �ǳʶ�.
}

[else]
- ���� if���� �����̸� ����

[else if]
if (���� 1)
{
	// ���� 1�� ���̸� ����
}
else if (���� 2)
{
	// ���� 2�� ���̸� ����
}
else
{
	// ���� 1, 2�� �����̸� ����
}

************************************************************************/

#include <iostream>

int main()
{
	// ���� �Ұ�ȣ ���� ���̸�
	//if (true)
	//{
	//	// ���⸦ ����.
	//	std::cout << "ù��° if�� ��� ��" << std::endl;
	//}

	//std::cout << "if���� ���� �ȵǸ� ���Ⱑ ����" << std::endl;

	//// else
	//if (false)
	//{
	//	std::cout << "�ι�° if��" << std::endl;
	//}
	//if (true)
	//{
	//	std::cout << "����° if��" << std::endl;
	//}
	////else
	////{
	////	// ���� if���� �����̸� ���Ⱑ ����
	////	std::cout << "����° if���� �����̸� ���Ⱑ ����ȴ�." << std::endl;
	////}
	//else if (true)
	//{
	//	// ���� if���� ������ �����̸� ����
	//}

	//if (true)	// ������ ���̸�
	//{
	//	// ����

	//	if (true)	// ���� ������ ���̰�, ������ ���̸� ����
	//	{
	//		// ���� if���� �����ϸ� ����
	//	}
	//}

	//int number;
	//std::cout << "====== ���� �Է� ======" << std::endl;

	//std::cout << "���� �Է�: ";
	//std::cin >> number;			// �Է¹���

	//// �Է¹��� ������ 0���� ũ��
	//if (number > 0)
	//{
	//	// ����
	//	std::cout << "�Է��� ���� ����Դϴ�. number: " << number << std::endl;
	//}
	//if (number < 0)
	//{
	//	// ����
	//	std::cout << "�Է��� ���� �����Դϴ�. number: " << number << std::endl;
	//}

	//std::cout << "====== ���� �Է� ======" << std::endl;

	// ���� �Է¿�
	//int score;

	//std::cin >> score;

	//// �Է¹��� ������ 90���� ���ų� ũ�ٸ�
	//if (score >= 90)
	//{
	//	std::cout << "A����" << std::endl;
	//}
	//else if (score >= 80)
	//{
	//	std::cout << "B����" << std::endl;
	//}
	//else if (score >= 70)
	//{
	//	std::cout << "C����" << std::endl;
	//}
	//else
	//{
	//	std::cout << "F����" << std::endl;
	//}

	// 3~5 ��
	// 6~8 ����
	// 9~11 ����
	// �׿� �ܿ�

	int month;

	std::cout << "1~12 �� ������ �Է��ϼ���: ";
	std::cin >> month;

	if (month <= 0 || month >= 13) 
	{
		std::cout << month << "���� �����ϴ�." << std::endl;
	}
	else
	{
		if (month >= 3 && month <= 5)
		{
			std::cout << month << "���� ���Դϴ�." << std::endl;
		}
		else if (month >= 6 && month <= 8)
		{
			std::cout << month << "���� �����Դϴ�." << std::endl;
		}
		else if (month >= 9 && month <= 1)
		{
			std::cout << month << "���� �����Դϴ�." << std::endl;
		}
		else
		{
			std::cout << month << "���� �ܿ��Դϴ�." << std::endl;
		}
	}

	int input;

	std::cout << "���� �Է�: ";
	std::cin >> input;

	if (input >= 0 && input <= 100)
	{
		if (input >= 60)
		{
			std::cout << "�հ�!!" << std::endl;

			// ����
			if (input >= 90)
			{
				std::cout << "���� A" << std::endl;
			}
		}
	}

	int inputNum;
	std::cin >> inputNum;

	// �Է��� ���� 2�� ���� �������� 0�̸� => ¦��
	if ((inputNum % 2) == 0)
	{

	}
}