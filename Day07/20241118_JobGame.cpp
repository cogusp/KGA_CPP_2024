/*********************************

�Ʒ��� ���� ���ð� ���� ��

1. ������ ����� �����ض� (�Լ�)
 - �÷��̾ ����ġ�� �װ� Ư�� ����ġ �̻��̸� ������

2. �ſ� ������ ���� ����� (�Լ�)
 - 1�� 2�� ������

*********************************/

#include <iostream>

enum class Job
{
	Warrior, Mage, Archer
};

struct Character
{
	std::string name;	// �̸�
	int level;			// ����
	Job job;			// ����
	int exp;			// ����ġ
	int hp;				// HP
};

std::string GetName(Job j)
{
	switch (j)
	{
	case Job::Warrior:
		return "������� �� ����";
	case Job::Mage:
		return "������ ������";
	case Job::Archer:
		return "�ݸ޴޸���Ʈ �ü�";
	default:
		return "�ƹ��͵� ���� ����";
	}
}

void LevelUp(Character& c);
void Attack(Character& c1, Character& c2);

int main()
{
	Character p1 = { "�̹ٴ�",1,Job::Warrior, 700, 100 };
	Character p2 = { "��ä��",1,Job::Mage, 0, 100 };

	std::cout << "�÷��̾� 1: " << p1.name << " ����: " << p1.level << " ����: " << GetName(p1.job) << std::endl;
	std::cout << "�÷��̾� 2: " << p2.name << " ����: " << p2.level << " ����: " << GetName(p2.job) << std::endl << std::endl;

	Attack(p1, p2);
	Attack(p2, p1);
	Attack(p1, p2);
	LevelUp(p1);

	std::cout << "�÷��̾� 1: " << p1.name << " ����: " << p1.level << std::endl;
	std::cout << "�÷��̾� 2: " << p2.name << " ����: " << p2.level << std::endl;
}

void LevelUp(Character& c)
{
	if (c.exp >= 1000)
	{
		c.level++;
		c.exp -= 1000;
	}

	std::cout << c.name << "(��)�� ������ 1 �ö���. (����: " << c.level << ")" << std::endl << std::endl;
}

void Attack(Character& c1, Character& c2)
{
	c1.exp += 150;
	c2.hp -= 10;

	std::cout << c1.name << "(��)�� " << c2.name << "�� �����ߴ�." << std::endl;
	std::cout << c2.name << "(��)�� ü���� 10 �پ���. (ü��: " << c2.hp << ")" << std::endl;
	std::cout << c1.name << "(��)�� ����ġ�� 150 �ö���. (����ġ: " << c1.exp << ")" << std::endl << std::endl;
}