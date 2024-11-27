/**********************************

[Recursive (재귀)]
- 재귀 함수는 반드시 종료 조건이 있어야 함. (기저 조건, 종료 조건)
- 재귀 단계: 함수가 자기 자신을 호출하는 단계. 이 단계에서 더 작은 하위 문제로 분해.

- For문보다 성능이 떨어질 수도 있음 (함수 오버스택)

**********************************/

#include <iostream>

int Factorial(int n)
{
	// 1. 종료 조건
	if (n <= 1)
		return 1;

	// 2. 재귀 단계
	return n * Factorial(n - 1);
}

// 위 함수의 호출 단계

// 1. 함수는 Factorial(3)에서 종료 조건 확인 후
// n이 1보다 크기 때문에 3 * Facotrial(2)를 반환하려 함.

// 2. Factorial(2) 호출
// n이 1보다 크기 때문에 2 * Factorial(1)을 반환하려 함.

// 3. Factorial(1) 호출
// 종료 조건을 만족하므로 1 반환

// 4. Factorial(1)은 1 반환. Factorial(2)는 2 * 1 반환. Factorial(3)은 3 * 2 반환
int main()
{
	std::cout << Factorial(3) << std::endl;
}