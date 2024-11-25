/***************************

[과제: 상점 시스템]

1. vector 활용
2. 모든 것은 클래스로 만들기
3. 객체 간 상호 참조 오류 -> 해결하는 방법(Class 전방 선언 활용)

1. Shop (Class)
2. Item (Class, vector)
3. Player (Class)
4. Inventory (Class)

- 기능
1. Shop
 - 사는 곳
 - 파는 곳
2. Player
 - Inventory랑 연결
 - 기본 능력치: 공격력, 방어력 (알아서)
 - 아이템 장착 기능: 공격력, 방어력 상승 (인벤토리에서 빠져서 플레이어에게 전달)
 - 아이템 탈착 기능: 공격력, 방어력 하락 (플레이어에서 빠져서 인벤토리에게 전달)
 - 돈: 소지금, 살 때 돈 내야 함, 팔면 산 금액의 반값
 - 아이템 살 때, 수량 한정 (개수 변화 및 품절 처리)

- 벡터 자료형에 클래스 넣기

***************************/

#include <iostream>
#include <vector>
#include "Shop.h"
#include "Player.h"

using namespace std;

int main()
{
	// Player 동적 할당
	Player* player = new Player(100, 5, 5);
	player->Print();

	// Shop 동적 할당
	Shop* shop = new Shop();
	shop->Info();

	// 동적 할당 해제
	delete player;
	delete shop;
	player = nullptr;
	shop = nullptr;
}