/*

실습

1. Person 클래스 생성
2. 속성: 이름, 나이, 생년월일, 전화번호
3. 기능: 정보 출력 함수

*/

#include <iostream>

class CPerson
{
public:
	std::string mName;
	std::string mBirth;
	std::string mNumber;
	int mAge;

public:
	CPerson()
	{
		mName = "이채현";
		mBirth = "2001. 08. 25.";
		mNumber = "010-1234-5678";
		mAge = 24;
	}

	CPerson(const std::string& name, const std::string& birth,
		const std::string& num, const int age)
	{
		mName = name;
		mBirth = birth;
		mNumber = num;
		mAge = age;
	}

	void PrintInfo()const;
};

int main()
{
	CPerson* person1 = new CPerson();
	person1->PrintInfo();

	CPerson* person2 = new CPerson("이디노", "2011. 01. 26.", "010-1111-1111", 19);
	person2->PrintInfo();

	delete person1; 
	delete person2;
	person1 = nullptr;
	person2 = nullptr;
}

void CPerson::PrintInfo() const
{
	std::cout << "이름: " << mName << std::endl;
	std::cout << "나이: " << mAge << std::endl;
	std::cout << "생년월일: " << mBirth << std::endl;
	std::cout << "전화번호: " << mNumber << std::endl << std::endl;
}

