/******************************************
[���]
 - �ڽ� Ŭ������ �θ� Ŭ������ �Ӽ��̳� �޼ҵ带 ������ ���ų� �������Ͽ� ����� �� ����.
 - ������ ����� ���� Ŭ������ ���� ���� ���� �ٸ� Ŭ������ Ȯ��.

[��� ���迡���� ������, �Ҹ��� ȣ�� ����]
 - ������ : �θ� ���� / �Ҹ��� : �ڽ� ����

 C++���� �ڽ� Ŭ������ �����ڰ� ȣ���� �Ƿ��� ����, �θ� Ŭ������ �����ڰ� ȣ��Ǿ�� ��.
 -> �θ� Ŭ������ ��� ������ �ʱ�ȭ�� ���Ŀ� �ڽ� Ŭ������ �����ڰ� ����Ǿ�� ��.

 �Ҹ��ڴ� �ڽ� Ŭ���� ���� ȣ��.

[is-a / has-a]
 - ����� �����̴�. -> is-a -> ��� ����
 - �ڵ����� ������ ������ �ִ� -> has-a -> ��� X -> ���� ����

 ���� ��� ����

*******************************************/


#include <iostream>
using namespace std;

#pragma region ����� �� ���� ��
//class Warrior
//{
//private:
//	string name;
//	int health;
//
//public:
//	Warrior(const string& n, const int h) : name(n), health(h) {}
//
//	void Attack()
//	{
//		cout << "Į ����" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "�� " << damage << "��ŭ ���̹����� �Ծ���. ���� ü�� : " << health << endl;
//	}
//};
//
//class Mage
//{
//private:
//	string name;
//	int health;
//
//public:
//	Mage(const string& n, const int h) : name(n), health(h) {}
//
//	void Attack()
//	{
//		cout << "���̽��� �߻�" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "�� " << damage << "��ŭ ���̹����� �Ծ���. ���� ü�� : " << health << endl;
//	}
//};
#pragma endregion

class Character
{
public:
	string name;
	int health;

	Character(const string& n, const int h) : name(n), health(h)
	{
		cout << "�θ� Ŭ���� character ������ ȣ��" << endl;
	}
	
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "��/�� " << damage << "��ŭ ���̹����� �Ծ���. ���� ü�� : " << health << endl;
	}

};

// ��� -> �Ļ�Ŭ����/�ڽ�Ŭ����
class Warrior : public Character
{
public:
	Warrior(const string& n, const int h) : Character(n, h)   // �θ� Ŭ������ ��� ������ �ʱ�ȭ ����.
	{
		cout << "�ڽ� Ŭ���� ������ ������ ȣ��" << endl;
	}	

	void Skill()
	{
		cout << "Į�� �ֵθ�" << endl;
	}
	
};

class Mage : public Character
{
public:
	Mage(const string& n, const int h) : Character(n, h) 
	{
		cout << "�ڽ� Ŭ���� ���� ������ ȣ��" << endl;
	}

	void Skill()
	{
		cout << "�ذ� ��ȯ" << endl;
	}
};

int main() 
{
	Warrior* w = new Warrior("�丣", 100);
	w->Skill();
	w->TakeDamage(10);

	Mage* m = new Mage("������", 209);
	m->Skill();
	m->TakeDamage(20);

	return 0;
}