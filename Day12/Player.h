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

	// 인벤토리 클래스에서 함수를 가져오자
	void SellItem(const int itemNum, int& gold);

	// 인벤토리 클래스에서 함수를 가져오자
	void EquipItem(const int num);

	// 인벤토리 클래스에서 함수를 가져오자
	void AddItemToInventory(const Item& item);

	// 인벤토리 클래스에서 함수를 가져오자
	void ShowInventory()const;
};