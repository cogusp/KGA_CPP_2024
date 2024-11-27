/***************************

[디자인 패턴]
- Singleton
- 오직 한 개의 인스턴스만을 갖도록 보장.
- 클래스의 객체가 복사 X,

Manager는 하나의 Instance만 가지게 작성하는 것이 좋음
-> SIngleton을 사용하면 가능
- 전역적인 접근성 및 단일 Instance를 통해 효율적으로 관리 가능

논리와 관련된 Manager, 게임 로직을 상대적으로 관리하기 쉬움

***************************/

#include <iostream>

// 구 방식
//class Singleton
//{
//private:
//	static Singleton* instance;
//
//public:
//	static Singleton* GetInstance()
//	{
//		if (instance == nullptr)
//		{	
//			// 오래된 방식으로 누수가 발생하기 쉬움
//			// 명시적으로 해제하는 과정이 필수
//			instance = new Singleton();
//		}
//		return instance;
//	} 
//
//};

template <typename T>

class Singleton
{
private:
	// 외부에서 객체 생성이 불가능하도록 사전에 방지
	Singleton()
	{
		std::cout << "싱글톤 인스턴스 생성" << std::endl;
	}
	~Singleton(){}

	// 복사 생성자 및 연산자 사용을 사전에 방지
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	static Singleton& GetInstance()
	{
		static Singleton instance;

		return instance;
	}

	void Show()
	{
		std::cout << "싱글톤" << std::endl;
	}
};

int main()
{
	Singleton& s1 = Singleton::GetInstance();

	s1.Show();

	Singleton& s2 = Singleton::GetInstance();

	if (&s1 == &s2)
	{
		std::cout << "같음" << std::endl;
	}
}