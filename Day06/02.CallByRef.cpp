/******************************************************

[callbyValue]

[callbyReference]

[*와 &의 전달 방식]
- *는 변수의 메모리 주소를 전달. 함수 내부에서 포인터를 통해 값을 수정
- 함수 호출 시 변수의 주소를 명시적으로 전달.

- &는 변수의 별칭을 전달하며, 함수 내부에서 직접 값을 수정
- 함수 호출 시 변수의 참조를 암시적으로 전달.

******************************************************/

#include <iostream>

// 함수에 인수를 전달할 때, 인수의 값이 복사되어 함수의 매개변수로 전달.
// 따라서 함수 내부에서 매개변수를 변경하더라고, 호출한 함수의 실제 인수는 변하지 않음.
// 매개변수 n이 실제로 전달된 변수의 값을 복사받는다.
// 따라서 함수 내에서 n의 값을 변경해도, main 함수에서 전달된 원본 변수에는 영향이 없다.
void Value(int n);

// 함수 호출 시 인수로 변수의 주소를 전달하는 방식
// 함수가 매개변수로 받은 포인터를 통해 실제 인수의 값을 직접 수정할 수 있음.
// 함수 내부에서 매개변수의 값을 변경하면, 호출한 함수의 실제 인수도 변경됨.
// 값을 복사하는 대신 주소를 전달하므로 메모리와 성능 효율이 좋다.
// 포인터로 변수의 주소를 전달
// 포인터를 통해 원래 변수가 저장된 메모리 위치에 직접 접근하여 값을 수정할 수 있다.
void Address(int* n);

// 함수 호출 시 인수로 변수의 참조(별명)를 전달
// 함수가 해당 참조를 통해 실제 인수에 접근하여 값을 직접 수정할 수 있다.
// 참조를 사용하면 메모리 주소를 직접 다루지 않아도 되기 때문에 안전하다.
void Reference(int& n);

// 전달된 두 변수의 값을 교환하려고 하지만 값에 의한 것이므로 실제로 호출한 함수의 값은 변경되지 않는다.
void Swap(int a, int b);

// 주소를 사용하여 변수를 직접 변경
// 변수의 주소를 전달받아 그 주소의 값을 바꾸므로, 실제 변수의 값이 변경된다.
void SwapAddr(int* a, int* b);

// 참조를 사용하여 값을 직접 변경
// 변수의 참조를 받아서 변수를 직접 바꾸는 방식으로 값에 의한 것처럼 간단하지만 실제 변수가 변경된다.
void SwapRef(int& a, int& b);

int main()
{
	//int num = 30;
	//Value(num);		// n = num 형태로 복사
	//std::cout << "num의 값: " << num << std::endl;
	//std::cout << "num의 주소 값: " << &num << std::endl;

	//std::cout << std::endl;

	//int num1 = 30;
	//Address(&num1);		// 
	//std::cout << "num1의 값: " << num << std::endl;
	//std::cout << "num1의 주소 값: " << &num << std::endl;

	//std::cout << std::endl;

	//int num2 = 30;
	//Reference(num2);		// 
	//std::cout << "num2의 값: " << num << std::endl;
	//std::cout << "num2의 주소 값: " << &num << std::endl;

	int num1 = 10;
	int num2 = 20;

	std::cout << "Swap 전 데이터: " << num1 << ", " << num2 << std::endl;
	Swap(num1, num2);
	std::cout << "Swap 후 데이터: " << num1 << ", " << num2 << std::endl;

	std::cout << std::endl;

	int num3 = 10;
	int num4 = 20;

	std::cout << "Swap 전 데이터: " << num3 << ", " << num4 << std::endl;
	SwapAddr(&num3, &num4);
	std::cout << "Swap 후 데이터: " << num3 << ", " << num4 << std::endl;

	std::cout << std::endl;

	int num5 = 10;
	int num6 = 20;

	std::cout << "Swap 전 데이터: " << num5 << ", " << num6 << std::endl;
	SwapRef(num5, num6);
	std::cout << "Swap 후 데이터: " << num5 << ", " << num6 << std::endl;

	std::cout << std::endl;
}

void Value(int n)
{
	// n을 10으로 변경하지만, 이 변경은 함수 내부에서만 적용
	n = 10;

	std::cout << "(Value) n의 값: " << n << std::endl;
	std::cout << "(Value) n의 주소 값: " << &n << std::endl;
}

void Address(int* n)
{
	// 역참조
	// n이 가리키는 주소의 값을 10으로 변경 -> 실제 변수가 변경됨.
	*n = 10;

	std::cout << "(Address) n의 값: " << *n << std::endl;
	std::cout << "(Address) n의 주소 값: " << &n << std::endl;
}

void Reference(int& n)
{
	n = 10;

	std::cout << "(Reference) n의 값: " << n << std::endl;
	std::cout << "(Reference) n의 주소 값: " << &n << std::endl;
}

void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	std::cout << "(Value) Swap() 내부의 값: ";
	std::cout << a << ", " << b << std::endl;
}

void SwapAddr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	//std::cout << "(Address) Swap() 내부의 값: ";
	//std::cout << a << ", " << b << std::endl;
}

void SwapRef(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	//std::cout << "(Reference) Swap() 내부의 값: ";
	//std::cout << a << ", " << b << std::endl;
}

// 데이터의 집합
class A {

};

// 데이터의 집합
struct  MyStruct
{

};

struct  Character
{
	// 캐릭터에 관련된 무언가...
};

// 클래스나 구조체 등 데이터가 큰 것들을 가져올 때, 참조나 주소를 사용
// 최적화
void FightFunction(Character* a, Character& b)
{
	
}