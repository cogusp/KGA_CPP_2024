#include "Shop.h"
#include "Item.h"
#include "Inventory.h"
#include <iostream>

using namespace std;

Shop::Shop()
{
	cout << endl << "~~~~~~~~~~~ ������ ������� ~~~~~~~~~~~" << endl << endl;

	item.push_back(Item("���� ����", 3, 5, 5, 10));
	item.push_back(Item("ö�� ����", 6, 0, 10, 2));
	item.push_back(Item("���̾� ��", 100, 100, 50, 1));
}

Shop::~Shop()
{
	
}

void Shop::Buy()
{
	cout << "##### ���� ��� #####" << endl;
	// ������
	for (auto i : item)
	{ 
		cout << i.GetName() << ", ���ݷ�: " << i.GetAtk() << ", ����: " << i.GetDep()
			 << ", ����: " << i.GetPrice() << " >> ���� ����: " << i.GetSum() << endl;
	}
	
	int menu;

	cout << "������ ��ðڽ��ϱ�? (��ȣ �Է�) >> ";
	cin >> menu;

	// �κ��丮 ����
	Inventory iv;
	iv.SetInven(item[menu - 1], 1);

	// ������ ���� ����
	Item it;
	it.ModifySum(item[menu - 1], 1);
}

void Shop::Sell()
{
	cout << "� ������ �Ľðڽ��ϱ�?" << endl;
	
	// �κ��丮
	//Inventory iv;
	for (auto i : iv.GetInven())
	{
		cout << i.GetName() << ", ���ݷ�: " << i.GetAtk() << ", ����: " << i.GetDep()
			<< ", ����: " << i.GetPrice() << " >> ���� ����: " << i.GetSum() << endl;
	}

	int menu;

	cout << "������ ��ðڽ��ϱ�? (��ȣ �Է�) >> ";
	cin >> menu;

	// �κ��丮 ����
	Inventory iv;
	iv.SetInven(item[menu - 1], -1);

	// ������ ���� ����
	Item it;
	it.ModifySum(item[menu - 1], -1);
}

void Shop::Info()
{
	cout << "������ ���͵帱���?" << endl;
	cout << "1. ������ ���" << endl;
	cout << "2. ������ �ȱ�" << endl;
	cout << "3. ���α׷� ����" << endl;
	cout << ">>> ";

	int menu;

	cin >> menu;

	if (menu == 1)	Buy();
	else if (menu == 2) Sell();
	else if (menu == 3) cout << endl << "~~~~~~~~~~~ �̿뿡 �����մϴ� ~~~~~~~~~~~" << endl;
	else cout << "��ȿ���� ���� ��ȣ�Դϴ�.";
}
