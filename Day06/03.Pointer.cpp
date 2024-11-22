#include <iostream>

using namespace std;

/*

[포인터]
- 포인터 변수에 +, -
- 중요한 건 포인터 연산 시 자료형의 크기에 비례해서 증감

[대입]
- 한 포인터가 다른 포인터와 동일한 메모리 주소를 가리키도록 함.
- 같은 메모리 주소를 가리키게 되어 위험할 수 있음.
- 포인터의 타입이 일치해야 함.
- 여러 포인터가 동일한 메모리 주소를 가리키면 메모리 해제 시 문제가 발생될 수 있음. 

*/

int main()
{
	int a;
	int* pa = &a;
	cout << "pa의 값: " << pa << endl;

	// 다음 주소 값 반환 (+4)
	cout << (pa + 1) << endl;
	// 이전 주소 값 반환 (-4)
	cout << (pa - 1) << endl;

	int n = 10;
	int* pn = &n;
	int* pm = pn;

	cout << *pn << endl;
	cout << *pm << endl;

	*pn = 20;
	// 같은 주소를 가리키고 있기 때문에 값 변경됨
	cout << *pn << endl;
	cout << *pm << endl;

	int intA = 10;
	int* pIntA = &intA;
	// 다른 타입의 경우 대입이 안됨.
	//double* dp = pIntA;
}