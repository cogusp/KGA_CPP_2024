/*********************************

[생성자 멤버 초기화 리스트]
- 멤버 변수가 생성자 본문이 실행되기 전에 초기화
- 생성자 매개변수 뒤에 삽입. 
- 콜론으로 시작한 다음 초기화할 각 변수를 쉼표로 구분.
- 유지 보수 및 가독성이 좋음!!

[Getter / Setter]
- 멤버 변수를 private으로 선언하고, 외부에서 직접적인 접근을 차단.
- 객체의 데이터를 보호하고, 외부와의 인터페이스를 제공.

1. Getter
 - 읽기 전용으로 멤버 변수의 값을 반환
 - const를 함수 뒤에 붙여 멤버 변수의 변경을 방지

2. Setter
 - 멤버 변수 값을 설정

*********************************/

#include <iostream>

class A {

public:
	A() {
		// 생성자 본문
		// 멤버 변수 초기화
	}
};

class Monster
{
public:
	std::string mName;
	int mAtk;
	int mHealth;

	Monster(const std::string& monsterName, int monsterAtk, int monsterHealth)
		:mName(monsterName), mAtk(monsterAtk), mHealth(monsterHealth)
	{
		// 여기서 초기화할 필요 없음
		//Init();
	}

	// 멤버 변수 외의 기타 로직을 초기화할 경우
	//void Init();
};

class Exam
{
public:
	const int num;

	// 참조 변수
	int& score;

	//Exam()
	//{
	//	// num = 1; // Error
	//	score = 2;
	//}

	Exam(int num, int score) : num(num), score(score) {}
};

class Person
{
private:
	std::string mName;
	int mAge;
public:
	std::string GetName()const { return mName; }
	void SetName(const std::string& name)
	{
		mName = name;
	}
	int GetAge()const { return mAge; }
	void SetAge(const int age) { mAge = age; }
};

int main()
{
	Monster* m = new Monster("고블린", 10, 20);

	Person p;
	p.SetName("이힝");
	p.SetAge(10);

	std::cout << "이름: " << p.GetName() << std::endl;
	std::cout << "나이: " << p.GetAge() << std::endl;
}