/*

1. ��� �ʱ�ȭ ����Ʈ�� Ȱ���Ͽ� ��ü�� �ʱ�ȭ�ϰ� ����غ���
2. Get, Set�� Ȱ���Ͽ� �÷��̾�� ���� ���� ���� �����
 - ü�°� ���ݷ¸� ����
3. OOP�� ���� ��ǥ�ڷ� �����
 - �� ����

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

	std::cout << "�÷��̾� ����" << std::endl;
	player.Print();

	Players monster(50, 5);

	std::cout << "���� ����" << std::endl;
	monster.Print();

	player.SetHealth(95);
	player.SetAtk(20);

	std::cout << "�÷��̾� �缳��" << std::endl;
	player.Print();

	monster.SetHealth(20);
	monster.SetAtk(30);

	std::cout << "���� �缳��" << std::endl;
	monster.Print();
}

void Players::Print() const
{
	std::cout << "ü��: " << GetHealth() << " ���ݷ�: " << GetAtk() << std::endl << std::endl;
}