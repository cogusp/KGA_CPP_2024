/**************************************************

[�Լ�]
- ���Ǳ⿡ ����
- Ư�� �۾��� �����ϴ� �ڵ��� ����
- �ڵ��� ������, ������ �����ϱ� ����.
- ū ���α׷��ϼ��� �����̳� ���������� ���� �ʱ⿡ ��� ���� ����ȭ�ϴ� ���� �߿�
- �ڵ��� ���뼺�� ����.
- �Լ� �̸��� ���� �ڵ��� �ǹ̸� �����ϱ� ����.

[�Լ��� ����]
- �Ű������� ��ȯ���� ������ ���� 4���� ���·� ����.
- �Ű����� o ��ȯ�� o
- �Ű����� o ��ȯ�� x
- �Ű����� x ��ȯ�� o
- �Ű����� x ��ȯ��	 x

[����]

// [��� ����(��ȯ)] [�Լ� �̸�] [�Է� ����(�Ű�����, �Ķ����)]
int Sum(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

1. �Ű����� x, y�� �޾� Sum() ����� �����ϰ� int������ ��ȯ
2. �Է� ����: �Է� ���·� ������ ������ �Ű�����, �Ķ���Ͷ�� ��.�� �̻��� �Ű������� ������
			  �ʿ䰡 ���� ��, �޸��� ����.
3. �Լ��� ���: �ش� �Լ� ������ �Է� ����(�Ű�����, �Ķ����)�� ���� ���� result�� �����ϰ�,
				result�� ��ȯ.

**************************************************/

#include <iostream>

// �Ű����� o ��ȯ�� o
int Sum(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

// �Ű����� o ��ȯ�� x
void Print(int num)
{
	std::cout << num << std::endl;
}

// �Ű����� x ��ȯ�� o
int ReadNum()
{
	int num;
	std::cin >> num;
	return num;
}

// �Ű����� x ��ȯ�� x
void MyPrint()
{
	std::cout << "Empty" << std::endl;
}

// ������ ����(������Ÿ��)�ϰ� �� ������ �Ʒ��� �ۼ�.
// �������� ������.
// ������Ͽ� �Լ� ����, ���� ������ cpp�� �ۼ�.
void MyPrint1();

int main()
{
	// 1.
	int result;
	result = Sum(1, 2);
	std::cout << result << std::endl;

	// 2.
	Print(5);

	// 3.
	int result1;
	result1 = ReadNum();
	std::cout << result1 << std::endl;

	// 4.
	MyPrint();


	return 0;
}

void MyPrint1()
{
	std::cout << "This is MyPrint1" << std::endl;
}


//#include <iostream>
//
//int Add(int a, int b);
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a + b;
//
//	std::cout << c << std::endl;
//
//	return 0;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}