#include "Player.h"
#include "Weapon.h"

int main()
{
	// 상호 참조 오류 발생
	// 클래스 전방 선언을 통해 방지
	// header file이 아닌 cpp file에 include
	// 전방 선언 시 컴파일 속도가 향상됨.
	Weapon* sword = new Weapon("검");

	Player* player = new Player("홍길동", sword);

	player->Attack();

	delete sword;
	delete player;

	sword = nullptr;
	player = nullptr;
}