/***************************************

[변수의 존재 기간과 접근 범위]
- 변수는 선언 위치에 따라 크게 전역 변수와 지역 변수로 나뉨.
- 메모리상에 존재하는 기간과 접근할 수 있는 범위에 대한 차이가 있음.

[지역 변수]
- 중괄호 내에 선언되는 변수
- 활동 영역은 변수가 선언된 블록 내에서만 유효, 블록이 끝나면 지역 변수는 메모리에서 사라짐.

[전역 변수]
- 블록 외부에서 정의. 프로그램 전체에 접근 가능.
- 프로그램 내 모든 함수에서 접근 가능
- 프로그램 실행 시작 시 생성, 프로그램이 종료되면 소멸.
- 지양해야 함. (프로그램 안정성과 유지보수에 영향 -> 변경 및 추적, 디버깅의 어려움)

***************************************/

#include <iostream>

// 전역 변수
int GlobalVariableNum = 10;

void GlobalVariable()
{
	std::cout << "접근 가능! " << GlobalVariableNum << std::endl;
}

void LocalVariable()
{
	int num = 1;
	{
		num = 2;

		int num1 = 5;
	}
	//num1 = 1;		// 접근 불가능
}

void MyFucOne()
{
	int myFuncOneNum = 10;
	myFuncOneNum++;
	std::cout << "지역변수 myFuncOneNum의 데이터: " << myFuncOneNum << std::endl;
}

void MyFucTwo()
{
	int num1 = 10;
	int num2 = 10;
	num1++;
	num2++;
	std::cout << "지역변수 num1의 데이터: " << num1 << std::endl;
	std::cout << "지역변수 num2의 데이터: " << num2 << std::endl;
}

int Sum(int a, int b)
{
	a = 5;
	return a + b;	
}

int main()
{
	MyFucOne();
	MyFucTwo();

	std::cout << GlobalVariableNum << std::endl;

	// 안정성 보장
	const int a = 1;

	return 0;
}