/***************************************

[������ ���� �Ⱓ�� ���� ����]
- ������ ���� ��ġ�� ���� ũ�� ���� ������ ���� ������ ����.
- �޸𸮻� �����ϴ� �Ⱓ�� ������ �� �ִ� ������ ���� ���̰� ����.

[���� ����]
- �߰�ȣ ���� ����Ǵ� ����
- Ȱ�� ������ ������ ����� ��� �������� ��ȿ, ����� ������ ���� ������ �޸𸮿��� �����.

[���� ����]
- ��� �ܺο��� ����. ���α׷� ��ü�� ���� ����.
- ���α׷� �� ��� �Լ����� ���� ����
- ���α׷� ���� ���� �� ����, ���α׷��� ����Ǹ� �Ҹ�.
- �����ؾ� ��. (���α׷� �������� ���������� ���� -> ���� �� ����, ������� �����)

***************************************/

#include <iostream>

// ���� ����
int GlobalVariableNum = 10;

void GlobalVariable()
{
	std::cout << "���� ����! " << GlobalVariableNum << std::endl;
}

void LocalVariable()
{
	int num = 1;
	{
		num = 2;

		int num1 = 5;
	}
	//num1 = 1;		// ���� �Ұ���
}

void MyFucOne()
{
	int myFuncOneNum = 10;
	myFuncOneNum++;
	std::cout << "�������� myFuncOneNum�� ������: " << myFuncOneNum << std::endl;
}

void MyFucTwo()
{
	int num1 = 10;
	int num2 = 10;
	num1++;
	num2++;
	std::cout << "�������� num1�� ������: " << num1 << std::endl;
	std::cout << "�������� num2�� ������: " << num2 << std::endl;
}

int Sum(int a, int b)
{
	a = 5;
	return a + b;	
}

int main()
{
	MyFucOne();
	MyFucTwo();

	std::cout << GlobalVariableNum << std::endl;

	// ������ ����
	const int a = 1;

	return 0;
}