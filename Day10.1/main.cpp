/*************************************

[�߻� Ŭ����]
- �ϳ� �̻��� ���� ���� �Լ��� ������ Ŭ����
- �߻� Ŭ������ �ν��Ͻ�ȭ ��ų �� ����
- �ٸ� Ŭ�������� ��ӹ޾ƾ� �ϴ� �⺻ �������̽��� �⺻ ������ �����ϴ� �� ���.
- Ư�� �Լ�(���� ���� �Լ�)���� �ڽ� Ŭ������ ���� �����ǵ��� ������.
  -> �ݵ�� �����ؾ� ��.

[Virtual Function VS Pure Virtual Function]

1. Virtual Function
- �����θ� ������ �� �ִ�.
- �Ļ� Ŭ�������� ���������� �ʾƵ� �ȴ�.
- ���� �Լ� ������ �߻� Ŭ������ �������� ����.
- Ŭ���� �ν��Ͻ�ȭ�� ����

2. Pure Virtual Function
- �����ΰ� ����.
- �Ļ� Ŭ�������� �ݵ�� ������
- ���� ���� �Լ��� �ϳ��� ������ �߻� Ŭ���� ����
- Ŭ���� �ν��Ͻ�ȭ�� �Ұ���

[Upcasting]
- �ڽ� Ŭ������ ��ü�� �θ� Ŭ���� Ÿ������ ��ȯ
- �������� �����ϸ� ������� Ÿ�� ��ȯ�� �ʿ����.

[Downcasting]
- �θ� Ŭ���� Ÿ���� �ڽ� Ŭ���� Ÿ������ ��ȯ


*************************************/

#include <iostream>
//#include "Player.h"

class Shape
{
public:
	virtual void Draw()const
	{
		std::cout << "�θ� Ŭ���� Shape" << std::endl;
	}
	virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw()const override
	{
		std::cout << "�ڽ� Ŭ���� Circle" << std::endl;

	}
	void CircleFunction()
	{
		std::cout << "�ڽ� Ŭ���� Circle ��� �Լ�" << std::endl;
	}
};

class Rectangle : public Shape
{
public:
	void Draw()const override
	{
		std::cout << "�ڽ� Ŭ���� Rectangle" << std::endl;

	}
	void RectangleFunction()
	{
		std::cout << "�ڽ� Ŭ���� Rectangle ��� �Լ�" << std::endl;
	}
};

int main()
{
	/*
	Player* p = new Player("ȫ", 10);

	p->Attack();
	p->TakeDamage(10);

	delete p;
	p = nullptr;
	*/

	// �߻� Ŭ������ �ν��Ͻ�ȭ �Ұ���
	// Unit* u = new Unit("ddd", 10);

	Shape* shape1 = nullptr;
	Shape* shape2 = nullptr;

	// ��ĳ����: �ڽ� Ŭ���� ��ü�� �θ� Ŭ���� Ÿ���� �����ͷ�
	shape1 = new Circle();
	shape2 = new Rectangle();

	// �ڽ� Ŭ������ ��� �Լ��� ȣ��
	shape1->Draw();
	shape2->Draw();

	// �ٿ�ĳ����
	//Circle* c = (Circle*)shape1;
	//c->CircleFunction();

	// virtual Ű���带 ����� ��� �Ұ���
	Circle* c = dynamic_cast<Circle*>(shape1);
	c->CircleFunction();						// �ڽ� �Լ� ȣ��

	Rectangle* r = dynamic_cast<Rectangle*>(shape2);
	r->RectangleFunction();
}