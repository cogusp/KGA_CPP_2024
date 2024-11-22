/********************************************

[for]
- 반복 작업을 수행할 때 사용되는 제어문 중 하나.
- 반복 횟수가 명확하거나 정밀한 제어가 필요할 때 유용.
- while보다 많은 코드로 이루어져 있지만 임의의 횟수만큼 반복을 수행하기에 편리.

for (초기화; 조건; 증감)
{
	// 반복 실행 코드블록
}

- 초기화: 루프가 시작될 때 처음 한번만 실행되는 부분으로 반복문에 사용될 변수 초기화.
- 조건: 각 반복이 실행될 때마다 조건이 검사되며 참이면 루프가 계속 실행되고, 거짓이면 종료.
- 증감: 각 반복이 끝난 후 실행되는 부분으로 변수를 증가/감소시키면서 반복 횟수를 제어

********************************************/

#include <iostream>

int main()
{
	//std::cout << 0 << std::endl;
	//std::cout << 1 << std::endl;
	//std::cout << 2 << std::endl;
	//std::cout << 3 << std::endl;
	//std::cout << 4 << std::endl;

	//std::cout << std::endl;

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//std::cout << std::endl;

	//for (int i = 10; i >= 1; i--)
	//{
	//	std::cout << i << std::endl;
	//}

	//std::cout << std::endl;

	//// 1~10 중 5까지 출력
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i > 5) break;

	//	std::cout << i << std::endl;
	//}
	//
	//std::cout << std::endl;

	//// 1~10 중 홀수만 출력
	//for (int i = 0; i <= 10; i++)
	//{
	//	if (i % 2 == 0) continue;
	//	
	//	std::cout << i << std::endl;
	//}

	//std::cout << std::endl;

	//// 1~50까지 반복하는데 3의 배수나 5의 배수인지 검사
	//for (int i = 1; i <= 50; i++)
	//{
	//	if (i % 3 == 0 || i % 5 == 0) std::cout << i << std::endl;;
	//}

	//std::cout << std::endl;

	//for (int i = 1; i <= 10; i += 2)
	//{
	//	std::cout << i << " ";
	//}

	//std::cout << std::endl;

	//// 입력받은 만큼 출력하는 코드
	//int inputNum;
	//std::cin >> inputNum;

	//for (int i = 0; i < inputNum; i++)
	//{
	//	std::cout << i << " ";
	//}

	//std::cout << std::endl;

	//// 1~100까지 합을 구하는 코드
	//int sum = 1;
	//
	//for (int i = 2; i <= 100; i++)
	//{
	//	sum += i;
	//}

	//std::cout << sum << std::endl;

	//std::cout << std::endl;

	//// 다중 for문
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int k = 0; k < 3; k++)
	//	{
	//		std::cout << "i의 값: " << i << "	  k의 값: " << k << std::endl;
	//	}
	//}

	/*for (int i = 2; i < 10; i++)
	{
		std::cout << "===== " << i << "단 =====" << std::endl;

		for (int k = 1; k < 10; k++)
		{
			std::cout << i << " * " << k << " = " << i * k << std::endl;
		}

		std::cout << std::endl;
	}*/

	// 내가 입력한 숫자가 양수인지 검사하는 프로그램
	//int numInputs;
	//bool isPositive = true;

	//std::cout << "입력할 숫자의 개수: ";
	//std::cin >> numInputs;

	//int number;

	//for (int i = 0; i < numInputs; i++) 
	//{
	//	std::cout << i + 1 << "번째 숫자를 입력해라: ";
	//	std::cin >> number;

	//	// 입력받은 숫자가 양수가 아니면
	//	if (number <= 0)
	//	{
	//		isPositive = false;
	//		break;
	//	}
	//}

	//// 결과 출력
	//if (isPositive)
	//{
	//	std::cout << "양수" << std::endl;
	//}
	//else {
	//	std::cout << "입력받은 숫자 중 양수가 아닌 게 있지 않을까?" << std::endl;
	//}

	// 별 찍기 과제


	// 01
	int n1 = 5;	// 출력할 줄의 수

	for (int i = 0; i <= n1; i++) {
		for (int j = 1; j <= i; j++) {
			// i만큼 별 출력
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 02
	int n2 = 5;

	for (int i = n2; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 03
	int n3 = 5;

	for (int i = n2; i >= 0; i--) {
		for (int j = 1; j < i; j++) {
			std::cout << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 04
	int n4 = 5;

	for (int i = 0; i <= n4; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
}