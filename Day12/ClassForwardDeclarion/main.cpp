#include "Player.h"
#include "Weapon.h"

int main()
{
	// ��ȣ ���� ���� �߻�
	// Ŭ���� ���� ������ ���� ����
	// header file�� �ƴ� cpp file�� include
	// ���� ���� �� ������ �ӵ��� ����.
	Weapon* sword = new Weapon("��");

	Player* player = new Player("ȫ�浿", sword);

	player->Attack();

	delete sword;
	delete player;

	sword = nullptr;
	player = nullptr;
}