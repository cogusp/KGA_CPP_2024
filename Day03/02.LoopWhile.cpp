/**********************

[while]
- ������ ���� ���� Ư�� �ڵ带 �ݺ� �����ϱ� ���� �ݺ���.
- ������ ������ �� ������ �Լ� �ݺ�.
- �Ϲ������� �ݺ� Ƚ���� �̸� �������� �ʾҰų� Ư�� ������ ������ ������ �ݺ��� ��� ���

while (true)
{
	// �� ������ �����ϸ� �ش� �ڵ����� ����
	// ��, ���� ������ �־�߸� �ش� while���� ����.
}

[do-while]
- ������ ������ ���ο� ������� �ڵ����� �ּ� �� ���� �����ؾ��� �� ���

do
{
	// ���� �ڵ�
} while (true);	// do ��� ���� �� ���� ��. ������ ���̸� �ڵ����� �ٽ� ����, �����̸� ����

**********************/

#include <iostream>

int main()
{
	//int num = 0;

	//while (num < 10)
	//{
	//	num++;
	//	std::cout << num << std::endl;
	//}

	//int sum = 0;
	//int num1 = 0;

	//while (true)
	//{
	//	sum += num1;

	//	if (sum > 5000) break;
	//	
	//	num1++;
	//}

	//// 1. �Է��� ���ڸ�ŭ ���
	//std::cout << "���� �Է�: ";
	//int inputNum;
	//std::cin >> inputNum;

	//int cnt = 0;
	//while (cnt < inputNum)
	//{
	//	std::cout << "�Է��� ���ڸ�ŭ ���" << std::endl;
	//	cnt++;
	//}

	// 2. ����ؼ� ������ �Է¹޾� �����Ѵ�. (0 �Է� �� ����)
	/*int inputNum1 = 1;
	int total = 0;

	while (inputNum1 != 0) {
		std::cout << "������ �Է��ϼ���.(0: ����): ";
		std::cin >> inputNum1;
		total += inputNum1;
	}

	std::cout << "����: " << total << std::endl;*/

	int inputNum;
	int total = 0;

	do
	{
		std::cout << "0���� ū ���ڸ� �Է��ض�.(0: ����): ";
		std::cin >> inputNum;
		total += inputNum;
	} while (inputNum != 0);

	std::cout << "����: " << total << std::endl;

	int i = 0;

	std::cout << "== while�� ==" << std::endl;
	while (i > 0) {
		std::cout << "�� �޼����� ��µ��� �ʴ´�." << std::endl;
	}

	std::cout << "== do-while�� ==" << std::endl;
	do
	{
		std::cout << "�� �޼����� �ּ� �� �� ��µȴ�." << std::endl;
	} while (i > 0);

	srand(time(0));
	int random = rand() % 3 + 1;	// 0, 1, 2

	std::cout << random << std::endl;
}