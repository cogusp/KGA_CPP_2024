#include "Player.h"
#include "Inventory.h"
#include <iostream>
#include <vector>

using namespace std;


Player::Player(const int& m, const int& a, const int& d)
	: money(m), atk(a), dep(d)
{
}

Player::~Player()
{
}

void Player::SetMoney(const int& m)
{
	money = m;
}

int Player::GetMoney()
{
	return money;
}

void Player::SetAtk(const int& a)
{
	atk = a;
}

int Player::GetAtk()
{
	return atk;
}

void Player::SetDep(const int& d)
{
	dep = d;
}

int Player::GetDep()
{
	return dep;
}

void Player::TakeOn()
{
	// push, pop
	//vector<Inventory> iv;
}

void Player::TakeOff()
{
}

void Player::Print()
{
	cout << "플레이어 정보 >> 코인: " << GetMoney() << ", 공격력: " << GetAtk() << ", 방어력: " << GetDep() << endl;
}
