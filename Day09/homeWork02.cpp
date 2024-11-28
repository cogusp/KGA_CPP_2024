/*

����� �� ��,
�θ� Ŭ������ ������� protected, private, public���� �ϳ��� �����,
����� �޴� �ڽ� Ŭ������ protected, private, public���� ��� ���� ���,
�θ� Ŭ���� ��� ������ ��� ������ �� �ִ��� / ��� �������� �ִ��� ����.

�θ� Ŭ������ ���� ���� ������	|	�ڽ� Ŭ�������� ��� ���� �� ���� ���� ������	|		�ڽ� Ŭ�������� ���� ���� ����	|	main �Լ����� ���� ���� ����
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
		secret = "private ��� ����";
		cout << "�θ� Ŭ���� ������ ȣ��" << endl;
	}

	void Print()
	{
		cout << endl;
		cout << "=====Parent Ŭ������ ��� ����=====" << endl;
		cout << "secret ���� : " << secret << endl;
		cout << "phone ���� : " << phone << endl;
		cout << "age ���� : " << age << endl;
		cout << "name ���� : " << name << endl;
		cout << endl;
	}
};

class Son1 : public Parent 
{
public:
	Son1(const string& n, const string& p, const int age) : Parent(n, p ,age)
	{
		cout << "Son1 Ŭ���� ������ ȣ��" << endl;
	}

	void PrintInfo()
	{
		cout << endl;
		cout << "=====Parent Ŭ������ ��� ����=====" << endl;
		// cout << "secret ���� : " << secret << endl; -> error
		cout << "secret ���� : error �߻�" << endl;
		cout << "phone ���� : " << phone << endl;
		cout << "age ���� : " << age << endl;
		cout << "name ���� : " << name << endl;
		cout << endl;
	}
};

class Son2 : protected Parent
{
public:
	Son2(const string& n, const string& p, const int age) : Parent(n, p, age)
	{
		cout << "Son2 Ŭ���� ������ ȣ��" << endl;
	}

	void PrintInfo()
	{
		cout << endl;
		cout << "=====Parent Ŭ������ ��� ����=====" << endl;
		// cout << "secret ���� : " << secret << endl; -> error
		cout << "secret ���� : error �߻�" << endl;
		cout << "phone ���� : " << phone << endl;
		cout << "age ���� : " << age << endl;
		cout << "name ���� : " << name << endl;
		cout << endl;
	}
};

class Son3 : private Parent
{
public:
	Son3(const string& n, const string& p, const int age) : Parent(n, p, age)
	{
		cout << "Son3 Ŭ���� ������ ȣ��" << endl;
	}

	void PrintInfo()
	{
		cout << endl;
		cout << "=====Parent Ŭ������ ��� ����=====" << endl;
		// cout << "secret ���� : " << secret << endl; -> error
		cout << "secret ���� : error �߻�" << endl;
		cout << "phone ���� : " << phone << endl;
		cout << "age ���� : " << age << endl;
		cout << "name ���� : " << name << endl;
		cout << endl;
	}
};


int main()
{
	Parent* p = new Parent("�θ�", "010-0000-0000", 100);
	p->Print();

	Son1* s1 = new Son1("ȫ�浿", "010-1111-1111", 35);
	s1->PrintInfo();

	Son2* s2 = new Son2("ȫ�漭", "010-2222-2222", 45);
	s2->PrintInfo();

	Son3* s3 = new Son3("ȫ�泲", "010-3333-4444", 55);
	s3->PrintInfo();

	cout << "======main�Լ����� Parent Ŭ������ ��� ���� ����=====" << endl;
	cout << "------Son1 Ŭ����------" << endl;
	cout << s1->name << endl;
	cout << "------Son2 Ŭ����------" << endl;
	// cout << s2->name << endl;  ->error
	cout << "error �߻�" << endl;
	cout << "------Son3 Ŭ����------" << endl;
	// cout << s3->name << endl;  -> error
	cout << "error �߻�" << endl;

	delete p;
	delete s1;
	delete s2;
	delete s3;
	p = nullptr;
	s1 = nullptr;
	s2 = nullptr;
	s3 = nullptr;
}