/*********************************

[������]
- ��� ���տ� �̸��� �ٿ��� ����ϴ� ������ Ÿ��.
- �ڵ��� �������� ����.
- �⺻������ int Ÿ������ ó���Ǹ� �ڵ����� 0���� 1�� ����
- ��������� ���� ������ �� ����.

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

// ���� Ÿ���� �������� �Լ�
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
		
	// ���� ��� ������
	//Lcation loc = Inven;	// ���� -> ������ ��Ȯ�ϰ� �����ؾ� ��
	Location loc = Location::Town;

	int dirSelect;
	std::cin >> dirSelect;

	switch (dirSelect)
	{
	case Direction::Left:
		std::cout << "�������� ƢƢ" << std::endl;
		break;
	case Direction::Right:
		std::cout << "���������� ƢƢ" << std::endl;
		break;
	case Direction::Up:
		std::cout << "���� ƢƢ" << std::endl;
		break;
	case Direction::Down:
		std::cout << "�Ʒ��� ƢƢ" << std::endl;
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

	// 1. ��ǥ�� ��Ÿ���� ����ü ����
	// 2. �� �� ������ �Ÿ��� ����ϴ� �Լ�
	// 3. �� ���� ��ǥ�� �����ϰ� �Լ� ȣ���� �Ͽ� �� �� ������ �Ÿ� ���(���)
}
