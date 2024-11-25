#pragma once
#include "Item.h"
#include <iostream>
#include <vector>

using namespace std;

class Inventory
{
private:
	vector<Item> inven;

public:
	Inventory();

	void SetInven(Item& it, const int& n);
	vector<Item> GetInven();
};