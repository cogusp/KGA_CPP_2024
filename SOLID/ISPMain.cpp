/*

I(Interface Segregation Principle, ISP, �������̽� �и� ��Ģ)
- Ŭ���̾�Ʈ�� ������� �ʴ� �޼��忡 �������� �ʾƾ� �Ѵٴ� ��Ģ
- �������̽��� ������� �ʿ信 �°� �۰� ��ü������ ����.
- Ŭ���̾�Ʈ�� ���ʿ��� ��ɿ� �������� �ʵ���.
- ��, Ư�� Ŭ���̾�Ʈ�� �ʿ�� �ϴ� ��ɸ��� �����ϴ� �������̽��� ����

*/

#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void Eat() = 0;
	virtual void Sleep() = 0;
	virtual void Fly() = 0;
	virtual void Swim() = 0;
};

class Dog :public Animal
{
public:
	void Eat() override
	{
		cout << "��ƿ��";
	}
	void Sleep() override
	{
		cout << "�帣��";
	}
	void Fly() override
	{
		cout << "Am I Flying?";
	}
	void Swim() override
	{
		cout << "÷����";
	}
};

class EatBehavior
{
public:
	virtual void Eat() = 0;
};

class SleepBehavior
{
public:
	virtual void Sleep() = 0;
};

class Dog
{
private:
	EatBehavior* e;

public:
	
};