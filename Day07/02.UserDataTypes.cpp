/*********************************

[����ü]
- ���� ���� ������ ���� �ϳ��� ������ ������ �����ϴ� ����� ���� ������ ����
- ������ ������ ����� ������ �̷��� ������� ���� �ٸ� ������ Ÿ���� �� �ִ�.
- C++������ �Լ��� ���� ����.

[����ü ����]
// (Ű����) (����ü �̸�)
struct MyStruct
{
	// ��� ����
};

*********************************/

#include <iostream>

// �л��� ���õ� ����
struct Student
{
	int age;			// ����
	int phoneNum;		// ��ȭ��ȣ
	std::string name;	// �̸�
};

struct Point
{
	int x;
	int y;

	void Pirnt();		// C++������ �Լ��� ����� ����
};

// ����ü Padding
struct Test
{
	short s;	// 2
	char c;		// 1
	int i;		// 7
};

int main()
{
	Student st;

	st.name = "������";
	st.age = 10;
	st.phoneNum = 1234;

	std::cout << "�̸�: " << st.name << std::endl;
	std::cout << "����: " << st.age << std::endl;
	std::cout << "��ȭ��ȣ: " << st.phoneNum << std::endl;

	Point p;

	p.x = 10;
	p.y = 20;

	std::cout << "����ü p.x�� ��: " << p.x << std::endl;
	std::cout << "����ü p.y�� ��: " << p.y << std::endl;
	// ����ü Point�� ��� �Լ�
	p.Pirnt();

	Point p1 = { 50,102 };		// ������ ���ÿ� �ʱ�ȭ
	std::cout << "����ü p.x�� ��: " << p1.x << std::endl;
	std::cout << "����ü p.y�� ��: " << p1.y << std::endl;

	Person person[3];
	person[0].name = "ȫ�浿";
	person[0].phoneNumber = "010-1234";
	person[0].age = 20;

	person[1].name = "ȫ�漭";
	person[1].phoneNumber = "010-9876";
	person[1].age = 37;

	person[2].name = "ȫ�泲";
	person[2].phoneNumber = "010-5555";
	person[2].age = 50;

	// ���
	Person person1[3] = {
		{"ȫ�浿", "010", 50},
		{"ȫ�泲", "019", 60},
		{"ȫ�漭", "015", 30},
	};

	for (int i = 0; i < 3; i++)
	{
		std::cout << person[i].name << ", " << person[i].phoneNumber 
			<< ", " << person[i].age << std::endl;
	}
}

void Point::Pirnt()
{
	std::cout << "Point ����ü�� ��� �Լ�" << std::endl;
}

struct Person
{
	std::string name;
	std::string phoneNumber;
	int age;
};
