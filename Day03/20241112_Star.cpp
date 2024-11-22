#include <iostream>

int main()
{
	// 별 찍기 과제


	// 01
	int n1 = 5;

	for (int i = 0; i <= n1; i++) {
		for (int j = 1; j <= i; j++) {
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

	for (int i = 0; i < n3; i++) {
		for (int j = n3; j >= 0; j--) {
			if (j <= i)
			{
				std::cout << "*";
			}
			else 
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// 04
	int n4 = 5;

	for (int i = 0; i < n4; i++) {
		for (int j = 0; j < n4; j++) {
			if (j >= i)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
}