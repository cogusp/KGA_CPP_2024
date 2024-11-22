/*

트럼프카드 52장
♠(0) A(0)~K(12)
♣(1) A(0)~K(12)
♥(2) A(0)~K(12)
◆(3) A(0)~K(12)

1. 트럼프 카드는 위와 같이 52장이 있다.
2. 플레이어가 있다.
3. 딜러가 있다.

[게임 조건]
- 딜러는 3장의 카드를 보여줌
- 플레이어는 베팅을 함.
- 이기는 조건은 (베팅한 금액 * 2)
  - 첫번째 카드와 두번째 카드 사이에 세번째 카드가 범위 안이면 이김
- 숫자로만 판단
- 쓴 카드는 제외 -> 같은 카드는 사용하면 안됨
- 특정 확률로 잭팟 (베팅한 금액 * 10)

예) ◆ A(1) (딜러)   ♥ J(12) (딜러)   ♠ K(13)   -> 패
예) ◆ A(1) (딜러)   ♥ K(13) (딜러)   ♠ B(2)    -> 승
예) ◆ A(1) (딜러)   ♥ K(13) (딜러)   ♠ K(13)   -> 패

[종료 조건]
- 17판
- 베팅 최소 금액보다 소지금이 적을 때

배열, 셔플, 비교, 입력 x, 나누기, 모듈러 연산

배열 -> 셔플 -> 접근 -> 접근 제한

*/

#include <iostream>

void Betting();
void Print();
void Score();

int playerMoney = 10000;
int minMoney = 500;
int betMoney = 0;
int randomCard[3];			// 랜덤 카드


int main()
{
	int card[52];				// 카드 52장
	int dest, sour, temp;		// 셔플 변수

	// 카드 생성
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	// 셔플
	for (int i = 0; i < 50; i++)
	{
		dest = rand() % 52;
		sour = rand() % 52;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	srand(time(0));

	// 17판
	for (int i = 0; i < 17; i++)
	{
		// 배팅액보다 소지금이 적으면 종료
		if (playerMoney < minMoney) break;

		// 시작
		std::cout << std::endl << "===== " << i + 1 << "번째 게임 시작 =====" << std::endl << std::endl;

		// 배팅
		Betting();
		
		// 이전에 나온 카드가 아닌 것으로 3장 선택
		// 모양과 번호 비교
		for (int i = 0; i < 3; i++)
		{
			int r = rand() % 52;
			
			if (card[r] == 0)
			{
				i--;
			}
			else
			{
				randomCard[i] = card[r];
				card[r] = 0;
			}
		}

		// 출력
		Print();

		// 점수 판별
		Score();
	}

	return 0;
}

void Betting()
{
	while (1)
	{
		std::cout << "*** 배팅 시작 (최소 금액 500원) ***" << std::endl;
		std::cout << "나의 소지금 >>> " << playerMoney << std::endl;
		std::cout << "배팅액 입력 >>> ";
		std::cin >> betMoney;

		if (minMoney <= betMoney)
		{
			playerMoney -= betMoney;
			break;
		}
		else
			continue;
	}
}

void Print()
{
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		if (randomCard[i] >= 39)
			std::cout << " ◆" << randomCard[i] % 13 << "  ";
		else if (randomCard[i] >= 26)
			std::cout << " ♥" << randomCard[i] % 13 << "  ";
		else if (randomCard[i] >= 13)
			std::cout << " ♣" << randomCard[i] % 13 << "  ";
		else if (randomCard[i] >= 0)
			std::cout << " ♠" << randomCard[i] % 13 << "  ";
	}

	std::cout << std::endl;
}


void Score()
{
	// 특정 확률로 잭팟 -> 베팅 금액 * 4
	// 1번째와 2번째 안에 3번째가 포함되면 성공 -> 베팅 금액 * 2
	// 같거나 포함되지 않았으면 실패 -> 베팅 금액 잃음
	if ((randomCard[0] % 13) == 7 || (randomCard[1] % 13) == 7 || (randomCard[2] % 13) == 7)
	{
		playerMoney += betMoney * 4;
		std::cout << std::endl << " !! 잭팟 !! " << std::endl;
	}
	else if	  ((randomCard[0] % 13) < (randomCard[2] % 13) && (randomCard[1] % 13) > (randomCard[2] % 13)
			|| (randomCard[0] % 13) > (randomCard[2] % 13) && (randomCard[1] % 13) < (randomCard[2] % 13))
	{
		playerMoney += betMoney * 2;
		std::cout << std::endl << "    성공!   " << std::endl;
	}
	else
	{
		std::cout << std::endl << "    땡!   " << std::endl;
	}
}