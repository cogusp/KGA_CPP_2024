/*********************************

[열거형]
- 상수 집합에 이름을 붙여서 사용하는 데이터 타입.
- 코드의 가독성을 높임.
- 기본적으로 int 타입으로 처리되며 자동으로 0부터 1씩 증가
- 명시적으로 값을 지정할 수 있음.

*********************************/

#include <iostream>

enum Color
{
	Red,
	Green,
	Black
};

enum Direction
{
	Left = 1,
	Right,
	Up,
	Down
};

enum class Location
{
	Inven,
	Town,
	Shop
};

enum class Character
{
	Knight = 1,
	Mage,
	Archer,
	None
};

// 리턴 타입이 열거형인 함수
Character GetCharacter(int n);

int main()
{
	/*int Red = 0;
	int Green = 1;
	int Black = 2*/;

	Color c = Red;

	/*std::cout << Color::Red << std::endl;
	std::cout << Color::Green << std::endl;
	std::cout << Color::Black*/
		
	// 범위 기반 열거형
	//Lcation loc = Inven;	// 에러 -> 범위를 명확하게 지정해야 함
	Location loc = Location::Town;

	int dirSelect;
	std::cin >> dirSelect;

	switch (dirSelect)
	{
	case Direction::Left:
		std::cout << "왼쪽으로 튀튀" << std::endl;
		break;
	case Direction::Right:
		std::cout << "오른쪽으로 튀튀" << std::endl;
		break;
	case Direction::Up:
		std::cout << "위로 튀튀" << std::endl;
		break;
	case Direction::Down:
		std::cout << "아래로 튀튀" << std::endl;
		break;
	default:
		break;
	}

	int charSelect;
	std::cin >> charSelect;

	Character selectedChar = static_cast<Character>(charSelect);

	switch (selectedChar)
	{
	case Character::Knight:
		break;
	case Character::Mage:
		break;
	case Character::Archer:
		break;
	case Character::None:
		break;
	}
}

Character GetCharacter(int n)
{
	switch (n)
	{
	case 1:
		return Character::Knight;
	case 2:
		return Character::Mage;
	case 3:
		return Character::Archer;
	case 4:
		return Character::None;
	}

	// 1. 좌표를 나타내는 구조체 정의
	// 2. 두 점 사이의 거리를 계산하는 함수
	// 3. 두 개의 좌표를 생성하고 함수 호출을 하여 두 점 사이의 거리 계산(출력)
}
