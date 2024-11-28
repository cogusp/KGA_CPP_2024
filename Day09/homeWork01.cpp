/*
과제 - 상속
유닛 클래스
 - 공통된 데이터 제공

1. 몬스터 클래스
 - 스킬 2개

2. 플레이어 클래스
 - 스킬 2개

출력 : 기본적인 Status, 각각의 멤버 함수 활용

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
		cout << name << "이/가 생성되었습니다." << endl;
	}

	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이/가 " << damage << "만큼 데미지를 입었습니다. ";
		cout << name << "의 체력 : " << health << endl;
	}

	void PrintStatus() 
	{
		cout << "------" << name << "의 현재 상태" << "------" << endl;
		cout << "체력 : " << health << endl;
	}
};

class Monster : public Unit
{
public:
	Monster(const string& n, const int h) : Unit(n, h) 
	{
		cout << "몬스터 이름 : " << name << ", 체력 : " << health << endl;
	}

	void AttackFire()
	{
		cout << "몬스터 " << name << "이/가 불 공격을 사용합니다." << endl;
	}

	void AttackVol()
	{
		cout << "몬스터 " << name << "이/가 화산 공격을 사용합니다." << endl;
	}
};

class Player : public Unit
{
public:
	Player(const string& n, const int h) : Unit(n, h) 
	{
		cout << "플레이어 이름 : " << name << ", 체력 : " << health << endl;
	}

	void AttackWater()
	{
		cout << "플레이어 " << name << "이/가 물 공격을 사용합니다." << endl;

	}
	void AttackIce()
	{
		cout << "플레이어 " << name << "이/가 얼음 공격을 사용합니다." << endl;

	}
};


int main()
{
	Monster* m = new Monster("파이리", 100);
	Player* p = new Player("지우", 100);

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