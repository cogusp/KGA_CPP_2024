/*********************************

[������(constructor)]
- ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ�.
- ��ü�� �ʱ�ȭ�� ���.
- Ŭ���� �̸��� ������ �̸��� ������.
- ��ȯ���� ����.
- �����ε��� �����ϴ�.(���� ���� �����ڸ� ������ �� �ִ�.)
- �⺻ ������, �Ű������� �ִ� ������, ���� ������

[�⺻ ������]
- �Ű������� ���� ������.
- ��������� �������� ������ �����Ϸ��� �ڵ����� ������.

*********************************/

#include <iostream>

class CPlayer
{
public:
	std::string mName;
	int mAtk;
	int mDef;
public:
	CPlayer()
	{
		mName = "ȫ�浿";
		mAtk = 10;
		mDef = 200;
	}

	// �Ű� ������ �ִ� ������
	CPlayer(const std::string& playerName, const int playerAtk, const int playerDef)
	{
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	// ��� �Լ� �ڿ� const: ��ü�� ���¸� �������� �ʰڴ�
	void PrintInfo()const;
};

int main()
{
	CPlayer* player = new CPlayer();
	player->PrintInfo();

	CPlayer* player1 = new CPlayer("ȫ�泲", 10, 20);
	player1->PrintInfo();

	delete player;
	delete player1;
	player = nullptr;
	player1 = nullptr;
}

void CPlayer::PrintInfo() const
{
	std::cout << "�̸�: " << mName << std::endl;
	std::cout << "���ݷ�: " << mAtk << std::endl;
	std::cout << "����: " << mDef << std::endl << std::endl;
}

/*

�ǽ�

1. Person Ŭ���� ����
2. �Ӽ�: �̸�, ����, �������, ��ȭ��ȣ
3. ���: ���� ��� �Լ�

*/