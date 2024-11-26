/***************************

[static]

[extern]


***************************/

#include <iostream>

extern int GlovalValue;
extern int staticGValue;

//void Count()
//{
//	static int count = 0;	// �Լ� �� ���� �տ� static: �ʱ�ȭ�� �� �ѹ��� �����
//	count++;
//	std::cout << count << std::endl;
//}


/*

Ŭ���� ���� static ���� �� �Լ�
- Ŭ���� ������ static���� ����� ������ �ش� Ŭ������ ��� �ν��Ͻ����� ����
- �ν��Ͻ� ���� �������� ���Ǵ� ����. Ŭ������ �ν��Ͻ� ���̵� ���� ����.

1. Ŭ���� ���� ��� ����: ��� Ŭ���� �ν��Ͻ��� �����ϴ� ����
 - Ŭ������ ��� �ν��Ͻ��� �ش� ������ ������ ����. 
 - �ϳ��� �ν��Ͻ����� ������ �����ϸ� �ٸ� �ν��Ͻ����� �ݿ���.

2. Ŭ���� ���� ��� �Լ�: Ŭ������ �ν��Ͻ� ���� ȣ���� �� �ִ� �Լ�.
 - ���� ��� �Լ��� Ŭ������ ���� ��� �������� ���� ����.
 - �ν��Ͻ� ��� ������ �Լ����� ���� �Ұ�.

*/

class Count
{
public:
	Count()
	{
		count++;
	}
	static int GetCount()
	{
		return count;
	}
	void Print();
	static int Sum(int a, int b)
	{
		count = 1;

		// num = 1; // �Ϲ� ��� ������ ���� ��� �Լ����� ���� �Ұ���
		GetCount();

		// Print();	// �Ϲ� ��� �Լ��� ���� ��� �Լ����� ���� �Ұ���
	}

private:
	int num;
	static int count;

};

int main()
{
	std::cout << GlovalValue << std::endl;
	//std::cout << staticGValue << std::endl;	// Error

	/*Count();
	Count();*/

	Count c1;
	Count c2;
	Count c3;

	std::cout << c1.GetCount << std::endl;
}