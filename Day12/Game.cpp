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
			std::cout << "여긴 어디지?" << std::endl;
			isStart = false;
			break;
		}
	}
}

void Game::SetShopPage()
{
	int select;

	std::cout << "상점에 온 걸 환영" << std::endl;
	std::cout << "아이템 종류 선택 1. 방어구 2. 무기: ";
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
		std::cout << "잘못된 선택" << std::endl;
		return;
	}

	// 선택한 종류의 아이템만 표시
	mShop->DisplayItems(itemType);
	std::cout << "구매할 아이템 번호를 입력: ";
	int num;
	std::cin >> num;

	BuyItemFromShop(itemType, num);

	SetLocation(GameEnums::Location::LOCATION_INVENTORY);
}

void Game::SetInventoryPage()
{
	std::cout << "인벤토리 보기" << std::endl;
	DisplayPlayerStatus();
	mPlayer->ShowInventory();

	std::cout << "1. 상점, 2. 장착, 3. 판매: ";
	int choice;
	std::cin >> choice;

	if (choice == 1)
	{
		SetLocation(GameEnums::Location::LOCATION_SHOP);
	}
	else if (choice == 2)
	{
		std::cout << "장착할 아이템 번호 입력: ";
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
	std::cout << "판매할 아이템 입력: ";
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
		std::cout << "아이템 구매 성공" << std::endl;
		mPlayer->AddItemToInventory(*boughtItem);
		std::cout << "구매한 아이템: " << boughtItem->GetName() << std::endl;

		mGold -= boughtItem->GetPrice();

		std::cout << "남은 골드: " << mGold << "골드" << std::endl;
	}
	else
	{
		std::cout << "아이템을 구매할 수 없음" << std::endl;
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
