#include <iostream>

int main()
{
	// ���� 01
	int num1;
	int num2;

	std::cout << "�� ������ �Է��ϼ���. :";
	std::cin >> num1 >> num2;

	// ���� 01-1: ��Ģ���� ���α׷�
	///*
	std::cout << "�� ������ ��Ģ������ �����մϴ�." << std::endl;

	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
	//*/

	// ���� 01-2: �� ���� �� �� ����
	///*
	if (num1 > num2)
	{
		std::cout << "ù��° ���� ũ�Ƿ� �� ���� ���� ���� " << num1 + num2 << "�Դϴ�." << std::endl;
	}
	else if (num1 < num2)
	{
		std::cout << "�ι�° ���� ũ�Ƿ� �� ���� �� ���� " << num1 - num2 << "�Դϴ�." << std::endl;
	}
	else {
		std::cout << "�� ���� �����ϴ�." << std::endl;
	}
	//*/
}