/*********************************

[생성자(constructor)]
- 객체가 생성될 때 자동으로 호출되는 특별한 멤버 함수.
- 객체의 초기화를 담당.
- 클래스 이름과 동일한 이름을 가진다.
- 반환값이 없다.
- 오버로딩이 가능하다.(여러 개의 생성자를 정의할 수 있다.)
- 기본 생성자, 매개변수가 있는 생성자, 복사 생성자

[기본 생성자]
- 매개변수가 없는 생성자.
- 명시적으로 정의하지 않으면 컴파일러가 자동으로 제공함.

*********************************/

#include <iostream>

class CPlayer
{
public:
	std::string mName;
	int mAtk;
	int mDef;
public:
	CPlayer()
	{
		mName = "홍길동";
		mAtk = 10;
		mDef = 200;
	}

	// 매개 변수가 있는 생성자
	CPlayer(const std::string& playerName, const int playerAtk, const int playerDef)
	{
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	// 멤버 함수 뒤에 const: 객체의 상태를 변경하지 않겠다
	void PrintInfo()const;
};

int main()
{
	CPlayer* player = new CPlayer();
	player->PrintInfo();

	CPlayer* player1 = new CPlayer("홍길남", 10, 20);
	player1->PrintInfo();

	delete player;
	delete player1;
	player = nullptr;
	player1 = nullptr;
}

void CPlayer::PrintInfo() const
{
	std::cout << "이름: " << mName << std::endl;
	std::cout << "공격력: " << mAtk << std::endl;
	std::cout << "방어력: " << mDef << std::endl << std::endl;
}

/*

실습

1. Person 클래스 생성
2. 속성: 이름, 나이, 생년월일, 전화번호
3. 기능: 정보 출력 함수

*/