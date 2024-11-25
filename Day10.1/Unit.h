#pragma once
#include <iostream>

// 추상 클래스
class Unit
{
protected:
	std::string name;
	int health;

public:
	Unit(const std::string& n, const int h);
	virtual ~Unit();

public:
	// 순수 가상 함수
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;
};