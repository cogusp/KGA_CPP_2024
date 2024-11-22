/*********************************

�ڷ���(Data Type)
- �ڷ�(Data)�� ���� ����
- �����Ͱ� �޸𸮿� ����Ǵ� ���¿� ó���Ǵ� ����� ����ϴ� ����
- 0,1�θ� ������ ��ǻ�Ϳ��� ���� ������ �ڷḦ �����ϱ� ����.

����
- ���� ������ �� �ִ� �޸� ������ �ٿ��� �̸�
- ������ �����ϸ� �޸� ������ �Ҵ�, �Ҵ�� �޸� ������ �̸��� �ٴ´�.

[������ �̸�]
- ������ �̸��� ���� �Ҵ�� �޸� ������ ���� ����
- ���� ������ ���� �ְ�, ����� ���� ������ ���� ����.

[���� ���� �� ���ǻ���]
1. ���� �̸��� ���ĺ�, ����, ������ھ�� ����
2. ��ҹ��� ����
3. ���ڷ� ������ �� ����, Ű����(�̹� ������ ��)�� ��� X
4. ���� X
5. Ư������ X
6. �ݵ�� �ǹ��ִ� �̸����� ���

**********************************/

/*********************************

����
1. �ڷ��� ����(unsigned�� ����)
2. ����, �Ǽ� ���� ���� �� ���
3. �ڷ��� ũ�� ���

�ڷ��� �̸�			����		ũ��(byte)			����	

-����-
bool				��			1			false/true

-������-
short								2
int									4
long								8

-�Ǽ���-
float								4
double								8

-������-
char								1

**********************************/

#include <iostream>

int main()
{
	short sNum = 1;
	std::cout << "short: " << sNum << std::endl;

	int iNum = 2;
	std::cout << "int: " << iNum << std::endl;

	long lNum = 3;
	std::cout << "long: " << lNum << std::endl;

	float fNum = 1.1;
	std::cout << "float: " << fNum << std::endl;

	double dNum = 1.2;
	std::cout << "double: " << dNum << std::endl << std::endl;

	std::cout << "bool �� ũ��: " << sizeof(bool) << " ����Ʈ" << std::endl;
	std::cout << "short �� ũ��: " << sizeof(short) << " ����Ʈ" << std::endl;
	std::cout << "int �� ũ��: " << sizeof(int) << " ����Ʈ" << std::endl;
	std::cout << "long �� ũ��: " << sizeof(long) << " ����Ʈ" << std::endl;
	std::cout << "float �� ũ��: " << sizeof(float) << " ����Ʈ" << std::endl;
	std::cout << "double �� ũ��: " << sizeof(double) << " ����Ʈ" << std::endl;
	std::cout << "char �� ũ��: " << sizeof(char) << " ����Ʈ" << std::endl;
}