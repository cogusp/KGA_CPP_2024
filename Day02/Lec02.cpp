#include <iostream>

int main()
{
	// ���� 02
	///*
	std::cout << "�����ϴ� ������ ������." << std::endl;
	std::cout << "1. ��" << std::endl;
	std::cout << "2. ������ġ" << std::endl;
	std::cout << "3. ����ũ����Ʈ" << std::endl;
	std::cout << "4. ���ϸ��" << std::endl;
	std::cout << "5. �����ǽ�" << std::endl;

	int gamePick;
	int charPick;

	std::cin >> gamePick;

	// ���� 02-1: if��
	///*
	if (gamePick == 1)
	{
		std::cout << "���� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ����" << std::endl;
		std::cout << "2. ����" << std::endl;
		std::cout << "3. ¡ũ��" << std::endl;
		std::cout << "4. Ƽ��" << std::endl;
		std::cout << "5. �ִ�" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "������ �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "������ �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "¡ũ���� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "Ƽ�� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "�ִϸ� �����߽��ϴ�." << std::endl;
		}
		else {
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else if (gamePick == 2)
	{
		std::cout << "������ġ�� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ��ũ��" << std::endl;
		std::cout << "2. ���" << std::endl;
		std::cout << "3. �Ƴ�" << std::endl;
		std::cout << "4. �޸���" << std::endl;
		std::cout << "5. ���찡" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "��ũ���� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "��ٸ� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "�Ƴ��� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "�޸��ø� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "���찡�� �����߽��ϴ�." << std::endl;
		}
		else {
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else if (gamePick == 3)
	{
		std::cout << "����ũ����Ʈ�� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ũ����" << std::endl;
		std::cout << "2. �����Ǳ׸�" << std::endl;
		std::cout << "3. ���̷���" << std::endl;
		std::cout << "4. ��" << std::endl;
		std::cout << "5. ����" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "ũ���۸� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "�����Ǳ׸��� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "���̷����� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "���� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "���븦 �����߽��ϴ�." << std::endl;
		}
		else {
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else if (gamePick == 4)
	{
		std::cout << "���ϸ�� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ��ī��" << std::endl;
		std::cout << "2. ������" << std::endl;
		std::cout << "3. ���ڸ�" << std::endl;
		std::cout << "4. ���󵵽�" << std::endl;
		std::cout << "5. �׾�ŷ" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "��ī�� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "�������� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "���ڸ��� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "���󵵽��� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "�׾�ŷ�� �����߽��ϴ�." << std::endl;
		}
		else {
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else if (gamePick == 5)
	{
		std::cout << "�����ǽ��� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ����" << std::endl;
		std::cout << "2. �ҽ�" << std::endl;
		std::cout << "3. ����" << std::endl;
		std::cout << "4. �ʰ�" << std::endl;
		std::cout << "5. ���" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "������ �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "�ҽ��� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "���߸� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "�ʰ� �����߽��ϴ�." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "��ø� �����߽��ϴ�." << std::endl;
		}
		else {
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else {
		std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
	}
	//*/

	// ���� 02-1: switch��
	///*
	switch (gamePick)
	{
	case 1:
		std::cout << "���� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ����" << std::endl;
		std::cout << "2. ����" << std::endl;
		std::cout << "3. ¡ũ��" << std::endl;
		std::cout << "4. Ƽ��" << std::endl;
		std::cout << "5. �ִ�" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "������ �����߽��ϴ�." << std::endl;
			break;
		case 2:
			std::cout << "������ �����߽��ϴ�." << std::endl;
			break;
		case 3:
			std::cout << "¡ũ���� �����߽��ϴ�." << std::endl;
			break;
		case 4:
			std::cout << "Ƽ�� �����߽��ϴ�." << std::endl;
			break;
		case 5:
			std::cout << "�ִϸ� �����߽��ϴ�." << std::endl;
			break;
		default:
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
			break;
		}
		break;

	case 2:
		std::cout << "������ġ�� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ��ũ��" << std::endl;
		std::cout << "2. ���" << std::endl;
		std::cout << "3. �Ƴ�" << std::endl;
		std::cout << "4. �޸���" << std::endl;
		std::cout << "5. ���찡" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "��ũ���� �����߽��ϴ�." << std::endl;
			break;
		case 2:
			std::cout << "��ٸ� �����߽��ϴ�." << std::endl;
			break;
		case 3:
			std::cout << "�Ƴ��� �����߽��ϴ�." << std::endl;
			break;
		case 4:
			std::cout << "�޸��ø� �����߽��ϴ�." << std::endl;
			break;
		case 5:
			std::cout << "���찡�� �����߽��ϴ�." << std::endl;
			break;
		default:
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
			break;
		}
		break;

	case 3:
		std::cout << "����ũ����Ʈ�� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ũ����" << std::endl;
		std::cout << "2. �����Ǳ׸�" << std::endl;
		std::cout << "3. ���̷���" << std::endl;
		std::cout << "4. ��" << std::endl;
		std::cout << "5. ����" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "ũ���۸� �����߽��ϴ�." << std::endl;
			break;
		case 2:
			std::cout << "�����Ǳ׸��� �����߽��ϴ�." << std::endl;
			break;
		case 3:
			std::cout << "���̷����� �����߽��ϴ�." << std::endl;
			break;
		case 4:
			std::cout << "���� �����߽��ϴ�." << std::endl;
			break;
		case 5:
			std::cout << "���븦 �����߽��ϴ�." << std::endl;
			break;
		default:
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
			break;
		}
		break;

	case 4:
		std::cout << "���ϸ�� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ��ī��" << std::endl;
		std::cout << "2. ������" << std::endl;
		std::cout << "3. ���ڸ�" << std::endl;
		std::cout << "4. ���󵵽�" << std::endl;
		std::cout << "5. �׾�ŷ" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "��ī�� �����߽��ϴ�." << std::endl;
			break;
		case 2:
			std::cout << "�������� �����߽��ϴ�." << std::endl;
			break;
		case 3:
			std::cout << "���ڸ��� �����߽��ϴ�." << std::endl;
			break;
		case 4:
			std::cout << "���󵵽��� �����߽��ϴ�." << std::endl;
			break;
		case 5:
			std::cout << "�׾�ŷ�� �����߽��ϴ�." << std::endl;
			break;
		default:
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
			break;
		}
		break;

	case 5:
		std::cout << "�����ǽ��� �����߽��ϴ�." << std::endl;

		std::cout << "�����ϴ� ĳ���͸� ������." << std::endl;
		std::cout << "1. ����" << std::endl;
		std::cout << "2. �ҽ�" << std::endl;
		std::cout << "3. ����" << std::endl;
		std::cout << "4. �ʰ�" << std::endl;
		std::cout << "5. ���" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "������ �����߽��ϴ�." << std::endl;
			break;
		case 2:
			std::cout << "�ҽ��� �����߽��ϴ�." << std::endl;
			break;
		case 3:
			std::cout << "���߸� �����߽��ϴ�." << std::endl;
			break;
		case 4:
			std::cout << "�ʰ� �����߽��ϴ�." << std::endl;
			break;
		case 5:
			std::cout << "��ø� �����߽��ϴ�." << std::endl;
			break;
		default:
			std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
			break;
		}
		break;

	default:
		std::cout << "���⿡ ���� ��ȣ�Դϴ�." << std::endl;
		break;
	}
	//*/
	
	//*/

	return 0;
}