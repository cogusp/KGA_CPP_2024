/*****************************************
[���������]
 - ������ Ŭ������ ��ü�� �����Ͽ� ��ü�� ������ �� ����ϴ� ������.
 
 1. ���� ���� : ��ü�� ������ �� ��ü�� ��� ��� ������ �ܼ��� ����.
	- ���� ��� ������ �������� ���, �������� �ּҰ��� ����
	-> ��, ���� �޸� ������ ����Ű�� ��.
	-> ���� �� ��ü���� �ش� �޸𸮸� �����ϸ� ������ ����.
	-> �� ��ü�� ���� �޸� �ּҸ� ����Ű�� ������ �� ��ü�� �Ҹ�Ǹ鼭 �޸𸮸� �����ϸ� �ٸ� ��ü�� �� �̻� ��ȿ���� ���� �޸𸮸� ����Ű�� �Ǿ� ���� �߻�.

 2. ���� ���� : ���� ��ü�� ������ ���� ������ ���ο� �޸𸮸� �Ҵ��Ͽ� �����ϴ� ��.
	-> �ٸ� �޸𸮸� ����ϰ� �ǹǷ� ���� ������ ���� ����.

******************************************/

#include <iostream>

using namespace std;

// ���� ����
class MyArray
{
private:
	int* data;
	int size;

public:
	MyArray(int size) : size(size), data(new int[size]) {}

	// �⺻ ���� ������ (���� ����) : �ڵ����� �־���
	MyArray(const MyArray& other) : size(other.size), data(other.data)
	{
		cout << "���� ������ ȣ��" << endl;
	}
	
	// MyArray(const MyArray& other) = delete;	=> �⺻ ���� ������ ����.

	~MyArray()
	{
		//delete[] data;
	}

	void SetValue(int index, int value) { data[index] = value; }
	int GetValue(int index) { return data[index]; }

	int* GetDataAddr() { return data; }		// �ּ� Ȯ�ο�

};

// ���� ����
class YouArray
{
private:
	int* data;
	int size;
public:
	YouArray(int size);

	// ���� ����
	YouArray(const YouArray& other);

	~YouArray();

	int* GetDataArr()const { return data; }
};
YouArray::YouArray(int size) 
{
	this->size = size;
	data = new int[size];
}
// ���� ����
YouArray::YouArray(const YouArray& other)
{
	cout << "���� ������ ȣ��" << endl;
	this->size = other.size;
	this->data = new int[other.size];

	for (int i = 0; i < size; i++)
	{
		this->data[i] = other.data[i];
	}
}

YouArray::~YouArray()
{
	if (data != nullptr) delete[] this->data;
	data = nullptr;
}

class MyClass
{
private :
	int data;
public:
	MyClass(int value) : data(value)
	{
		cout << "������ ȣ��" << endl;
	}
	MyClass(const MyClass& other) : data(other.data)
	{
		cout << "���� ������" << endl;
	}

	void Show()const
	{
		cout << "������ : " << data << endl;
	}
};

void Func(MyClass m)
{
	cout << "����� ��ü" << endl;
	m.Show();
}

int main()
{
// ���� ����
	cout << "===== ���� ���� =====" << endl;
	MyArray arr1(10);

	arr1.SetValue(0, 42);

	MyArray arr2(arr1);	// ���� ������ ȣ�� (���� ����)

	cout << arr1.GetDataAddr() << endl;
	cout << arr2.GetDataAddr() << endl;		// �ּ� ���� 

	cout << arr1.GetValue(0) << endl;
	cout << arr2.GetValue(0) << endl;

	arr1.SetValue(0, 80);

	cout << arr1.GetValue(0) << endl;
	cout << arr2.GetValue(0) << endl;

	cout << "--------------------------------------------" << endl;

// ���� ����
	cout << "===== ���� ���� =====" << endl;

	YouArray arr(10);

	cout << arr.GetDataArr() << endl;;

	YouArray clone = arr;

	cout << clone.GetDataArr() << endl;

	cout << "--------------------------------------------" << endl;

	MyClass m(10);

	Func(m);
	
	m.Show();

	return 0;
}

