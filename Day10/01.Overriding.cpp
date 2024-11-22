/*************************************

[overriding]
- 자식 클래스가 부모 클래스의 메서드를 재정의하여 자신의 방식으로 동작하게 만드는
  객체지향 프로그래밍의 중요한 개념.
- 함수 이름과 매개변수가 부모 클래스의 함수와 동일해야 함.
- 자식 클래스가 부모 클래스의 함수를 변경하거나 확장시킬 수 있음.

[virtual]
- 부모 클래스의 함수에 붙이며, 해당 함수가 오버라이딩 가능함을 나타냄.

[override]
- 자식 클래스에서 함수가 부모 클래스의 함수를 정확히 오버라이딩 했는지 확인.
- 명시적이기 때문에 가독성이 좋음.

*************************************/

#include <iostream>

// 부모 클래스
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n) :name(n) 
	{
		std::cout << "부모 클래스 Vehicle 생성자 호출" << std::endl;
	}

	// 가상 함수
	virtual void Move()const
	{
		std::cout << name << "의 부모 클래스 Vehicle 함수 호출" << std::endl;
	}

	// 가상 소멸자
	virtual ~Vehicle()
	{
		std::cout << "부모 클래스 Vehicle 소멸자 호출" << std::endl;
	}
};

class Car :public Vehicle
{
public:
	Car(const std::string& n) :Vehicle(n)
	{
		std::cout << "자식 클래스 Car 생성자 호출" << std::endl;
	}

	// void Move()const override	// override 키워드는 없어도 됨
	void Move()const
	{
		std::cout << name << "의 자식 클래스 Car 함수 호출" << std::endl;
	}

	~Car()
	{
		std::cout << "자식 클래스 Car 소멸자 호출" << std::endl;
	}
};

class Bike :public Vehicle
{
public:
	Bike(const std::string& n) :Vehicle(n)
	{
		std::cout << "자식 클래스 Bike 생성자 호출" << std::endl;
	}

	void Move()const
	{
		std::cout << name << "의 자식 클래스 Bike 함수 호출" << std::endl;
	}

	~Bike()
	{
		std::cout << "자식 클래스 Bike 소멸자 호출" << std::endl;
	}
};

int main()
{
	Vehicle* v;	
	v = new Car("현기차");
	v->Move();

	delete v;
}