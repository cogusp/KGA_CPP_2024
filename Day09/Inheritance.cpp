/******************************************
[상속]
 - 자식 클래스는 부모 클래스의 속성이나 메소드를 가져다 쓰거나 재정의하여 사용할 수 있음.
 - 공통의 기능을 상위 클래스에 묶어 놓은 다음 다른 클래스로 확장.

[상속 관계에서의 생성자, 소멸자 호출 순서]
 - 생성자 : 부모 먼저 / 소멸자 : 자식 먼저

 C++에서 자식 클래스의 생성자가 호출이 되려면 먼저, 부모 클래스의 생성자가 호출되어야 함.
 -> 부모 클래스의 멤버 변수가 초기화된 이후에 자식 클래스의 생성자가 실행되어야 함.

 소멸자는 자식 클래스 먼저 호출.

[is-a / has-a]
 - 사과는 과일이다. -> is-a -> 상속 가능
 - 자동차는 엔진을 가지고 있다 -> has-a -> 상속 X -> 포함 관계

 다중 상속 지양

*******************************************/


#include <iostream>
using namespace std;

#pragma region 상속을 안 썼을 때
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
//		cout << "칼 공격" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "이 " << damage << "만큼 데이미지를 먹었다. 남은 체력 : " << health << endl;
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
//		cout << "아이스볼 발사" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "이 " << damage << "만큼 데이미지를 먹었다. 남은 체력 : " << health << endl;
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
		cout << "부모 클래스 character 생성자 호출" << endl;
	}
	
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이/가 " << damage << "만큼 데이미지를 먹었다. 남은 체력 : " << health << endl;
	}

};

// 상속 -> 파생클래스/자식클래스
class Warrior : public Character
{
public:
	Warrior(const string& n, const int h) : Character(n, h)   // 부모 클래스의 멤버 변수들 초기화 보장.
	{
		cout << "자식 클래스 워리어 생성자 호출" << endl;
	}	

	void Skill()
	{
		cout << "칼을 휘두름" << endl;
	}
	
};

class Mage : public Character
{
public:
	Mage(const string& n, const int h) : Character(n, h) 
	{
		cout << "자식 클래스 법사 생성자 호출" << endl;
	}

	void Skill()
	{
		cout << "해골 소환" << endl;
	}
};

int main() 
{
	Warrior* w = new Warrior("토르", 100);
	w->Skill();
	w->TakeDamage(10);

	Mage* m = new Mage("간달프", 209);
	m->Skill();
	m->TakeDamage(20);

	return 0;
}