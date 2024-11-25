#pragma once
#include "Item.h"
#include "Inventory.h"
#include <iostream>
#include <vector>

using namespace std;

class Shop
{
private:
	vector<Item> item;
	Inventory iv;
	
public:
	Shop();
	~Shop();
	void Buy();
	void Sell();
	void Info();
};