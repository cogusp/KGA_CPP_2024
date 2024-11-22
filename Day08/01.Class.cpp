/*********************************

[클래스]
- 객체지향/절차지향 프로그래밍
- 객체지향 프로그래밍은 우리가 살고 있는 실제 세계가 객체들로 구성되어 있는 것처럼
  소프트웨어도 객체로 구성하는 방법이다.
- 실제 세계에서는 사람, 세탁기, TV 등 많은 객체가 존재하고, 객체 나름대로의
  고유한 기능을 수행하면서 다른 객체들과 상호작용함.

[클래스의 기본 구조]

1. 클래스 정의
 - class 키워드로 정의

2. 멤버 변수
 - 클래스 내부에 정의된 변수로 객체의 상태(속성)를 저장

3. 멤버 함수
 - 클래스 내부에 선언 및 구현되며 객체의 동작을 정의

class 붕어빵틀
{
	// 멤버 변수
	int 팥;
	int 밀가루;

	// 멤버 함수: 기능을 수행함
	void 굽기()
	{

	}
};

[객체]
- 클래스는 객체를 정의하는 틀이나 설계도.
- 객체는 설계도를 기반으로 실체화를 시키는 것.

[클래스 구조체 차이]
- default 접근 제어 지시자가 클래스는 private, 구조체는 public으로 다름.

[접근 제어 지시자]
- private: 클래스 내부에서만 참조 가능 (비자금) - 멤버 변수
- public: 외부에서 자유롭게 참조 가능 (길에 떨어진 돈) - 멤버 함수
- protected: 클래스 내부와 상속 관계에 있는 클래스에서만 접근 가능(우리 집 생활비)

				클래스 내부				클래스 외부				상속 클래스
private				o						x						x
public				o						o						o
protected			o						x						o

[정적 할당과 동적 할당]

1. 정적 할당
 - 컴파일 시점에 메모리 크기가 결정
 - 프로그램이 종료될 때까지 자동으로 관리됨.
 - 크기를 미리 지정해햐 하므로 유연성이 떨어지고 메모리 공간이 고정되므로
  비효율적일 수도 있다.

2. 동적 할당
 - 런 타임에 메모리 크기가 결정
 - 힙
 - 크기를 유연하게 조절할 수 있으며 런타임 중 필요한만큼 메모리를 할당
 - 직접 관리를 해야하기 때문에 메모리 누수 위험성이 있다
 - 동적할당 후 반드시 해제해야 함
 - 크기를 미리 알 수 없거나 실행 중에 변경될 가능성이 있는 경우

*********************************/

struct SCircle 
{
// private:
	int radius;
	std::string color;

	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

class CCircle 
{
public:
	int radius;
	std::string color;

private:
	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

class Student {

private:
	// 멤버 변수
public:
	// 멤버 함수
	void Print()
	{
		// 여기에 구현해도 상관 없음.
	}
	void Print(int a, int b);
};

#include <iostream>

int main()
{
	// 구조체
	SCircle sc;
	sc.radius = 5;
	sc.calcArea();

	// 클래스
	CCircle cc;
	cc.radius = 5;

	CCircle* c = new CCircle();
}

void Student::Print(int a, int b)
{
	std::cout << a << ", " << b << std::endl;
}
