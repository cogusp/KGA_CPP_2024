#include <iostream>

int Attack(int n, int target);
int FindMaxNumber(const int a, const int b);
int Sum(const int n);
bool IsPrime(const int n);

int main()
{
	int player = 1;
	int playerHP = 100;
	int monster = 2;
	int monsterHP = 70;
	int a, b;

	std::cout<< "===== Game Start =====" << std::endl;

	std::cout << "Player HP: " << playerHP << std::endl;
	std::cout << "Monster HP: " << monsterHP << std::endl;

	std::cout << "===== Game Start =====" << std::endl;
	std::cout << "!! Player Attacked Monster" << std::endl;
	monsterHP = Attack(player, monsterHP);
	std::cout << "Player HP: " << playerHP << ", Monster: " << monsterHP << std::endl;

	std::cout << "!! Monster Attacked Player" << std::endl;
	playerHP = Attack(monster, playerHP);
	std::cout << "Player HP: " << playerHP << ", Monster: " << monsterHP << std::endl;
	
	std::cout << std::endl;

	std::cout << "===== Find Max Number =====" << std::endl;
	std::cout << "Two Number: ";
	std::cin >> a >> b;
	std::cout << "Max Number is " << FindMaxNumber(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "===== Is Prime =====" << std::endl;
	std::cout << "One Number: ";
	std::cin >> a;
	std::cout << a << " is Prime: " << IsPrime(a) << std::endl;
}

int Attack(int n, int target)
{
	return target -= 5;
}

int FindMaxNumber(const int a, const int b)
{
	if (a >= b) return a;
	else if (a < b) return b;
}

int Sum(const int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}

bool IsPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return false;
	}

	return true;
}

