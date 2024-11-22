/*********************************

자료형(Data Type)
- 자료(Data)의 형태 지정
- 데이터가 메모리에 저장되는 형태와 처리되는 방식을 명시하는 역할
- 0,1로만 구성된 컴퓨터에게 여러 형태의 자료를 저장하기 위함.

변수
- 값을 지정할 수 있는 메모리 공간에 붙여진 이름
- 변수를 선언하면 메모리 공간이 할당, 할당된 메모리 공간에 이름이 붙는다.

[변수의 이름]
- 변수의 이름을 통해 할당된 메모리 공간에 접근 가능
- 값을 저장할 수도 있고, 저장된 값을 참조할 수도 있음.

[변수 선언 시 주의사항]
1. 변수 이름은 알파벳, 숫자, 언더스코어로 구성
2. 대소문자 구분
3. 숫자로 시작할 수 없고, 키워드(이미 정해진 것)도 사용 X
4. 공백 X
5. 특수문자 X
6. 반드시 의미있는 이름으로 사용

**********************************/

/*********************************

과제
1. 자료형 조사(unsigned의 역할)
2. 정수, 실수 변수 선언 및 출력
3. 자료형 크기 출력

자료형 이름			형태		크기(byte)			범위	

-논리형-
bool				논리			1			false/true

-정수형-
short								2
int									4
long								8

-실수형-
float								4
double								8

-문자형-
char								1

**********************************/

#include <iostream>

int main()
{
	short sNum = 1;
	std::cout << "short: " << sNum << std::endl;

	int iNum = 2;
	std::cout << "int: " << iNum << std::endl;

	long lNum = 3;
	std::cout << "long: " << lNum << std::endl;

	float fNum = 1.1;
	std::cout << "float: " << fNum << std::endl;

	double dNum = 1.2;
	std::cout << "double: " << dNum << std::endl << std::endl;

	std::cout << "bool 형 크기: " << sizeof(bool) << " 바이트" << std::endl;
	std::cout << "short 형 크기: " << sizeof(short) << " 바이트" << std::endl;
	std::cout << "int 형 크기: " << sizeof(int) << " 바이트" << std::endl;
	std::cout << "long 형 크기: " << sizeof(long) << " 바이트" << std::endl;
	std::cout << "float 형 크기: " << sizeof(float) << " 바이트" << std::endl;
	std::cout << "double 형 크기: " << sizeof(double) << " 바이트" << std::endl;
	std::cout << "char 형 크기: " << sizeof(char) << " 바이트" << std::endl;
}