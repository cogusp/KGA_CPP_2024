/*

L(Liskov Substitution Principle, LSP, �������� ġȯ ��Ģ)
- �ڽ� Ŭ������ �θ� Ŭ������ ����� ��ü�� �� �־�� ��.
- ���α׷����� �θ� Ŭ���� ��ü�� ���Ǵ� ��� �κп� �ڽ� Ŭ���� ��ü�� ��ü�ص�
  �������� ������ �ٲ��� �ʾƾ� ��.
- �������� ��� ������ �ڽ� Ŭ������ �θ� Ŭ�������� ���ǵ� �ൿ�� �������� �ʵ��� �ؾ� ��.
- �θ� Ŭ������ �����ͳ� ������ ���� �ڽ� Ŭ������ ����� �� ���� ������ �ȵ�.

*/

#include <iostream>

class Bird
{
public:
	virtual void Fly() const
	{
		std::cout << "���� ���ư���." << std::endl;
	}
};

class Eagle :public Bird
{
	void Fly() const override
	{
		std::cout << "�������� ���ư���." << std::endl;
	}
};

class Dog :public Bird
{
	void Fly() const override
	{
		std::cout << "���� �������� ���ư���?" << std::endl;
	}
};