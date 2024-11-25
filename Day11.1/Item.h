#pragma once
#include <iostream>

using namespace std;

class Item
{
private:
	string name;
	int price;
	int atk;
	int dep;
	int sum;
	

public:
	Item();
	Item(const string& n, const int& p, const int& a, const int& d, const int& s);

	void SetName(const string& n);
	string GetName();
	void SetPrice(const int& p);
	int GetPrice();
	void SetAtk(const int& a);
	int GetAtk();
	void SetDep(const int& d);
	int GetDep();
	void SetSum(const int& s);
	int GetSum();

	void ModifySum(Item it, const int& n);
};