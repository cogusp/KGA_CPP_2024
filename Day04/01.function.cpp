/**************************************************

[함수]
- 자판기에 비유
- 특정 작업을 수행하는 코드의 집합
- 코드의 안정성, 에러를 수정하기 쉬움.
- 큰 프로그램일수록 수정이나 유지보수가 쉽지 않기에 기능 별로 세분화하는 것이 중요
- 코드의 재사용성이 좋음.
- 함수 이름을 통해 코드의 의미를 이해하기 쉬움.

[함수의 형태]
- 매개변수와 반환값의 유무에 따라 4개의 형태로 나눔.
- 매개변수 o 반환값 o
- 매개변수 o 반환값 x
- 매개변수 x 반환값 o
- 매개변수 x 반환값	 x

[예시]

// [출력 형태(반환)] [함수 이름] [입력 형태(매개변수, 파라미터)]
int Sum(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

1. 매개변수 x, y를 받아 Sum() 기능을 수행하고 int형으로 반환
2. 입력 형태: 입력 형태로 설정된 변수를 매개변수, 파라미터라고 함.둘 이상의 매개변수를 설정할
			  필요가 있을 때, 콤마로 구분.
3. 함수의 기능: 해당 함수 내에서 입력 변수(매개변수, 파라미터)를 더해 변수 result에 저장하고,
				result를 반환.

**************************************************/

#include <iostream>

// 매개변수 o 반환값 o
int Sum(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

// 매개변수 o 반환값 x
void Print(int num)
{
	std::cout << num << std::endl;
}

// 매개변수 x 반환값 o
int ReadNum()
{
	int num;
	std::cin >> num;
	return num;
}

// 매개변수 x 반환값 x
void MyPrint()
{
	std::cout << "Empty" << std::endl;
}

// 원형만 선언(프로토타입)하고 실 구현은 아래에 작성.
// 가독성이 좋아짐.
// 헤더파일에 함수 원형, 실제 구현은 cpp에 작성.
void MyPrint1();

int main()
{
	// 1.
	int result;
	result = Sum(1, 2);
	std::cout << result << std::endl;

	// 2.
	Print(5);

	// 3.
	int result1;
	result1 = ReadNum();
	std::cout << result1 << std::endl;

	// 4.
	MyPrint();


	return 0;
}

void MyPrint1()
{
	std::cout << "This is MyPrint1" << std::endl;
}


//#include <iostream>
//
//int Add(int a, int b);
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a + b;
//
//	std::cout << c << std::endl;
//
//	return 0;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}