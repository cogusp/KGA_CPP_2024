#include <iostream>

int main()
{
	int playerChoice;
	int computerChoice;
	int cnt = 0;

	srand(time(0));

	std::cout << "=== ���������� ���� ===" << std::endl;
	std::cout << "1. ���� 2. ���� 3. ��" << std::endl;
	std::cout << std::endl;

	while (cnt < 10)
	{
		std::cout << "~ ����������!! ~" << std::endl;
		std::cin >> playerChoice;
		std::cout << "cnt: " << cnt << std::endl;
		
		computerChoice = rand() % 3 + 1;

		switch (playerChoice)
		{
		case 1:
			switch (computerChoice)
			{
			case 1:
				std::cout << "���� VS ����!! �����ϴ�!!" << std::endl;
				break;
			case 2:
				std::cout << "���� VS �ָ�!! ��ǻ������ �����ϴ�!!" << std::endl;
				break;
			case 3:
				std::cout << "���� VS ��!! �̰���ϴ�!!" << std::endl;
				break;
			}

			break;
		case 2:
			switch (computerChoice)
			{
			case 1:
				std::cout << "���� VS ����!! �̰���ϴ�!!" << std::endl;
				break;
			case 2:
				std::cout << "���� VS ����!! �����ϴ�!!" << std::endl;
				break;
			case 3:
				std::cout << "���� VS ��!! ��ǻ������ �����ϴ�!!" << std::endl;
				break;
			}

			break;
		case 3:
			switch (computerChoice)
			{
			case 1:
				std::cout << "�� VS ����!! ��ǻ������ �����ϴ�!!" << std::endl;
				break;
			case 2:
				std::cout << "�� VS �ָ�!! �̰���ϴ�!!" << std::endl;
				break;
			case 3:
				std::cout << "�� VS ��!! �����ϴ�!!" << std::endl;
				break;
			}

			break;
		default:
			std::cout << "����, ����, �� �߿� �����ϼ���!!" << std::endl;
			break;
		}

		std::cout << std::endl;

		cnt++;
	}
}