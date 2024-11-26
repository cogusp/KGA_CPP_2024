/*

I(Interface Segregation Principle, ISP, 인터페이스 분리 원칙)
- 클라이언트는 사용하지 않는 메서드에 의존하지 않아야 한다는 원칙
- 인터페이스는 사용자의 필요에 맞게 작고 구체적으로 설계.
- 클라이언트가 불필요한 기능에 의존하지 않도록.
- 즉, 특정 클라이언트가 필요로 하는 기능만을 제공하는 인터페이스를 설계

*/

#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void Eat() = 0;
	virtual void Sleep() = 0;
	virtual void Fly() = 0;
	virtual void Swim() = 0;
};

class Dog :public Animal
{
public:
	void Eat() override
	{
		cout << "우걱우걱";
	}
	void Sleep() override
	{
		cout << "드르렁";
	}
	void Fly() override
	{
		cout << "Am I Flying?";
	}
	void Swim() override
	{
		cout << "첨벙벙";
	}
};

class EatBehavior
{
public:
	virtual void Eat() = 0;
};

class SleepBehavior
{
public:
	virtual void Sleep() = 0;
};

class Dog
{
private:
	EatBehavior* e;

public:
	
};