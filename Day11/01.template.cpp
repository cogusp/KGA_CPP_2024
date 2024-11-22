/***************************

[template]
- ����ڰ� ������ �ڷ����� �Լ�, Ŭ������ ������ �ð��� ����
- ������ ������ ���� ���� ������ Ÿ�Կ� ���� �ߺ��� �ڵ带 �ۼ��� �ʿ䰡 ����.
- ������ Ÿ�ӿ� ������ Ÿ���� �����ϱ� ������ ���� Ÿ�� �������� ȿ������ �� ����.

1. �Լ� ���ø�
- �Լ��� �ʿ��� �ڷ����� �����ϰ�, �Լ��� ȣ�� �� �ڷ����� �������־� ���

2. Ŭ���� ���ø�
- �پ��� ������ Ÿ���� �����ϴ� Ŭ������ ������ �� �ְ� ����.
- ���ø� �Ű������� ���� Ŭ������ ��� ������ ��� �Լ��� Ÿ���� �Ϲ�ȭ�� �� ����.

[Ư��ȭ]
- Ư�� ������ Ÿ�Կ� ���ؼ��� �ٸ� ������ �����ϱ� ���� ���
- �Լ� ���ø��� �򰥸��� ����

***************************/

#include <iostream>

//int GetMax(const int x, const int y)
//{
//	if (x > y) return x;
//	else return y;
//}
//
//float GetMax(const float x, const float y)
//{
//	if (x > y) return x;
//	else return y;
//}

// ���� �Լ� ���ø����� �����

template<typename T>
T GetMax(const T x, const T y)
{
	if (x > y) return x;
	else return y;
}

template<typename T>
void Output(const T data)
{
	std::cout << "������: " << data << std::endl;
}

template<typename T>
void Output1(const T a, const T b)
{
	std::cout << a << ", " << b << std::endl;
}

template<typename T1, typename T2>
void Output2(const T1 a, const T2 b)
{
	std::cout << a << ", " << b << std::endl;
}

// ������ Ŭ���� ���ø�
template<typename T>
class Box
{
private:
	T data;

public:
	void SetData(T data) { this->data = data; }
	T GetData()const { return data; }
};

template<typename T1, typename T2>
class Box2
{
private:
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirst()const;
	T2 GetSecond()const;

	void SetFirst(T1 val) { firstData = val; }
	void SetSecond(T1 val) { secondData = val; }
};


int main()
{
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax(1.3, 2.7) << std::endl;
	Output(1);
	Output(2.6);
	Output("dddd");
	Output1(1, 2);
	Output2(1.5, 2);

	// typename�� �ϳ��� ���, �Ű��������� �ڷ����� ���� ������ ���� �߻�
	// Output1(1.5, 2);	

	Box<int> box;
	box.SetData(10);
	std::cout << box.GetData() << std::endl;

	Box<double> box1;
	box1.SetData(12.5);
	std::cout << box1.GetData() << std::endl;

	Box2<int, double> b2;
	b2.SetFirst(10);
	b2.SetSecond(15.23);

	std::cout << b2.GetFirst() << ", " << b2.GetSecond() << std::endl;
}

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirst() const
{
	return firstData;
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecond() const
{
	return secondData;
}