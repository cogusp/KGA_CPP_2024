#pragma once

class Player
{
private:
	int money;
	int atk;
	int dep;

public:
	Player(const int& m, const int& a, const int& d);
	~Player();
	
	void SetMoney(const int& m);
	int GetMoney();
	void SetAtk(const int& a);
	int GetAtk();
	void SetDep(const int& d);
	int GetDep();
	
	void TakeOn();
	void TakeOff();
	void Print();
};