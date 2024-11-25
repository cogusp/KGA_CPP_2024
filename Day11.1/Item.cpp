#include "Item.h"
#include <iostream>

Item::Item()
{
}

Item::Item(const string& n, const int& p, const int& a, const int& d, const int& s)
	: name(n), price(p), atk(a), dep(d), sum(s)
{
}

void Item::SetName(const string& n)
{
	name = n;
}

string Item::GetName()
{
	return name;
}

void Item::SetPrice(const int& p)
{
	price = p;
}

int Item::GetPrice()
{
	return price;
}

void Item::SetAtk(const int& a)
{
}

int Item::GetAtk()
{
	return atk;
}

void Item::SetDep(const int& d)
{
	dep = d;
}

int Item::GetDep()
{
	return dep;
}

void Item::SetSum(const int& s)
{
	sum = s;
}

int Item::GetSum()
{
	return sum;
}

void Item::ModifySum(Item it, const int& n)
{
	it.SetSum(it.GetSum() + n);
}