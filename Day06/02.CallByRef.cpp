/******************************************************

[callbyValue]

[callbyReference]

[*�� &�� ���� ���]
- *�� ������ �޸� �ּҸ� ����. �Լ� ���ο��� �����͸� ���� ���� ����
- �Լ� ȣ�� �� ������ �ּҸ� ��������� ����.

- &�� ������ ��Ī�� �����ϸ�, �Լ� ���ο��� ���� ���� ����
- �Լ� ȣ�� �� ������ ������ �Ͻ������� ����.

******************************************************/

#include <iostream>

// �Լ��� �μ��� ������ ��, �μ��� ���� ����Ǿ� �Լ��� �Ű������� ����.
// ���� �Լ� ���ο��� �Ű������� �����ϴ����, ȣ���� �Լ��� ���� �μ��� ������ ����.
// �Ű����� n�� ������ ���޵� ������ ���� ����޴´�.
// ���� �Լ� ������ n�� ���� �����ص�, main �Լ����� ���޵� ���� �������� ������ ����.
void Value(int n);

// �Լ� ȣ�� �� �μ��� ������ �ּҸ� �����ϴ� ���
// �Լ��� �Ű������� ���� �����͸� ���� ���� �μ��� ���� ���� ������ �� ����.
// �Լ� ���ο��� �Ű������� ���� �����ϸ�, ȣ���� �Լ��� ���� �μ��� �����.
// ���� �����ϴ� ��� �ּҸ� �����ϹǷ� �޸𸮿� ���� ȿ���� ����.
// �����ͷ� ������ �ּҸ� ����
// �����͸� ���� ���� ������ ����� �޸� ��ġ�� ���� �����Ͽ� ���� ������ �� �ִ�.
void Address(int* n);

// �Լ� ȣ�� �� �μ��� ������ ����(����)�� ����
// �Լ��� �ش� ������ ���� ���� �μ��� �����Ͽ� ���� ���� ������ �� �ִ�.
// ������ ����ϸ� �޸� �ּҸ� ���� �ٷ��� �ʾƵ� �Ǳ� ������ �����ϴ�.
void Reference(int& n);

// ���޵� �� ������ ���� ��ȯ�Ϸ��� ������ ���� ���� ���̹Ƿ� ������ ȣ���� �Լ��� ���� ������� �ʴ´�.
void Swap(int a, int b);

// �ּҸ� ����Ͽ� ������ ���� ����
// ������ �ּҸ� ���޹޾� �� �ּ��� ���� �ٲٹǷ�, ���� ������ ���� ����ȴ�.
void SwapAddr(int* a, int* b);

// ������ ����Ͽ� ���� ���� ����
// ������ ������ �޾Ƽ� ������ ���� �ٲٴ� ������� ���� ���� ��ó�� ���������� ���� ������ ����ȴ�.
void SwapRef(int& a, int& b);

int main()
{
	//int num = 30;
	//Value(num);		// n = num ���·� ����
	//std::cout << "num�� ��: " << num << std::endl;
	//std::cout << "num�� �ּ� ��: " << &num << std::endl;

	//std::cout << std::endl;

	//int num1 = 30;
	//Address(&num1);		// 
	//std::cout << "num1�� ��: " << num << std::endl;
	//std::cout << "num1�� �ּ� ��: " << &num << std::endl;

	//std::cout << std::endl;

	//int num2 = 30;
	//Reference(num2);		// 
	//std::cout << "num2�� ��: " << num << std::endl;
	//std::cout << "num2�� �ּ� ��: " << &num << std::endl;

	int num1 = 10;
	int num2 = 20;

	std::cout << "Swap �� ������: " << num1 << ", " << num2 << std::endl;
	Swap(num1, num2);
	std::cout << "Swap �� ������: " << num1 << ", " << num2 << std::endl;

	std::cout << std::endl;

	int num3 = 10;
	int num4 = 20;

	std::cout << "Swap �� ������: " << num3 << ", " << num4 << std::endl;
	SwapAddr(&num3, &num4);
	std::cout << "Swap �� ������: " << num3 << ", " << num4 << std::endl;

	std::cout << std::endl;

	int num5 = 10;
	int num6 = 20;

	std::cout << "Swap �� ������: " << num5 << ", " << num6 << std::endl;
	SwapRef(num5, num6);
	std::cout << "Swap �� ������: " << num5 << ", " << num6 << std::endl;

	std::cout << std::endl;
}

void Value(int n)
{
	// n�� 10���� ����������, �� ������ �Լ� ���ο����� ����
	n = 10;

	std::cout << "(Value) n�� ��: " << n << std::endl;
	std::cout << "(Value) n�� �ּ� ��: " << &n << std::endl;
}

void Address(int* n)
{
	// ������
	// n�� ����Ű�� �ּ��� ���� 10���� ���� -> ���� ������ �����.
	*n = 10;

	std::cout << "(Address) n�� ��: " << *n << std::endl;
	std::cout << "(Address) n�� �ּ� ��: " << &n << std::endl;
}

void Reference(int& n)
{
	n = 10;

	std::cout << "(Reference) n�� ��: " << n << std::endl;
	std::cout << "(Reference) n�� �ּ� ��: " << &n << std::endl;
}

void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	std::cout << "(Value) Swap() ������ ��: ";
	std::cout << a << ", " << b << std::endl;
}

void SwapAddr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	//std::cout << "(Address) Swap() ������ ��: ";
	//std::cout << a << ", " << b << std::endl;
}

void SwapRef(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	//std::cout << "(Reference) Swap() ������ ��: ";
	//std::cout << a << ", " << b << std::endl;
}

// �������� ����
class A {

};

// �������� ����
struct  MyStruct
{

};

struct  Character
{
	// ĳ���Ϳ� ���õ� ����...
};

// Ŭ������ ����ü �� �����Ͱ� ū �͵��� ������ ��, ������ �ּҸ� ���
// ����ȭ
void FightFunction(Character* a, Character& b)
{
	
}