/*
연산자(operator)
 1. 산술연산자(+, -, *, /, %)
  +: 두 값을 더함.
  -: 두 값에서 하나의 값을 뺌.
  *: 두 값을 곱함.
  /: 첫번째 값을 두번째 값으로 나눔.
  %: 나머지 연산. 첫번째 값을 두번째 값으로 나눈 후 나머지 반환.

 2. 증감연산자(++, --)
  피연산자의 값을 1 증가 또는 1 감소.
  전위 연산(++a/--a): 선 증가/감소 후 연산.
  후위 연산(a++/a--): 선 연산 후 증가/감소.

  - 증감연산자를 잘 이용하면 코드를 간결하게 만들 수 있음.

  ex)
  num++은 num = num + 1과 같음.

 3. 관계연산자(>, <, <=, >=, ==, !=)
  a > b	: 피연산자 a가 피연산자 b보다 큼.
  a < b	: 피연산자 a가 피연산자 b보다 작음.
  a >= b: 피연산자 a가 피연산자 b와 같거나 큼.
  a <= b: 피연산자 a가 피연산자 b와 같거나 작음.
  a == b: 피연산자 a가 피연산자 b와 같음.
  a != b: 피연산자 a가 피연산자 b와 같지 않음.

 4. 논리연산자(&&, ||, !)
  &&(and): 피연산자가 모두 참일 경우 참
   피연산자		연산자		피연산자	결과
	  0			  &&		   0		 0
	  0			  &&		   1		 0
	  1			  &&		   0		 0
	  1			  &&		   1		 1

  ||(or): 피연산자 둘 중 하나가 참이면 참
   피연산자		연산자		피연산자	결과
	  0			  ||		   0		 0
	  0			  ||		   1		 1
	  1			  ||		   0		 1
	  1			  ||		   1		 1

  !	: 피연산자가 참이면 거짓, 거짓이면 참

 5. 비트연산자 (&, |, ^, ~, <<, >>)
  데이터를 비트 단위로 처리하는 연산자로, 하드웨어랑 밀접하게 관련된 각종 처리를 함.
  메모리 공간을 줄여서 성능을 높여줌.

  ** 비트는 2진수 값 하나(0 또는 1)를 저장할 수 있는 최소 메모리 공간을 의미.
  - 1bit로 표현할 수 있는 데이터 수는 1과 0.
  - 2bits는 00, 01, 10, 11, 3bits는 8개.
  - 1byte는 8bits이고, 256개의 경우를 표현할 수 있는 저장용량을 가짐.

  ** 2진수, 10진수, 16진수, 8진수
  - 2진수 : 0과 1 사용.
  - 10진수: 0~9까지의 숫자 사용.
  - 16진수: 0~9까지의 숫자와 a~f까지의 문자 사용.(a는 정수 10, b는 11...f는 15를 의미)
  - 8진수 : 0~7까지의 숫자 사용.

  종류		연산식
   &		a & b	// 비트단위 AND연산: 두 개의 비트가 모두 1일 때 1 반환
   |		a | b	// 비트단위 OR 연산: 두 개의 비트 중 하나가 1일 때 1 반환
   ^		a ^ b	// 비트단위 XOR연산: 두 개의 비트가 서로 같지 않을 때 1 반환
   ~		 ~a		// 비트단위 NOT연산: 보수연산, 비트를 반전시킴
   <<		a << n	// 왼쪽으로 비트를 n만큼 이동
   >>		a >> n	// 오른쪽으로 비트를 n만큼 이동

 6. 복합대입연산자
  += : a += b	// a = a + b
  -= : a -= b	// a = a - b
  *= : a *= b
  /= : a /= b
  %= : a %= b
  &= : a &= b
  |= : a |= b
  ^= : a ^= b
  <<=: a <<= b
  >>=: a >>= b

 7. 조건연산자(삼항연산자)
  - 연산자 두 개(?, :)와 피연산자 세 개로 이루어짐.
  - 중첩 사용은 지양

  조건식 ? 식 1 : 식 2	// 조건식이 참이면 식 1, 거짓이면 식 2 수행

*/

#include <iostream>

