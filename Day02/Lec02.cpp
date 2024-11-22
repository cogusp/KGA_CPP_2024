#include <iostream>

int main()
{
	// 과제 02
	///*
	std::cout << "좋아하는 게임을 고르세요." << std::endl;
	std::cout << "1. 롤" << std::endl;
	std::cout << "2. 오버워치" << std::endl;
	std::cout << "3. 마인크래프트" << std::endl;
	std::cout << "4. 포켓몬고" << std::endl;
	std::cout << "5. 동물의숲" << std::endl;

	int gamePick;
	int charPick;

	std::cin >> gamePick;

	// 과제 02-1: if문
	///*
	if (gamePick == 1)
	{
		std::cout << "롤을 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 리신" << std::endl;
		std::cout << "2. 문도" << std::endl;
		std::cout << "3. 징크스" << std::endl;
		std::cout << "4. 티모" << std::endl;
		std::cout << "5. 애니" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "리신을 선택했습니다." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "문도를 선택했습니다." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "징크스를 선택했습니다." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "티모를 선택했습니다." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "애니를 선택했습니다." << std::endl;
		}
		else {
			std::cout << "보기에 없는 번호입니다." << std::endl;
		}
	}
	else if (gamePick == 2)
	{
		std::cout << "오버워치를 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 정크렛" << std::endl;
		std::cout << "2. 디바" << std::endl;
		std::cout << "3. 아나" << std::endl;
		std::cout << "4. 메르시" << std::endl;
		std::cout << "5. 마우가" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "정크렛을 선택했습니다." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "디바를 선택했습니다." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "아나를 선택했습니다." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "메르시를 선택했습니다." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "마우가를 선택했습니다." << std::endl;
		}
		else {
			std::cout << "보기에 없는 번호입니다." << std::endl;
		}
	}
	else if (gamePick == 3)
	{
		std::cout << "마인크래프트를 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 크리퍼" << std::endl;
		std::cout << "2. 좀비피그맨" << std::endl;
		std::cout << "3. 스켈레톤" << std::endl;
		std::cout << "4. 닭" << std::endl;
		std::cout << "5. 늑대" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "크리퍼를 선택했습니다." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "좀비피그맨을 선택했습니다." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "스켈레톤을 선택했습니다." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "닭을 선택했습니다." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "늑대를 선택했습니다." << std::endl;
		}
		else {
			std::cout << "보기에 없는 번호입니다." << std::endl;
		}
	}
	else if (gamePick == 4)
	{
		std::cout << "포켓몬고를 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 피카츄" << std::endl;
		std::cout << "2. 눈꼬마" << std::endl;
		std::cout << "3. 리자몽" << std::endl;
		std::cout << "4. 갸라도스" << std::endl;
		std::cout << "5. 잉어킹" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "피카츄를 선택했습니다." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "눈꼬마를 선택했습니다." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "리자몽을 선택했습니다." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "갸라도스를 선택했습니다." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "잉어킹을 선택했습니다." << std::endl;
		}
		else {
			std::cout << "보기에 없는 번호입니다." << std::endl;
		}
	}
	else if (gamePick == 5)
	{
		std::cout << "동물의숲을 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 링링" << std::endl;
		std::cout << "2. 뚝심" << std::endl;
		std::cout << "3. 봉추" << std::endl;
		std::cout << "4. 탱고" << std::endl;
		std::cout << "5. 루시" << std::endl;

		std::cin >> charPick;

		if (charPick == 1)
		{
			std::cout << "링링을 선택했습니다." << std::endl;
		}
		else if (charPick == 2)
		{
			std::cout << "뚝심을 선택했습니다." << std::endl;
		}
		else if (charPick == 3)
		{
			std::cout << "봉추를 선택했습니다." << std::endl;
		}
		else if (charPick == 4)
		{
			std::cout << "탱고를 선택했습니다." << std::endl;
		}
		else if (charPick == 5)
		{
			std::cout << "루시를 선택했습니다." << std::endl;
		}
		else {
			std::cout << "보기에 없는 번호입니다." << std::endl;
		}
	}
	else {
		std::cout << "보기에 없는 번호입니다." << std::endl;
	}
	//*/

	// 과제 02-1: switch문
	///*
	switch (gamePick)
	{
	case 1:
		std::cout << "롤을 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 리신" << std::endl;
		std::cout << "2. 문도" << std::endl;
		std::cout << "3. 징크스" << std::endl;
		std::cout << "4. 티모" << std::endl;
		std::cout << "5. 애니" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "리신을 선택했습니다." << std::endl;
			break;
		case 2:
			std::cout << "문도를 선택했습니다." << std::endl;
			break;
		case 3:
			std::cout << "징크스를 선택했습니다." << std::endl;
			break;
		case 4:
			std::cout << "티모를 선택했습니다." << std::endl;
			break;
		case 5:
			std::cout << "애니를 선택했습니다." << std::endl;
			break;
		default:
			std::cout << "보기에 없는 번호입니다." << std::endl;
			break;
		}
		break;

	case 2:
		std::cout << "오버워치를 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 정크렛" << std::endl;
		std::cout << "2. 디바" << std::endl;
		std::cout << "3. 아나" << std::endl;
		std::cout << "4. 메르시" << std::endl;
		std::cout << "5. 마우가" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "정크렛을 선택했습니다." << std::endl;
			break;
		case 2:
			std::cout << "디바를 선택했습니다." << std::endl;
			break;
		case 3:
			std::cout << "아나를 선택했습니다." << std::endl;
			break;
		case 4:
			std::cout << "메르시를 선택했습니다." << std::endl;
			break;
		case 5:
			std::cout << "마우가를 선택했습니다." << std::endl;
			break;
		default:
			std::cout << "보기에 없는 번호입니다." << std::endl;
			break;
		}
		break;

	case 3:
		std::cout << "마인크래프트를 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 크리퍼" << std::endl;
		std::cout << "2. 좀비피그맨" << std::endl;
		std::cout << "3. 스켈레톤" << std::endl;
		std::cout << "4. 닭" << std::endl;
		std::cout << "5. 늑대" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "크리퍼를 선택했습니다." << std::endl;
			break;
		case 2:
			std::cout << "좀비피그맨을 선택했습니다." << std::endl;
			break;
		case 3:
			std::cout << "스켈레톤을 선택했습니다." << std::endl;
			break;
		case 4:
			std::cout << "닭을 선택했습니다." << std::endl;
			break;
		case 5:
			std::cout << "늑대를 선택했습니다." << std::endl;
			break;
		default:
			std::cout << "보기에 없는 번호입니다." << std::endl;
			break;
		}
		break;

	case 4:
		std::cout << "포켓몬고를 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 피카츄" << std::endl;
		std::cout << "2. 눈꼬마" << std::endl;
		std::cout << "3. 리자몽" << std::endl;
		std::cout << "4. 갸라도스" << std::endl;
		std::cout << "5. 잉어킹" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "피카츄를 선택했습니다." << std::endl;
			break;
		case 2:
			std::cout << "눈꼬마를 선택했습니다." << std::endl;
			break;
		case 3:
			std::cout << "리자몽을 선택했습니다." << std::endl;
			break;
		case 4:
			std::cout << "갸라도스를 선택했습니다." << std::endl;
			break;
		case 5:
			std::cout << "잉어킹을 선택했습니다." << std::endl;
			break;
		default:
			std::cout << "보기에 없는 번호입니다." << std::endl;
			break;
		}
		break;

	case 5:
		std::cout << "동물의숲을 선택했습니다." << std::endl;

		std::cout << "좋아하는 캐릭터를 고르세요." << std::endl;
		std::cout << "1. 링링" << std::endl;
		std::cout << "2. 뚝심" << std::endl;
		std::cout << "3. 봉추" << std::endl;
		std::cout << "4. 탱고" << std::endl;
		std::cout << "5. 루시" << std::endl;

		std::cin >> charPick;

		switch (charPick)
		{
		case 1:
			std::cout << "링링을 선택했습니다." << std::endl;
			break;
		case 2:
			std::cout << "뚝심을 선택했습니다." << std::endl;
			break;
		case 3:
			std::cout << "봉추를 선택했습니다." << std::endl;
			break;
		case 4:
			std::cout << "탱고를 선택했습니다." << std::endl;
			break;
		case 5:
			std::cout << "루시를 선택했습니다." << std::endl;
			break;
		default:
			std::cout << "보기에 없는 번호입니다." << std::endl;
			break;
		}
		break;

	default:
		std::cout << "보기에 없는 번호입니다." << std::endl;
		break;
	}
	//*/
	
	//*/

	return 0;
}