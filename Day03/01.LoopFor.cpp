/********************************************

[for]
- �ݺ� �۾��� ������ �� ���Ǵ� ��� �� �ϳ�.
- �ݺ� Ƚ���� ��Ȯ�ϰų� ������ ��� �ʿ��� �� ����.
- while���� ���� �ڵ�� �̷���� ������ ������ Ƚ����ŭ �ݺ��� �����ϱ⿡ ��.

for (�ʱ�ȭ; ����; ����)
{
	// �ݺ� ���� �ڵ���
}

- �ʱ�ȭ: ������ ���۵� �� ó�� �ѹ��� ����Ǵ� �κ����� �ݺ����� ���� ���� �ʱ�ȭ.
- ����: �� �ݺ��� ����� ������ ������ �˻�Ǹ� ���̸� ������ ��� ����ǰ�, �����̸� ����.
- ����: �� �ݺ��� ���� �� ����Ǵ� �κ����� ������ ����/���ҽ�Ű�鼭 �ݺ� Ƚ���� ����

********************************************/

#include <iostream>

int main()
{
	//std::cout << 0 << std::endl;
	//std::cout << 1 << std::endl;
	//std::cout << 2 << std::endl;
	//std::cout << 3 << std::endl;
	//std::cout << 4 << std::endl;

	//std::cout << std::endl;

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//std::cout << std::endl;

	//for (int i = 10; i >= 1; i--)
	//{
	//	std::cout << i << std::endl;
	//}

	//std::cout << std::endl;

	//// 1~10 �� 5���� ���
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i > 5) break;

	//	std::cout << i << std::endl;
	//}
	//
	//std::cout << std::endl;

	//// 1~10 �� Ȧ���� ���
	//for (int i = 0; i <= 10; i++)
	//{
	//	if (i % 2 == 0) continue;
	//	
	//	std::cout << i << std::endl;
	//}

	//std::cout << std::endl;

	//// 1~50���� �ݺ��ϴµ� 3�� ����� 5�� ������� �˻�
	//for (int i = 1; i <= 50; i++)
	//{
	//	if (i % 3 == 0 || i % 5 == 0) std::cout << i << std::endl;;
	//}

	//std::cout << std::endl;

	//for (int i = 1; i <= 10; i += 2)
	//{
	//	std::cout << i << " ";
	//}

	//std::cout << std::endl;

	//// �Է¹��� ��ŭ ����ϴ� �ڵ�
	//int inputNum;
	//std::cin >> inputNum;

	//for (int i = 0; i < inputNum; i++)
	//{
	//	std::cout << i << " ";
	//}

	//std::cout << std::endl;

	//// 1~100���� ���� ���ϴ� �ڵ�
	//int sum = 1;
	//
	//for (int i = 2; i <= 100; i++)
	//{
	//	sum += i;
	//}

	//std::cout << sum << std::endl;

	//std::cout << std::endl;

	//// ���� for��
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int k = 0; k < 3; k++)
	//	{
	//		std::cout << "i�� ��: " << i << "	  k�� ��: " << k << std::endl;
	//	}
	//}

	/*for (int i = 2; i < 10; i++)
	{
		std::cout << "===== " << i << "�� =====" << std::endl;

		for (int k = 1; k < 10; k++)
		{
			std::cout << i << " * " << k << " = " << i * k << std::endl;
		}

		std::cout << std::endl;
	}*/

	// ���� �Է��� ���ڰ� ������� �˻��ϴ� ���α׷�
	//int numInputs;
	//bool isPositive = true;

	//std::cout << "�Է��� ������ ����: ";
	//std::cin >> numInputs;

	//int number;

	//for (int i = 0; i < numInputs; i++) 
	//{
	//	std::cout << i + 1 << "��° ���ڸ� �Է��ض�: ";
	//	std::cin >> number;

	//	// �Է¹��� ���ڰ� ����� �ƴϸ�
	//	if (number <= 0)
	//	{
	//		isPositive = false;
	//		break;
	//	}
	//}

	//// ��� ���
	//if (isPositive)
	//{
	//	std::cout << "���" << std::endl;
	//}
	//else {
	//	std::cout << "�Է¹��� ���� �� ����� �ƴ� �� ���� ������?" << std::endl;
	//}

	// �� ��� ����


	// 01
	int n1 = 5;	// ����� ���� ��

	for (int i = 0; i <= n1; i++) {
		for (int j = 1; j <= i; j++) {
			// i��ŭ �� ���
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 02
	int n2 = 5;

	for (int i = n2; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 03
	int n3 = 5;

	for (int i = n2; i >= 0; i--) {
		for (int j = 1; j < i; j++) {
			std::cout << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 04
	int n4 = 5;

	for (int i = 0; i <= n4; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
}