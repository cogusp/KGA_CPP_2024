#pragma once
#include <iostream>

template <typename T>

class Singleton
{
private:
	Singleton()
	{
		std::cout << "½Ì±ÛÅæ ÀÎ½ºÅÏ½º »ý¼º" << std::endl;
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