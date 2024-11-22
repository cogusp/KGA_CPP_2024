#include <iostream>

int main()
{
	int playerChoice;
	int computerChoice;
	int cnt = 0;

	srand(time(0));

	std::cout << "=== 가위바위보 게임 ===" << std::endl;
	std::cout << "1. 가위 2. 바위 3. 보" << std::endl;
	std::cout << std::endl;

	while (cnt < 10)
	{
		std::cout << "~ 가위바위보!! ~" << std::endl;
		std::cin >> playerChoice;
		std::cout << "cnt: " << cnt << std::endl;
		
		computerChoice = rand() % 3 + 1;

		switch (playerChoice)
		{
		case 1:
			switch (computerChoice)
			{
			case 1:
				std::cout << "가위 VS 가위!! 비겼습니다!!" << std::endl;
				break;
			case 2:
				std::cout << "가위 VS 주먹!! 컴퓨터한테 졌습니다!!" << std::endl;
				break;
			case 3:
				std::cout << "가위 VS 보!! 이겼습니다!!" << std::endl;
				break;
			}

			break;
		case 2:
			switch (computerChoice)
			{
			case 1:
				std::cout << "바위 VS 가위!! 이겼습니다!!" << std::endl;
				break;
			case 2:
				std::cout << "바위 VS 바위!! 비겼습니다!!" << std::endl;
				break;
			case 3:
				std::cout << "바위 VS 보!! 컴퓨터한테 졌습니다!!" << std::endl;
				break;
			}

			break;
		case 3:
			switch (computerChoice)
			{
			case 1:
				std::cout << "보 VS 가위!! 컴퓨터한테 졌습니다!!" << std::endl;
				break;
			case 2:
				std::cout << "보 VS 주먹!! 이겼습니다!!" << std::endl;
				break;
			case 3:
				std::cout << "보 VS 보!! 비겼습니다!!" << std::endl;
				break;
			}

			break;
		default:
			std::cout << "가위, 바위, 보 중에 선택하세요!!" << std::endl;
			break;
		}

		std::cout << std::endl;

		cnt++;
	}
}