int main()
{
	std::cout << "오늘은 연산자 데이" << std::endl << std::endl;

	// 산술연산자
	std::cout << "===== 산술연산자 =====" << std::endl;

	int a = 10;
	int b = 3;
	
	std::cout << 1 + 2 << std::endl;	// 3
	std::cout << a + b << std::endl;	// 13
	std::cout << a - b << std::endl;	// 7
	std::cout << a * b << std::endl;	// 30
	std::cout << a / b << std::endl;	// 3
	std::cout << a % b << std::endl;	// 1

	std::cout << std::endl;

	// 증감연산자
	std::cout << "===== 증감연산자 =====" << std::endl;

	int num = 10;

	std::cout << "변수 num에 저장되어 있는 값: " << num << std::endl;		// 10
	num++;	// num = num + 1
	std::cout << "num++ 후 num에 저장되어 있는 값: " << num << std::endl;	// 11
	++num;
	std::cout << "++num 후 num에 저장되어 있는 값: " << num << std::endl;	// 12
	num--;
	std::cout << "num-- 후 num에 저장되어 있는 값: " << num << std::endl;	// 11
	--num;
	std::cout << "--num 후 num에 저장되어 있는 값: " << num << std::endl;	// 10

	std::cout << std::endl;

	int num1 = 10;
	int num2 = 20;

	int c;
	int d;

	c = ++num1;	// 전위 방식
	std::cout << "변수 c의 값: " << c << ", " << "변수 num1의 값: " << num1 << std::endl;

	d = num2++;	// 후위 방식
	std::cout << "변수 d의 값: " << d << ", " << "변수 num2의 값: " << num2 << std::endl;

	std::cout << std::endl;

	// 관계연산자
	std::cout << "===== 관계연산자 =====" << std::endl;
	
	int num3 = 1;
	int num4 = 2;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4);		// num3이 num4보다 큰가? (1 > 2)
	result1 = (num3 <= num4);	// num3이 num4보다 같거나 작은가? (1 <= 2)
	result2 = (num3 == num4);	// num3이 num4와 같은가? (1 == 2)
	result3 = (num3 != num4);	// num3이 num4와 같지 않은가? (1 != 2)

	std::cout << "result 변수에 저장된 값: " << result << std::endl;	// 0(false)
	std::cout << "result1 변수에 저장된 값: " << result1 << std::endl;	// 1(true)
	std::cout << "result2 변수에 저장된 값: " << result2 << std::endl;	// 0(false)
	std::cout << "result3 변수에 저장된 값: " << result3 << std::endl;	// 1(true)

	std::cout << std::endl;

	// 논리연산자
	std::cout << "===== 논리연산자 =====" << std::endl;
	
	int num5 = 3;
	int num6 = 5;

	int result4;
	int result5;
	int result6;

	result4 = (num5 > 0) && (num6 < 10);	// (num5 > 0)은 true, (num6 < 10)은 true
	result5 = (num5 <= 2) || (num6 > 5);	// (num5 <= 2)은 false, (num6 > 5)은 false
	result6 = !num6;

	std::cout << "result4에 저장된 값: " << result4 << std::endl;
	std::cout << "result5에 저장된 값: " << result5 << std::endl;
	std::cout << "result6에 저장된 값: " << result6 << std::endl;

	std::cout << std::endl;

	// 비트연산자
	std::cout << "===== 비트연산자 =====" << std::endl;

	int bitNum1 = 20;
	int bitNum2 = 16;

	int bitRes = bitNum1 & bitNum2;
	int bitRes1 = bitNum1 | bitNum2;

	std::cout << "& 결과: " << bitRes << std::endl;		// 16
	std::cout << "| 결과: " << bitRes1 << std::endl;	// 20

	int shiftNum = 10;
	int shiftRes = shiftNum << 2;

	std::cout << " << 결과: " << shiftRes << std::endl;	// 40

	shiftRes = shiftRes >> 1;

	std::cout << " >> 결과: " << shiftRes << std::endl;	// 20, >> 1은 /2와 같음

	std::cout << std::endl;

	// 복합대입연산자
	std::cout << "===== 복합대입연산자 =====" << std::endl;

	int x = 5;
	int y = 3;

	x += y;		// x = x + y
	std::cout << "x의 결과: " << x << std::endl;

	std::cout << std::endl;

	// 조건연산자
	std::cout << "===== 조건연산자 =====" << std::endl;

	int number = 2;
	int number1 = 3;

	int numberResult;

	numberResult = (number > number1) ? number : number1;

	std::cout << "numberResult의 결과: " << numberResult << std::endl;

	return 0;
}