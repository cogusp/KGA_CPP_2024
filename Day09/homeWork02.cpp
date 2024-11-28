/*

상속을 할 때,
부모 클래스의 멤버들은 protected, private, public으로 하나씩 만들고,
상속을 받는 자식 클래스는 protected, private, public으로 상속 받을 경우,
부모 클래스 멤버 변수에 어떻게 접근할 수 있는지 / 어떠한 차이점이 있는지 정리.

부모 클래스의 접근 제어 지시자	|	자식 클래스에서 상속 받을 때 접근 제어 지시자	|		자식 클래스에서 접근 가능 여부	|	main 함수에서 접근 가능 여부
public							|		public										|				O						|				O
								|		protected									|				O						|				X
								|		private										|				O						|				X
								|													|										|
protected						|		public										|				O						|				X
								|		protected									|				O						|				X
								|		private										|				O						|				X
								|													|										|
private							|		public										|				X						|				X
								|		protected									|				X						|				X
								|		private										|				X						|				X

*/

#include <iostream>

using namespace std;

class Parent
{
private:
	string secret;
protected:
	string phone;
	int age;
public:
	string name;
	Parent(const string& n, const string& p, const int age) : name(n), phone(p), age(age) 
	{
		secret = "private 멤버 변수";
		cout << "부모 클래스 생성자 호출" << endl;
	}

	void Print()
	{
		cout << endl;
		cout << "=====Parent 클래스의 멤버 변수=====" << endl;
		cout << "secret 변수 : " << secret << endl;
		cout << "phone 변수 : " << phone << endl;
		cout << "age 변수 : " << age << endl;
		cout << "name 변수 : " << name << endl;
		cout << endl;
	}
};

class Son1 : public Parent 
{
public:
	Son1(const string& n, const string& p, const int age) : Parent(n, p ,age)
	{
		cout << "Son1 클래스 생성자 호출" << endl;
	}

	void PrintInfo()
	{
		cout << endl;
		cout << "=====Parent 클래스의 멤버 변수=====" << endl;
		// cout << "secret 변수 : " << secret << endl; -> error
		cout << "secret 변수 : error 발생" << endl;
		cout << "phone 변수 : " << phone << endl;
		cout << "age 변수 : " << age << endl;
		cout << "name 변수 : " << name << endl;
		cout << endl;
	}
};

class Son2 : protected Parent
{
public:
	Son2(const string& n, const string& p, const int age) : Parent(n, p, age)
	{
		cout << "Son2 클래스 생성자 호출" << endl;
	}

	void PrintInfo()
	{
		cout << endl;
		cout << "=====Parent 클래스의 멤버 변수=====" << endl;
		// cout << "secret 변수 : " << secret << endl; -> error
		cout << "secret 변수 : error 발생" << endl;
		cout << "phone 변수 : " << phone << endl;
		cout << "age 변수 : " << age << endl;
		cout << "name 변수 : " << name << endl;
		cout << endl;
	}
};

class Son3 : private Parent
{
public:
	Son3(const string& n, const string& p, const int age) : Parent(n, p, age)
	{
		cout << "Son3 클래스 생성자 호출" << endl;
	}

	void PrintInfo()
	{
		cout << endl;
		cout << "=====Parent 클래스의 멤버 변수=====" << endl;
		// cout << "secret 변수 : " << secret << endl; -> error
		cout << "secret 변수 : error 발생" << endl;
		cout << "phone 변수 : " << phone << endl;
		cout << "age 변수 : " << age << endl;
		cout << "name 변수 : " << name << endl;
		cout << endl;
	}
};


int main()
{
	Parent* p = new Parent("부모", "010-0000-0000", 100);
	p->Print();

	Son1* s1 = new Son1("홍길동", "010-1111-1111", 35);
	s1->PrintInfo();

	Son2* s2 = new Son2("홍길서", "010-2222-2222", 45);
	s2->PrintInfo();

	Son3* s3 = new Son3("홍길남", "010-3333-4444", 55);
	s3->PrintInfo();

	cout << "======main함수에서 Parent 클래스의 멤버 변수 접근=====" << endl;
	cout << "------Son1 클래스------" << endl;
	cout << s1->name << endl;
	cout << "------Son2 클래스------" << endl;
	// cout << s2->name << endl;  ->error
	cout << "error 발생" << endl;
	cout << "------Son3 클래스------" << endl;
	// cout << s3->name << endl;  -> error
	cout << "error 발생" << endl;

	delete p;
	delete s1;
	delete s2;
	delete s3;
	p = nullptr;
	s1 = nullptr;
	s2 = nullptr;
	s3 = nullptr;
}