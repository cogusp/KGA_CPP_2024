/***************************

[static]

[extern]


***************************/

#include <iostream>

extern int GlovalValue;
extern int staticGValue;

//void Count()
//{
//	static int count = 0;	// 함수 내 변수 앞에 static: 초기화가 단 한번만 수행됨
//	count++;
//	std::cout << count << std::endl;
//}


/*

클래스 내의 static 변수 및 함수
- 클래스 내에서 static으로 선언된 변수는 해당 클래스의 모든 인스턴스에서 공유
- 인스턴스 간의 공통으로 사용되는 변수. 클래스의 인스턴스 없이도 접근 가능.

1. 클래스 정적 멤버 변수: 모든 클래스 인스턴스가 공유하는 변수
 - 클래스의 모든 인스턴스가 해당 변수에 접근이 가능. 
 - 하나의 인스턴스에서 변수를 수정하면 다른 인스턴스에도 반영됨.

2. 클래스 정적 멤버 함수: 클래스의 인스턴스 없이 호출할 수 있는 함수.
 - 정적 멤버 함수는 클래스의 정적 멤버 변수에만 접근 가능.
 - 인스턴스 멤버 변수나 함수에는 접근 불가.

*/

class Count
{
public:
	Count()
	{
		count++;
	}
	static int GetCount()
	{
		return count;
	}
	void Print();
	static int Sum(int a, int b)
	{
		count = 1;

		// num = 1; // 일반 멤버 변수는 정적 멤버 함수에서 접근 불가능
		GetCount();

		// Print();	// 일반 멤버 함수는 정적 멤버 함수에서 접근 불가능
	}

private:
	int num;
	static int count;

};

int main()
{
	std::cout << GlovalValue << std::endl;
	//std::cout << staticGValue << std::endl;	// Error

	/*Count();
	Count();*/

	Count c1;
	Count c2;
	Count c3;

	std::cout << c1.GetCount << std::endl;
}