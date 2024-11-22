/*********************************

아래와 같은 예시가 있을 때

1. 레벨업 기능을 구현해라 (함수)
 - 플레이어가 경험치를 쌓고 특정 경험치 이상이면 레벨업

2. 매우 간단한 공격 만들기 (함수)
 - 1이 2를 때린다

*********************************/

#include <iostream>

enum class Job
{
	Warrior, Mage, Archer
};

struct Character
{
	std::string name;	// 이름
	int level;			// 레벨
	Job job;			// 직업
	int exp;			// 경험치
	int hp;				// HP
};

std::string GetName(Job j)
{
	switch (j)
	{
	case Job::Warrior:
		return "집행검을 든 전사";
	case Job::Mage:
		return "암흑의 마법사";
	case Job::Archer:
		return "금메달리스트 궁수";
	default:
		return "아무것도 선택 안함";
	}
}

void LevelUp(Character& c);
void Attack(Character& c1, Character& c2);

int main()
{
	Character p1 = { "이바다",1,Job::Warrior, 700, 100 };
	Character p2 = { "이채현",1,Job::Mage, 0, 100 };

	std::cout << "플레이어 1: " << p1.name << " 레벨: " << p1.level << " 직업: " << GetName(p1.job) << std::endl;
	std::cout << "플레이어 2: " << p2.name << " 레벨: " << p2.level << " 직업: " << GetName(p2.job) << std::endl << std::endl;

	Attack(p1, p2);
	Attack(p2, p1);
	Attack(p1, p2);
	LevelUp(p1);

	std::cout << "플레이어 1: " << p1.name << " 레벨: " << p1.level << std::endl;
	std::cout << "플레이어 2: " << p2.name << " 레벨: " << p2.level << std::endl;
}

void LevelUp(Character& c)
{
	if (c.exp >= 1000)
	{
		c.level++;
		c.exp -= 1000;
	}

	std::cout << c.name << "(이)의 레벨이 1 올랐다. (레벨: " << c.level << ")" << std::endl << std::endl;
}

void Attack(Character& c1, Character& c2)
{
	c1.exp += 150;
	c2.hp -= 10;

	std::cout << c1.name << "(이)가 " << c2.name << "을 공격했다." << std::endl;
	std::cout << c2.name << "(이)의 체력이 10 줄었다. (체력: " << c2.hp << ")" << std::endl;
	std::cout << c1.name << "(이)의 경험치가 150 올랐다. (경험치: " << c1.exp << ")" << std::endl << std::endl;
}