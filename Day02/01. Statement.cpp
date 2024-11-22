/***********************************************************************

분기(조건문)
[if]
- 프로그램의 실행 흐름을 제어하는 데 사용.
- 주어진 조건의 참/거짓에 따라 코드 블록 실행.
- if문 작성의 제한은 없지만 적은 사용 권장.

if (조건)
{
	- 위 조건이 참이면 실행되는 코드
	- 조건이 참이면 {} 안의 코드 실행, 거짓이면 건너뜀.
}

[else]
- 위의 if문이 거짓이면 실행

[else if]
if (조건 1)
{
	// 조건 1이 참이면 실행
}
else if (조건 2)
{
	// 조건 2가 참이면 실행
}
else
{
	// 조건 1, 2가 거짓이면 실행
}

************************************************************************/

#include <iostream>

int main()
{
	// 만약 소괄호 안이 참이면
	//if (true)
	//{
	//	// 여기를 실행.
	//	std::cout << "첫번째 if문 블록 안" << std::endl;
	//}

	//std::cout << "if문이 실행 안되면 여기가 실행" << std::endl;

	//// else
	//if (false)
	//{
	//	std::cout << "두번째 if문" << std::endl;
	//}
	//if (true)
	//{
	//	std::cout << "세번째 if문" << std::endl;
	//}
	////else
	////{
	////	// 위의 if문이 거짓이면 여기가 실행
	////	std::cout << "세번째 if문이 거짓이면 여기가 실행된다." << std::endl;
	////}
	//else if (true)
	//{
	//	// 위의 if문의 조건이 거짓이면 실행
	//}

	//if (true)	// 조건이 참이면
	//{
	//	// 실행

	//	if (true)	// 위의 조건이 참이고, 조건이 참이면 실행
	//	{
	//		// 위의 if문이 동작하면 실행
	//	}
	//}

	//int number;
	//std::cout << "====== 정수 입력 ======" << std::endl;

	//std::cout << "정수 입력: ";
	//std::cin >> number;			// 입력받음

	//// 입력받은 정수가 0보다 크면
	//if (number > 0)
	//{
	//	// 실행
	//	std::cout << "입력한 수는 양수입니다. number: " << number << std::endl;
	//}
	//if (number < 0)
	//{
	//	// 실행
	//	std::cout << "입력한 수는 음수입니다. number: " << number << std::endl;
	//}

	//std::cout << "====== 정수 입력 ======" << std::endl;

	// 점수 입력용
	//int score;

	//std::cin >> score;

	//// 입력받은 점수가 90점과 같거나 크다면
	//if (score >= 90)
	//{
	//	std::cout << "A학점" << std::endl;
	//}
	//else if (score >= 80)
	//{
	//	std::cout << "B학점" << std::endl;
	//}
	//else if (score >= 70)
	//{
	//	std::cout << "C학점" << std::endl;
	//}
	//else
	//{
	//	std::cout << "F학점" << std::endl;
	//}

	// 3~5 봄
	// 6~8 여름
	// 9~11 가을
	// 그외 겨울

	int month;

	std::cout << "1~12 중 정수를 입력하세요: ";
	std::cin >> month;

	if (month <= 0 || month >= 13) 
	{
		std::cout << month << "월은 없습니다." << std::endl;
	}
	else
	{
		if (month >= 3 && month <= 5)
		{
			std::cout << month << "월은 봄입니다." << std::endl;
		}
		else if (month >= 6 && month <= 8)
		{
			std::cout << month << "월은 여름입니다." << std::endl;
		}
		else if (month >= 9 && month <= 1)
		{
			std::cout << month << "월은 가을입니다." << std::endl;
		}
		else
		{
			std::cout << month << "월은 겨울입니다." << std::endl;
		}
	}

	int input;

	std::cout << "점수 입력: ";
	std::cin >> input;

	if (input >= 0 && input <= 100)
	{
		if (input >= 60)
		{
			std::cout << "합격!!" << std::endl;

			// 학점
			if (input >= 90)
			{
				std::cout << "학점 A" << std::endl;
			}
		}
	}

	int inputNum;
	std::cin >> inputNum;

	// 입력한 값을 2로 나눈 나머지가 0이면 => 짝수
	if ((inputNum % 2) == 0)
	{

	}
}