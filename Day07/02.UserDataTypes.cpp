/*********************************

[구조체]
- 여러 개의 변수를 묶어 하나의 데이터 단위로 정의하는 사용자 정의 데이터 형식
- 각각의 변수를 멤버로 가지고 이러한 멤버들은 서로 다른 데이터 타입일 수 있다.
- C++에서는 함수도 포함 가능.

[구조체 구조]
// (키워드) (구조체 이름)
struct MyStruct
{
	// 멤버 변수
};

*********************************/

#include <iostream>

// 학생과 관련된 정보
struct Student
{
	int age;			// 나이
	int phoneNum;		// 전화번호
	std::string name;	// 이름
};

struct Point
{
	int x;
	int y;

	void Pirnt();		// C++에서는 함수도 멤버로 가능
};

// 구조체 Padding
struct Test
{
	short s;	// 2
	char c;		// 1
	int i;		// 7
};

int main()
{
	Student st;

	st.name = "경일이";
	st.age = 10;
	st.phoneNum = 1234;

	std::cout << "이름: " << st.name << std::endl;
	std::cout << "나이: " << st.age << std::endl;
	std::cout << "전화번호: " << st.phoneNum << std::endl;

	Point p;

	p.x = 10;
	p.y = 20;

	std::cout << "구조체 p.x의 값: " << p.x << std::endl;
	std::cout << "구조체 p.y의 값: " << p.y << std::endl;
	// 구조체 Point의 멤버 함수
	p.Pirnt();

	Point p1 = { 50,102 };		// 생성과 동시에 초기화
	std::cout << "구조체 p.x의 값: " << p1.x << std::endl;
	std::cout << "구조체 p.y의 값: " << p1.y << std::endl;

	Person person[3];
	person[0].name = "홍길동";
	person[0].phoneNumber = "010-1234";
	person[0].age = 20;

	person[1].name = "홍길서";
	person[1].phoneNumber = "010-9876";
	person[1].age = 37;

	person[2].name = "홍길남";
	person[2].phoneNumber = "010-5555";
	person[2].age = 50;

	// 출력
	Person person1[3] = {
		{"홍길동", "010", 50},
		{"홍길남", "019", 60},
		{"홍길서", "015", 30},
	};

	for (int i = 0; i < 3; i++)
	{
		std::cout << person[i].name << ", " << person[i].phoneNumber 
			<< ", " << person[i].age << std::endl;
	}
}

void Point::Pirnt()
{
	std::cout << "Point 구조체의 멤버 함수" << std::endl;
}

struct Person
{
	std::string name;
	std::string phoneNumber;
	int age;
};
