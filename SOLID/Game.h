#pragma once
#include <iostream>

/*

해당 클래스에서 플레이어, 몬스터 데이터 관리, 전투 출력 등 모든 기능이 들어있음.
- 데이터 관리, 전투 로직을 바꾸려면 Game 클래스 전반에 걸쳐 코드를 수정해야 함.

만약 해당 클래스를 분리를 한다고 하면?
1. PlayerClass
 - 이름, 체력, 공격, ...
 - 플레이어와 관련된 기능(멤버 함수)

2. MonsterClass
 - 이름, 체력, 공격, ...
 - 몬스터와 관련된 기능(멤버 함수)

3. BattleManager
 - 관리자

4. PrintClass
 - 두 클래스의 정보만 출력하는 클래스

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