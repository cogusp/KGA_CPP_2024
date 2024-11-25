#include "Game.h"
#include <iostream>

Game::Game()
{
	mShop = new Shop();
	mPlayer = new Player();
	mGold = 1000;
	mLocation = GameEnums::Location::LOCATION_SHOP;
}

Game::~Game()
{
	delete mShop;
	delete mPlayer;
	mShop = nullptr;
	mPlayer = nullptr;
}

void Game::SetLocation(GameEnums::Location location)
{
	mLocation = location;
}

void Game::StartGame()
{
	bool isStart = true;

	while (isStart)
	{
		switch (mLocation)
		{
		case GameEnums::Location::LOCATION_SHOP:
			SetShopPage();
			break;
		case GameEnums::Location::LOCATION_SELL_INVENTORY:
			SetSellInventoryPage();
			break;
		case GameEnums::Location::LOCATION_INVENTORY:
			SetInventoryPage();
			break;
		default:
			std::cout << "���� �����?" << std::endl;
			isStart = false;
			break;
		}
	}
}

void Game::SetShopPage()
{
	int select;

	std::cout << "������ �� �� ȯ��" << std::endl;
	std::cout << "������ ���� ���� 1. �� 2. ����: ";
	std::cin >> select;

	GameEnums::ItemType itemType;

	if (select == 1)
	{
		itemType = GameEnums::ItemType::ITEM_ARMOR;
	}
	else if (select == 2)
	{
		itemType = GameEnums::ItemType::ITEM_WEAPON;
	}
	else
	{
		std::cout << "�߸��� ����" << std::endl;
		return;
	}

	// ������ ������ �����۸� ǥ��
	mShop->DisplayItems(itemType);
	std::cout << "������ ������ ��ȣ�� �Է�: ";
	int num;
	std::cin >> num;

	BuyItemFromShop(itemType, num);

	SetLocation(GameEnums::Location::LOCATION_INVENTORY);
}

void Game::SetInventoryPage()
{
	std::cout << "�κ��丮 ����" << std::endl;
	DisplayPlayerStatus();
	mPlayer->ShowInventory();

	std::cout << "1. ����, 2. ����, 3. �Ǹ�: ";
	int choice;
	std::cin >> choice;

	if (choice == 1)
	{
		SetLocation(GameEnums::Location::LOCATION_SHOP);
	}
	else if (choice == 2)
	{
		std::cout << "������ ������ ��ȣ �Է�: ";
		int itemNum;
		std::cin >> itemNum;

		EquipItemToPlayer(itemNum);
	}
	else if (choice == 3)
	{
		SetLocation(GameEnums::Location::LOCATION_SELL_INVENTORY);
	}
}

void Game::SetSellInventoryPage()
{
	std::cout << "�Ǹ��� ������ �Է�: ";
	int itemNum;
	std::cin >> itemNum;

	mPlayer->SellItem(itemNum, mGold);
	mPlayer->ShowInventory();
}

void Game::DisplayShopItems(GameEnums::ItemType itemKind)
{
	mShop->DisplayItems(itemKind);
}

void Game::BuyItemFromShop(GameEnums::ItemType itemKind, int num)
{
	Item* boughtItem = mShop->BuyItem(itemKind, num - 1, mGold);

	if (boughtItem != nullptr)
	{
		std::cout << "������ ���� ����" << std::endl;
		mPlayer->AddItemToInventory(*boughtItem);
		std::cout << "������ ������: " << boughtItem->GetName() << std::endl;

		mGold -= boughtItem->GetPrice();

		std::cout << "���� ���: " << mGold << "���" << std::endl;
	}
	else
	{
		std::cout << "�������� ������ �� ����" << std::endl;
	}
}

void Game::EquipItemToPlayer(const int num)
{
	mPlayer->EquipItem(num);
}

void Game::DisplayPlayerStatus()
{
	mPlayer->ShowStatus();
}
