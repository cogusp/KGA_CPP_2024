#pragma once
#include "Unit.h"
#include "Inventory.h"

class Player : public Unit
{
private:
	Inventory mInventory;

public:
	Player();
	~Player();

	void InitPlayer();
	void ShowStatus();

	// �κ��丮 Ŭ�������� �Լ��� ��������
	void SellItem(const int itemNum, int& gold);

	// �κ��丮 Ŭ�������� �Լ��� ��������
	void EquipItem(const int num);

	// �κ��丮 Ŭ�������� �Լ��� ��������
	void AddItemToInventory(const Item& item);

	// �κ��丮 Ŭ�������� �Լ��� ��������
	void ShowInventory()const;
};