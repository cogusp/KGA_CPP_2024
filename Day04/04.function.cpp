#include <iostream>

int Sum(int a, int b)
{
	return a + b;
}

// ��ũ��: ������ ���� ����
// ��ũ�� �Լ�: ���ڸ� ������ �� �ִ� ��ũ�� -> ���� ��õ
#define SQUARE(x) (x*x)
//#define NUM 5

const int NUM = 5;

int main()
{
	//int a = Sum(1, 2);
	// int a = 1 + 2;

	std::cout << SQUARE(5) << std::endl;		// #define SQUARE(x) ((x)*(x)) -> ((5)*(5))
	std::cout << SQUARE(5 + 1) << std::endl;

	int a = 5;
	int res = SQUARE(a + 1);					// 11
	std::cout << res << std::endl;

	std::cout << NUM << std::endl;
}