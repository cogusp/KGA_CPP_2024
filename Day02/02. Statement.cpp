/*********************************************

switch
- 여러 조건을 처리해야 할 때 사용하는 조건문 중 하나.
- 주로 상수 값을 기준으로 분기할 때 사용되며, 가독성이 좋음.

[switch 구조]
- 하나의 변수를 검사하고, 그 변수 값에 따라 여러 case 블록 중 하나 실행
- break 키워드를 통해 각 case의 실행 종료.
- break가 없으면 다음 case 블록이 연속 실행.
- 표현식에는 문자, 정수, 열거 타입 등.

[요약]
- 상수 값을 기준으로 여러 선택지 중 하나를 선택하는 상황에서 유용.
- 코드의 가독성을 높이고 효율성을 개선할 수 있지만 표현식의 제한이 있음.
- 범위 기반 비교 불가 (10 < x < 20 등)
- if문은 범용적으로 다양한 조건 다루기 유용. 논리연산자를 사용하여 복잡한 조건을 만들 수 있음.

switch (조건)
	{
	case 값1:
		// 값1에 해당되는 코드
		break;
	case 값2:
		// 값2에 해당되는 코드
		break;
	default:
		// 어떤 case도 해당하지 않을 때 실행(생략 가능)
		break;
	}

[break]
- 반복문이나 switch문을 제어할 때 사용.
- break가 실행되면 해당 루프나 switch문을 종료하고 break 다음으로 이동하여 실행.
- 다중 switch나 중첩 반복문에서는 break가 있는 해당 스코프만 빠져나감.

*********************************************/

#include <iostream>

int main()
{
	int choice;

	std::cout << "게임을 선택하세요." << std::endl;
	std::cout << "1. 롤" << std::endl;
	std::cout << "2. 발로란트" << std::endl;
	std::cout << "3. 오버워치" << std::endl;
	std::cout << "4. 스타크래프트" << std::endl;
	std::cout << "5. 디아블로2" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "롤 선택" << std::endl;
		break;
	case 2:
		std::cout << "발로란트 선택" << std::endl;
		break;
	case 3:
		std::cout << "오버워치 선택" << std::endl;
		break;
	case 4:
		std::cout << "스타크래프트 선택" << std::endl;
		break;
	case 5:
		std::cout << "디아블로2 선택" << std::endl;
		break;
	default:
		std::cout << "입력 값이 잘못되었습니다." << std::endl;
		break;
	}

	std::cout << std::endl;

	int jobChoice;
	int skillChoice;

	std::cout << "직업을 선택해라. (1: 전사, 2: 마법사, 3: 도적) : ";
	std::cin >> jobChoice;

	switch (jobChoice)
	{
	case 1:
		std::cout << "전사를 선택했다. 어떤 스킬을 사용할 것인가? (1: 대쉬공격, 2: 방패공격) : ";
		std::cin >> skillChoice;

		switch (skillChoice)
		{
		case 1:
			std::cout << "대쉬공격" << std::endl;
			break;
		case 2:
			std::cout << "방패공격" << std::endl;
			break;
		}
		break;
	case 2:
		std::cout << "마법사를 선택했다. 어떤 스킬을 사용할 것인가? (1: 메롱공격, 2: 메롱방어) : ";
		std::cin >> skillChoice;

		switch (skillChoice)
		{
		case 1:
			std::cout << "메롱공격" << std::endl;
			break;
		case 2:
			std::cout << "메롱방어" << std::endl;
			break;
		}
		break;
	}

	return 0;
}