/*********************************

[������ ��� �ʱ�ȭ ����Ʈ]
- ��� ������ ������ ������ ����Ǳ� ���� �ʱ�ȭ
- ������ �Ű����� �ڿ� ����. 
- �ݷ����� ������ ���� �ʱ�ȭ�� �� ������ ��ǥ�� ����.
- ���� ���� �� �������� ����!!

[Getter / Setter]
- ��� ������ private���� �����ϰ�, �ܺο��� �������� ������ ����.
- ��ü�� �����͸� ��ȣ�ϰ�, �ܺο��� �������̽��� ����.

1. Getter
 - �б� �������� ��� ������ ���� ��ȯ
 - const�� �Լ� �ڿ� �ٿ� ��� ������ ������ ����

2. Setter
 - ��� ���� ���� ����

*********************************/

#include <iostream>

class A {

public:
	A() {
		// ������ ����
		// ��� ���� �ʱ�ȭ
	}
};

class Monster
{
public:
	std::string mName;
	int mAtk;
	int mHealth;

	Monster(const std::string& monsterName, int monsterAtk, int monsterHealth)
		:mName(monsterName), mAtk(monsterAtk), mHealth(monsterHealth)
	{
		// ���⼭ �ʱ�ȭ�� �ʿ� ����
		//Init();
	}

	// ��� ���� ���� ��Ÿ ������ �ʱ�ȭ�� ���
	//void Init();
};

class Exam
{
public:
	const int num;

	// ���� ����
	int& score;

	//Exam()
	//{
	//	// num = 1; // Error
	//	score = 2;
	//}

	Exam(int num, int score) : num(num), score(score) {}
};

class Person
{
private:
	std::string mName;
	int mAge;
public:
	std::string GetName()const { return mName; }
	void SetName(const std::string& name)
	{
		mName = name;
	}
	int GetAge()const { return mAge; }
	void SetAge(const int age) { mAge = age; }
};

int main()
{
	Monster* m = new Monster("���", 10, 20);

	Person p;
	p.SetName("����");
	p.SetAge(10);

	std::cout << "�̸�: " << p.GetName() << std::endl;
	std::cout << "����: " << p.GetAge() << std::endl;
}