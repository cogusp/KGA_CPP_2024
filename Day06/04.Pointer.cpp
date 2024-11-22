/****************************

[포인터 배열]
- 배열의 각 요소가 포인터인 배열
- 배열의 타입을 자료형으로 하듯 배열의 타입을 int* 으로 선언
- 즉, 배열의 각 원소는 int를 가리키는 포인터 형으로 선언
- 따라서 int 배열에서 각각의 원소를 int형 변수로 취급했던 것처럼 int* 배열에서 
  각각의 원소를 포인터로 취급할 수 있음.

[배열 포인터]
- 배열의 첫번째 요소를 가리키는 포인터
- 배열의 이름은 배열의 첫번째 요소 주소이므로 배열 포인터를 사용하면 배열 요소에 쉽게 접근 가능

[배열의 이름과 첫번째 원소와의 관계]
- 배열의 이름은 첫번째 원소를 가리키는 포인터라고 할 수 있는가? No
- 배열의 이름은 첫번째 원소의 주소와 같지만 배열의 이름 자체는 포인터가 아님.
- 배열은 배열 자체의 데이터 구조이고, 포인터는 메모리 주소를 가리키기 때문.
- 배열의 이름을 사용할 때, 암묵적으로 배열의 첫번째 원소를 가리키는 포인터로 타입 변환됨.
- 즉, 배열의 이름을 포인터처럼 사용할 수 있지만 다른 개념.

[상수 포인터]
- 두 가지 방식으로 사용
1. 포인터 자체가 상수인 경우
 - 포인터가 가리키는 주소를 변경할 수 없지만, 그 주소에 저장된 값은 변경 가능

2. 포인터가 가리키는 값이 상수인 경우
 - 포인터가 가리키는 값을 변경할 수 없지만, 포인터 자체는 다른 주소를 가리킬 수 있음.

****************************/

#include <iostream>

using namespace std;

// 배열을 받아서 두 숫자를 더하는 함수
int AddNum(int number[])
{
	return number[0] + number[1];
}

// 두 배열을 받아서 각 인덱스의 값들을 더하는 함수
void AddArr(int arr1[], int arr2[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << arr1[i] << " + " << arr2[i] << " = " << arr1[i] + arr2[i] << endl;
	}
}

int main()
{
	/*
	// 포인터 배열
	int* arr[3];

	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	arr[0] = &num1;
	arr[1] = &num2;
	arr[2] = &num3;

	cout << "num1: " << num1 << ", *arr[0]: " << *arr[0] << endl;
	cout << "num2: " << num2 << ", *arr[1]: " << *arr[1] << endl;
	cout << "num3: " << num3 << ", *arr[2]: " << *arr[2] << endl;

	cout << &num1 << "   " << arr[0] << endl;

	cout << endl << endl;

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArr;
	pArr = arr1;	// 배열의 시작 주소를 저장

	for (int i = 0; i < 10; i++)
	{
		cout << "arr1[" << i << "]의 주소 값: " << &arr1[i] << "  ";
		cout << "(pArr + " << i << ")의 값: " << (pArr + i) << "  ";

		if (&arr1[i] == (pArr + i))
		{
			cout << "---> 일치" << endl;
		}
		else
		{
			cout << "---> 불일치" << endl;

		}
	}

	// 포인터 상수
	int num = 10;
	int* const ptr = &num;

	// ptr이 가리키는 값은 변경 가능
	*ptr = 30;
	cout << *ptr << endl;

	// ptr이 다른 주소를 가리키게 할 수 없음
	int other = 5;
	// ptr = &other;	// Error

	// 상수 포인터
	int val = 10;
	const int* ptr1 = &val;

	// ptr1이 가리키는 값 변경 불가능
	// *ptr1 = 20;		// Error

	// ptr1이 다른 주소를 가리키게 할 수 있음
	ptr1 = &other;
	*/

	int num[] = { 1,2 };
	int res = AddNum(num);
	cout << res << endl;

	const int size = 3;
	int numArr1[size] = { 1,2,3 };
	int numArr2[size] = { 4,5,6 };

	AddArr(numArr1, numArr2, size);
}