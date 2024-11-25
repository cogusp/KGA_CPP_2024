#include "Shop.h"
#include "Item.h"
#include "Inventory.h"
#include <iostream>

using namespace std;

Shop::Shop()
{
	cout << endl << "~~~~~~~~~~~ 상점에 어서오세요 ~~~~~~~~~~~" << endl << endl;

	item.push_back(Item("나무 방패", 3, 5, 5, 10));
	item.push_back(Item("철제 갑옷", 6, 0, 10, 2));
	item.push_back(Item("다이아 검", 100, 100, 50, 1));
}

Shop::~Shop()
{
	
}

void Shop::Buy()
{
	cout << "##### 물건 목록 #####" << endl;
	// 아이템
	for (auto i : item)
	{ 
		cout << i.GetName() << ", 공격력: " << i.GetAtk() << ", 방어력: " << i.GetDep()
			 << ", 가격: " << i.GetPrice() << " >> 남은 개수: " << i.GetSum() << endl;
	}
	
	int menu;

	cout << "무엇을 사시겠습니까? (번호 입력) >> ";
	cin >> menu;

	// 인벤토리 수정
	Inventory iv;
	iv.SetInven(item[menu - 1], 1);

	// 아이템 개수 수정
	Item it;
	it.ModifySum(item[menu - 1], 1);
}

void Shop::Sell()
{
	cout << "어떤 물건을 파시겠습니까?" << endl;
	
	// 인벤토리
	//Inventory iv;
	for (auto i : iv.GetInven())
	{
		cout << i.GetName() << ", 공격력: " << i.GetAtk() << ", 방어력: " << i.GetDep()
			<< ", 가격: " << i.GetPrice() << " >> 남은 개수: " << i.GetSum() << endl;
	}

	int menu;

	cout << "무엇을 사시겠습니까? (번호 입력) >> ";
	cin >> menu;

	// 인벤토리 수정
	Inventory iv;
	iv.SetInven(item[menu - 1], -1);

	// 아이템 개수 수정
	Item it;
	it.ModifySum(item[menu - 1], -1);
}

void Shop::Info()
{
	cout << "무엇을 도와드릴까요?" << endl;
	cout << "1. 아이템 사기" << endl;
	cout << "2. 아이템 팔기" << endl;
	cout << "3. 프로그램 종료" << endl;
	cout << ">>> ";

	int menu;

	cin >> menu;

	if (menu == 1)	Buy();
	else if (menu == 2) Sell();
	else if (menu == 3) cout << endl << "~~~~~~~~~~~ 이용에 감사합니다 ~~~~~~~~~~~" << endl;
	else cout << "유효하지 않은 번호입니다.";
}
