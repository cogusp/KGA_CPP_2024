/*************************************

[overriding]
- �ڽ� Ŭ������ �θ� Ŭ������ �޼��带 �������Ͽ� �ڽ��� ������� �����ϰ� �����
  ��ü���� ���α׷����� �߿��� ����.
- �Լ� �̸��� �Ű������� �θ� Ŭ������ �Լ��� �����ؾ� ��.
- �ڽ� Ŭ������ �θ� Ŭ������ �Լ��� �����ϰų� Ȯ���ų �� ����.

[virtual]
- �θ� Ŭ������ �Լ��� ���̸�, �ش� �Լ��� �������̵� �������� ��Ÿ��.

[override]
- �ڽ� Ŭ�������� �Լ��� �θ� Ŭ������ �Լ��� ��Ȯ�� �������̵� �ߴ��� Ȯ��.
- ������̱� ������ �������� ����.

*************************************/

#include <iostream>

// �θ� Ŭ����
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n) :name(n) 
	{
		std::cout << "�θ� Ŭ���� Vehicle ������ ȣ��" << std::endl;
	}

	// ���� �Լ�
	virtual void Move()const
	{
		std::cout << name << "�� �θ� Ŭ���� Vehicle �Լ� ȣ��" << std::endl;
	}

	// ���� �Ҹ���
	virtual ~Vehicle()
	{
		std::cout << "�θ� Ŭ���� Vehicle �Ҹ��� ȣ��" << std::endl;
	}
};

class Car :public Vehicle
{
public:
	Car(const std::string& n) :Vehicle(n)
	{
		std::cout << "�ڽ� Ŭ���� Car ������ ȣ��" << std::endl;
	}

	// void Move()const override	// override Ű����� ��� ��
	void Move()const
	{
		std::cout << name << "�� �ڽ� Ŭ���� Car �Լ� ȣ��" << std::endl;
	}

	~Car()
	{
		std::cout << "�ڽ� Ŭ���� Car �Ҹ��� ȣ��" << std::endl;
	}
};

class Bike :public Vehicle
{
public:
	Bike(const std::string& n) :Vehicle(n)
	{
		std::cout << "�ڽ� Ŭ���� Bike ������ ȣ��" << std::endl;
	}

	void Move()const
	{
		std::cout << name << "�� �ڽ� Ŭ���� Bike �Լ� ȣ��" << std::endl;
	}

	~Bike()
	{
		std::cout << "�ڽ� Ŭ���� Bike �Ҹ��� ȣ��" << std::endl;
	}
};

int main()
{
	Vehicle* v;	
	v = new Car("������");
	v->Move();

	delete v;
}