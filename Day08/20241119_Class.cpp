/*

1. 멤버 초기화 리스트를 활용하여 객체를 초기화하고 출력해보기
2. Get, Set을 활용하여 플레이어와 몬스터 전투 게임 만들기
 - 체력과 공격력만 있음
3. OOP에 대해 발표자료 만들기
 - 팀 과제

*/

#include <iostream>

class Players
{
private:
	int mHealth;
	int mAtk;

public:
	Players(int health, int atk) : mHealth(health), mAtk(atk) { }

	int GetHealth()const { return mHealth; }
	int GetAtk()const { return mAtk; }

	void SetHealth(const int health) { mHealth = health; }
	void SetAtk(const int atk) { mAtk = atk; }

	void Print()const;
};

int main()
{
	Players player(100, 15);

	std::cout << "플레이어 설정" << std::endl;
	player.Print();

	Players monster(50, 5);

	std::cout << "몬스터 설정" << std::endl;
	monster.Print();

	player.SetHealth(95);
	player.SetAtk(20);

	std::cout << "플레이어 재설정" << std::endl;
	player.Print();

	monster.SetHealth(20);
	monster.SetAtk(30);

	std::cout << "몬스터 재설정" << std::endl;
	monster.Print();
}

void Players::Print() const
{
	std::cout << "체력: " << GetHealth() << " 공격력: " << GetAtk() << std::endl << std::endl;
}