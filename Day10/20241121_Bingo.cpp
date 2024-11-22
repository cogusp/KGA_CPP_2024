/*

과제

5*5 빙고 게임
숫자를 입력하면 체크표시 넣어주기 (아무 문자로)
빙고 검사
종료 조건: 3줄
컴 vs 플레이어
컴: 랜덤 선택

0	1	2	3	4
5	6	7	8	9
10	11	12	13	14
15	16	17	18	19
20	21	22	23	24

빙고 조건
세로: index + 5
가로: index + 1
대각선: 0~ +6
대각선: 4~ +4

*/

#include <iostream>

class Bingo 
{

};

// 초기화 및 셔플 함수
void Suffle(int(&arr)[25]);

// (함)배열에서 맞는 숫자 찾아서 모양 변경
void Change(int(&arr1)[25], int(&arr2)[25], int select);

// 빙고 체크
void IsBingo(int(&arr)[25], int& cb);

int ComRand(int(&arr)[25]);

// 프린트 함수
void Print(int(&arr)[25], int& pb, int& cb);

int main()
{
	srand(time(0));

	// 크기 25 배열 생성
	int player[25];
	int computer[25];

	// 빙고 체크 변수
	int pBingo = 0;
	int cBingo = 0;

	// 컴퓨터 랜덤 변수
	int cRand = 0;

	// (함)초기화 및 셔플
	Suffle(player);
	Suffle(computer);

	std::cout << "===== BINGO GAME =====" << std::endl;

	// 반복
	for (int i = 0; i < 25; i++)
	{
		Print(player, pBingo, cBingo);

		// 3줄이 완성되면 종료
		if (pBingo == 3 || cBingo == 3) break;

		// 플레이어 입력
		int input = 0;

		std::cout << "플레이어 입력: ";
		std::cin >> input;

		// (함)배열에서 맞는 숫자 찾아서 모양 변경
		Change(player, computer, input);

		// (함) 빙고 체크
		IsBingo(player, pBingo);
		IsBingo(computer, cBingo);


		// 컴퓨터 랜덤
		// (함)배열에서 맞는 숫자 찾아서 모양 변경
		Change(player, computer, ComRand(player));

		// (함) 빙고 체크
		IsBingo(player, pBingo);
		IsBingo(computer, cBingo);
	}

	if (pBingo == 3)
		std::cout << "===== VICTORY!! =====" << std::endl;
	else if (cBingo == 3)
		std::cout << "===== LOSE!! =====" << std::endl;
}

void Suffle(int(&arr)[25])
{
	// 1~25까지의 숫자로 초기화
	for (int i = 1; i <= 25; i++)
	{
		arr[i - 1] = i;
	}

	// 배열 셔플
	for (int i = 0; i < 50; i++)
	{
		int dest = rand() % 25;
		int sour = rand() % 25;

		int temp = arr[dest];
		arr[dest] = arr[sour];
		arr[sour] = temp;
	}
}

void Change(int(&arr1)[25], int(&arr2)[25], int select)
{
	for (int i = 0; i < 25; i++)
	{
		if (arr1[i] == select) arr1[i] = 88;
		if (arr2[i] == select) arr2[i] = 88;
	}
}

void IsBingo(int(&arr)[25], int& cb)
{
	int sum, bingo = 0;

	// 빙고 세로 index + 5
	for (int i = 0; i < 5; i++)
	{
		sum = 0;

		for (int j = 0; j < 25; j += 5)
		{
			if (arr[i + j] == 88) sum++;
		}

		if (sum == 5) bingo++;
	}

	// 빙고 가로 index + 1
	for (int i = 0; i < 25; i += 5)
	{
		sum = 0;

		for (int j = 0; j < 5; j++)
		{
			if (arr[i + j] == 88) sum++;
		}

		if (sum == 5) bingo++;
	}

	// 빙고 0 대각선 0~ +6
	sum = 0;

	for (int i = 0; i < 25; i += 6)
	{
		if (arr[i] == 88) sum++;
	}

	if (sum == 5) bingo++;

	// 빙고 4 대각선 4~ +4
	sum = 0;

	for (int i = 4; i <= 20; i += 4)
	{
		if (arr[i] == 88) sum++;
	}

	if (sum == 5) bingo++;

	// 최종 빙고의 값
	cb = bingo;
}

int ComRand(int(&arr)[25])
{
	int cRand;

	do
	{
		cRand = rand() % 25;
	} while (arr[cRand] == 88);

	return cRand;
}

void Print(int(&arr)[25], int& pb, int& cb)
{
	for (int i = 0; i < 25; i++)
	{
		if (i % 5 == 0) std::cout << std::endl;

		(arr[i] < 10) ? (std::cout << arr[i] << "  ") : (std::cout << arr[i] << " ");
	}
	std::cout << std::endl << std::endl;

	std::cout << ">> 플레이어 빙고: " << pb << std::endl;
	std::cout << ">>  컴퓨터  빙고: " << cb << std::endl << std::endl;
}
