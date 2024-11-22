/**********************

[while]
- 조건이 참인 동안 특정 코드를 반복 실행하기 위한 반복문.
- 조건이 거짓이 될 때까지 게속 반복.
- 일반적으로 반복 횟수가 미리 정해지지 않았거나 특정 조건을 만족할 때까지 반복할 경우 사용

while (true)
{
	// 위 조건이 만족하면 해당 코드블록이 실행
	// 단, 종료 조건이 있어야만 해당 while문이 종료.
}

[do-while]
- 조건이 참인지 여부와 관계없이 코드블록을 최소 한 번은 실행해야할 때 사용

do
{
	// 실행 코드
} while (true);	// do 블록 실행 후 조건 평가. 조건이 참이면 코드블록을 다시 실행, 거짓이면 종료

**********************/

#include <iostream>

int main()
{
	//int num = 0;

	//while (num < 10)
	//{
	//	num++;
	//	std::cout << num << std::endl;
	//}

	//int sum = 0;
	//int num1 = 0;

	//while (true)
	//{
	//	sum += num1;

	//	if (sum > 5000) break;
	//	
	//	num1++;
	//}

	//// 1. 입력한 숫자만큼 출력
	//std::cout << "숫자 입력: ";
	//int inputNum;
	//std::cin >> inputNum;

	//int cnt = 0;
	//while (cnt < inputNum)
	//{
	//	std::cout << "입력한 숫자만큼 출력" << std::endl;
	//	cnt++;
	//}

	// 2. 계속해서 정수를 입력받아 누적한다. (0 입력 시 종료)
	/*int inputNum1 = 1;
	int total = 0;

	while (inputNum1 != 0) {
		std::cout << "정수를 입력하세요.(0: 종료): ";
		std::cin >> inputNum1;
		total += inputNum1;
	}

	std::cout << "총합: " << total << std::endl;*/

	int inputNum;
	int total = 0;

	do
	{
		std::cout << "0보다 큰 숫자를 입력해라.(0: 종료): ";
		std::cin >> inputNum;
		total += inputNum;
	} while (inputNum != 0);

	std::cout << "총합: " << total << std::endl;

	int i = 0;

	std::cout << "== while문 ==" << std::endl;
	while (i > 0) {
		std::cout << "이 메세지는 출력되지 않는다." << std::endl;
	}

	std::cout << "== do-while문 ==" << std::endl;
	do
	{
		std::cout << "이 메세지는 최소 한 번 출력된다." << std::endl;
	} while (i > 0);

	srand(time(0));
	int random = rand() % 3 + 1;	// 0, 1, 2

	std::cout << random << std::endl;
}