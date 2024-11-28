/*****************************************
[복사생성자]
 - 동일한 클래스의 객체를 복사하여 객체를 생성할 때 사용하는 생성자.
 
 1. 얕은 복사 : 객체를 복사할 때 객체의 모든 멤버 변수를 단순히 복사.
	- 만약 멤버 변수가 포인터인 경우, 포인터의 주소값만 복사
	-> 즉, 같은 메모리 영역을 가리키게 됨.
	-> 만약 한 객체에서 해당 메모리를 수정하면 영향을 받음.
	-> 두 객체가 같은 메모리 주소를 가리키기 때문에 한 객체가 소멸되면서 메모리를 해제하면 다른 객체는 더 이상 유효하지 않은 메모리를 가리키게 되어 문제 발생.

 2. 깊은 복사 : 원본 객체와 동일한 값을 가지는 새로운 메모리를 할당하여 복사하는 것.
	-> 다른 메모리를 사용하게 되므로 서로 영향을 주지 않음.

******************************************/

#include <iostream>

using namespace std;

// 얕은 복사
class MyArray
{
private:
	int* data;
	int size;

public:
	MyArray(int size) : size(size), data(new int[size]) {}

	// 기본 복사 생성자 (얕은 복사) : 자동으로 넣어줌
	MyArray(const MyArray& other) : size(other.size), data(other.data)
	{
		cout << "복사 생성자 호출" << endl;
	}
	
	// MyArray(const MyArray& other) = delete;	=> 기본 복사 생성자 막음.

	~MyArray()
	{
		//delete[] data;
	}

	void SetValue(int index, int value) { data[index] = value; }
	int GetValue(int index) { return data[index]; }

	int* GetDataAddr() { return data; }		// 주소 확인용

};

// 깊은 복사
class YouArray
{
private:
	int* data;
	int size;
public:
	YouArray(int size);

	// 깊은 복사
	YouArray(const YouArray& other);

	~YouArray();

	int* GetDataArr()const { return data; }
};
YouArray::YouArray(int size) 
{
	this->size = size;
	data = new int[size];
}
// 깊은 복사
YouArray::YouArray(const YouArray& other)
{
	cout << "복사 생성자 호출" << endl;
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
		cout << "생성자 호출" << endl;
	}
	MyClass(const MyClass& other) : data(other.data)
	{
		cout << "복사 생성자" << endl;
	}

	void Show()const
	{
		cout << "데이터 : " << data << endl;
	}
};

void Func(MyClass m)
{
	cout << "복사된 객체" << endl;
	m.Show();
}

int main()
{
// 얕은 복사
	cout << "===== 얕은 복사 =====" << endl;
	MyArray arr1(10);

	arr1.SetValue(0, 42);

	MyArray arr2(arr1);	// 복사 생성자 호출 (얕은 복사)

	cout << arr1.GetDataAddr() << endl;
	cout << arr2.GetDataAddr() << endl;		// 주소 동일 

	cout << arr1.GetValue(0) << endl;
	cout << arr2.GetValue(0) << endl;

	arr1.SetValue(0, 80);

	cout << arr1.GetValue(0) << endl;
	cout << arr2.GetValue(0) << endl;

	cout << "--------------------------------------------" << endl;

// 깊은 복사
	cout << "===== 깊은 복사 =====" << endl;

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

