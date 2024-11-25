#pragma once
#include <iostream>

// �߻� Ŭ����
class Unit
{
protected:
	std::string name;
	int health;

public:
	Unit(const std::string& n, const int h);
	virtual ~Unit();

public:
	// ���� ���� �Լ�
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;
};