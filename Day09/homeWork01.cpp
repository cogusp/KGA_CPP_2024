/*
���� - ���
���� Ŭ����
 - ����� ������ ����

1. ���� Ŭ����
 - ��ų 2��

2. �÷��̾� Ŭ����
 - ��ų 2��

��� : �⺻���� Status, ������ ��� �Լ� Ȱ��

*/

#include <iostream>

using namespace std;

class Unit
{
protected:
	string name;
	int health;
public:
	Unit(const string& n, const int h) : name(n), health(h) 
	{
		cout << name << "��/�� �����Ǿ����ϴ�." << endl;
	}

	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "��/�� " << damage << "��ŭ �������� �Ծ����ϴ�. ";
		cout << name << "�� ü�� : " << health << endl;
	}

	void PrintStatus() 
	{
		cout << "------" << name << "�� ���� ����" << "------" << endl;
		cout << "ü�� : " << health << endl;
	}
};

class Monster : public Unit
{
public:
	Monster(const string& n, const int h) : Unit(n, h) 
	{
		cout << "���� �̸� : " << name << ", ü�� : " << health << endl;
	}

	void AttackFire()
	{
		cout << "���� " << name << "��/�� �� ������ ����մϴ�." << endl;
	}

	void AttackVol()
	{
		cout << "���� " << name << "��/�� ȭ�� ������ ����մϴ�." << endl;
	}
};

class Player : public Unit
{
public:
	Player(const string& n, const int h) : Unit(n, h) 
	{
		cout << "�÷��̾� �̸� : " << name << ", ü�� : " << health << endl;
	}

	void AttackWater()
	{
		cout << "�÷��̾� " << name << "��/�� �� ������ ����մϴ�." << endl;

	}
	void AttackIce()
	{
		cout << "�÷��̾� " << name << "��/�� ���� ������ ����մϴ�." << endl;

	}
};


int main()
{
	Monster* m = new Monster("���̸�", 100);
	Player* p = new Player("����", 100);

	cout << endl;
	m->PrintStatus();
	p->PrintStatus();

	cout << endl;
	m->AttackFire();
	p->TakeDamage(10);

	cout << endl;
	m->PrintStatus();
	p->PrintStatus();

	cout << endl;
	m->AttackVol();
	p->TakeDamage(20);

	cout << endl;
	m->PrintStatus();
	p->PrintStatus();

	cout << endl;
	p->AttackWater();
	m->TakeDamage(10);

	cout << endl;
	m->PrintStatus();
	p->PrintStatus();

	cout << endl;
	p->AttackIce();
	m->TakeDamage(30);

	cout << endl;
	m->PrintStatus();
	p->PrintStatus();

	delete m;
	delete p;
	m = nullptr;
	p = nullptr;

	return 0;
}