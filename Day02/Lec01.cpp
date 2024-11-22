#include <iostream>

int main()
{
	// 과제 01
	int num1;
	int num2;

	std::cout << "두 정수를 입력하세요. :";
	std::cin >> num1 >> num2;

	// 과제 01-1: 사칙연산 프로그램
	///*
	std::cout << "두 정수의 사칙연산을 시작합니다." << std::endl;

	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
	//*/

	// 과제 01-2: 두 정수 비교 후 연산
	///*
	if (num1 > num2)
	{
		std::cout << "첫번째 값이 크므로 두 값을 더한 값은 " << num1 + num2 << "입니다." << std::endl;
	}
	else if (num1 < num2)
	{
		std::cout << "두번째 값이 크므로 두 값을 뺀 값은 " << num1 - num2 << "입니다." << std::endl;
	}
	else {
		std::cout << "두 값이 같습니다." << std::endl;
	}
	//*/
}