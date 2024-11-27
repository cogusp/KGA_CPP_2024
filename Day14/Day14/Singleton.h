#pragma once
#include <iostream>

template <typename T>

class Singleton
{
private:
	Singleton()
	{
		std::cout << "�̱��� �ν��Ͻ� ����" << std::endl;
	}
	~Singleton() {}

public:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	static Singleton& GetInstance()
	{
		static T instance;

		return instance;
	}
};