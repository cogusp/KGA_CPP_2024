/***************************************

[함수 오버로딩]
- 동일한 함수 이름을 사용하여 매개변수 타입, 갯수 또는 순서를 다르게 정의하는 것.
- 비슷한 작업을 수행하는 여러 함수가 있을 때 각 함수에 다른 이름을 부여하는 대신
  각 코드의 가독성이 향상되며 하나의 함수 이름으로 다양한 형태의 함수를 호출 가능.

[성립 조건]
1. 함수 이름이 동일해야 된다.
2. 리턴 타입은 고려대상이 아니다.
3. 매개변수의 데이터 타입이 다르거나 갯수가 달라야 함.

***************************************/

#include <iostream>

void PrintValue(int value)
{
	std::cout << "정수 값: " << value << std::endl;
}

void PrintValue(double value)
{
	std::cout << "실수 값: " << value << std::endl;
}

int Add(int a, int b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	PrintValue(1);
	PrintValue(1.5);

	Add(1, 2);
	Add(1, 2, 3);
}