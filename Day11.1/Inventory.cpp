#include "Inventory.h"
#include <iostream>
#include <vector>

using namespace std;

Inventory::Inventory()
{
}

void Inventory::SetInven(Item& it, const int& n)
{
	for (auto& i : inven)
	{
		if (i.GetName() != it.GetName())
			inven.push_back(it);
		else
		{
			i.SetAtk(i.GetAtk() + (it.GetAtk())* n);
			i.SetDep(i.GetDep() + (it.GetDep())*n);
			i.SetSum(i.GetSum() + n);
		}
	}
}

vector<Item> Inventory::GetInven()
{
	return inven;
}
