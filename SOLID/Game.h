#pragma once
#include <iostream>

/*

�ش� Ŭ�������� �÷��̾�, ���� ������ ����, ���� ��� �� ��� ����� �������.
- ������ ����, ���� ������ �ٲٷ��� Game Ŭ���� ���ݿ� ���� �ڵ带 �����ؾ� ��.

���� �ش� Ŭ������ �и��� �Ѵٰ� �ϸ�?
1. PlayerClass
 - �̸�, ü��, ����, ...
 - �÷��̾�� ���õ� ���(��� �Լ�)

2. MonsterClass
 - �̸�, ü��, ����, ...
 - ���Ϳ� ���õ� ���(��� �Լ�)

3. BattleManager
 - ������

4. PrintClass
 - �� Ŭ������ ������ ����ϴ� Ŭ����

*/

class Game
{
private:
	std::string playerName;
	std::string monsterName;
	int playerHealth;
	int monsterHealth;
	int playerAttack;
	int monsterAttack;

public:
	Game();

	void Start();
};

class Monster{};
class Player{};
class BattleManaer {
public:
	void BattleManager(Player& p, Monster& m);
};