/***************************

[����: ���� �ý���]

1. vector Ȱ��
2. ��� ���� Ŭ������ �����
3. ��ü �� ��ȣ ���� ���� -> �ذ��ϴ� ���(Class ���� ���� Ȱ��)

1. Shop (Class)
2. Item (Class, vector)
3. Player (Class)
4. Inventory (Class)

- ���
1. Shop
 - ��� ��
 - �Ĵ� ��
2. Player
 - Inventory�� ����
 - �⺻ �ɷ�ġ: ���ݷ�, ���� (�˾Ƽ�)
 - ������ ���� ���: ���ݷ�, ���� ��� (�κ��丮���� ������ �÷��̾�� ����)
 - ������ Ż�� ���: ���ݷ�, ���� �϶� (�÷��̾�� ������ �κ��丮���� ����)
 - ��: ������, �� �� �� ���� ��, �ȸ� �� �ݾ��� �ݰ�
 - ������ �� ��, ���� ���� (���� ��ȭ �� ǰ�� ó��)

- ���� �ڷ����� Ŭ���� �ֱ�

***************************/

#include <iostream>
#include <vector>
#include "Shop.h"
#include "Player.h"

using namespace std;

int main()
{
	// Player ���� �Ҵ�
	Player* player = new Player(100, 5, 5);
	player->Print();

	// Shop ���� �Ҵ�
	Shop* shop = new Shop();
	shop->Info();

	// ���� �Ҵ� ����
	delete player;
	delete shop;
	player = nullptr;
	shop = nullptr;
}