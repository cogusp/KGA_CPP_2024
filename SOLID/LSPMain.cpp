/*

L(Liskov Substitution Principle, LSP, 리스코프 치환 원칙)
- 자식 클래스는 부모 클래스의 기능을 대체할 수 있어야 함.
- 프로그램에서 부모 클래스 객체가 사용되는 모든 부분에 자식 클래스 객체를 대체해도
  논리적으로 동작이 바뀌지 않아야 함.
- 안정적인 상속 구조와 자식 클래스는 부모 클래스에서 정의된 행동을 위반하지 않도록 해야 함.
- 부모 클래스의 포인터나 참조를 통해 자식 클래스를 사용할 때 논리가 깨지면 안됨.

*/

#include <iostream>

class Bird
{
public:
	virtual void Fly() const
	{
		std::cout << "새는 날아간다." << std::endl;
	}
};

class Eagle :public Bird
{
	void Fly() const override
	{
		std::cout << "독수리가 날아간다." << std::endl;
	}
};

class Dog :public Bird
{
	void Fly() const override
	{
		std::cout << "개가 훠이훠이 날아간다?" << std::endl;
	}
};