/*************************************

[추상 클래스]
- 하나 이상의 순수 가상 함수를 포함한 클래스
- 추상 클래스는 인스턴스화 시킬 수 없음
- 다른 클래스들이 상속받아야 하는 기본 인터페이스나 기본 동작을 정의하는 데 사용.
- 특정 함수(순수 가상 함수)들이 자식 클래스에 의해 구현되도록 강제함.
  -> 반드시 구현해야 함.

[Virtual Function VS Pure Virtual Function]

1. Virtual Function
- 구현부를 포함할 수 있다.
- 파생 클래스에서 재정의하지 않아도 된다.
- 가상 함수 만으로 추상 클래스가 성립되지 않음.
- 클래스 인스턴스화가 가능

2. Pure Virtual Function
- 구현부가 없음.
- 파생 클래스에서 반드시 재정의
- 순수 가상 함수가 하나라도 있으면 추상 클래스 성립
- 클래스 인스턴스화가 불가능

[Upcasting]
- 자식 클래스의 객체를 부모 클래스 타입으로 변환
- 안정성을 보장하며 명시적인 타입 변환이 필요없음.

[Downcasting]
- 부모 클래스 타입을 자식 클래스 타입으로 변환


*************************************/

#include <iostream>
//#include "Player.h"

class Shape
{
public:
	virtual void Draw()const
	{
		std::cout << "부모 클래스 Shape" << std::endl;
	}
	virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw()const override
	{
		std::cout << "자식 클래스 Circle" << std::endl;

	}
	void CircleFunction()
	{
		std::cout << "자식 클래스 Circle 멤버 함수" << std::endl;
	}
};

class Rectangle : public Shape
{
public:
	void Draw()const override
	{
		std::cout << "자식 클래스 Rectangle" << std::endl;

	}
	void RectangleFunction()
	{
		std::cout << "자식 클래스 Rectangle 멤버 함수" << std::endl;
	}
};

int main()
{
	/*
	Player* p = new Player("홍", 10);

	p->Attack();
	p->TakeDamage(10);

	delete p;
	p = nullptr;
	*/

	// 추상 클래스는 인스턴스화 불가능
	// Unit* u = new Unit("ddd", 10);

	Shape* shape1 = nullptr;
	Shape* shape2 = nullptr;

	// 업캐스팅: 자식 클래스 객체를 부모 클래스 타입의 포인터로
	shape1 = new Circle();
	shape2 = new Rectangle();

	// 자식 클래스의 멤버 함수를 호출
	shape1->Draw();
	shape2->Draw();

	// 다운캐스팅
	//Circle* c = (Circle*)shape1;
	//c->CircleFunction();

	// virtual 키워드를 지우면 사용 불가능
	Circle* c = dynamic_cast<Circle*>(shape1);
	c->CircleFunction();						// 자식 함수 호출

	Rectangle* r = dynamic_cast<Rectangle*>(shape2);
	r->RectangleFunction();
}