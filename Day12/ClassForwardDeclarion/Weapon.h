#pragma once
//#include "Player.h"
#include <iostream>

class Player;		// 전방 선언
class Weapon
{
private:
	std::string type;
	Player* player;

public:
	Weapon(const std::string& type);
	~Weapon();

	void Use()const;
};