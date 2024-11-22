/*
������(operator)
 1. ���������(+, -, *, /, %)
  +: �� ���� ����.
  -: �� ������ �ϳ��� ���� ��.
  *: �� ���� ����.
  /: ù��° ���� �ι�° ������ ����.
  %: ������ ����. ù��° ���� �ι�° ������ ���� �� ������ ��ȯ.

 2. ����������(++, --)
  �ǿ������� ���� 1 ���� �Ǵ� 1 ����.
  ���� ����(++a/--a): �� ����/���� �� ����.
  ���� ����(a++/a--): �� ���� �� ����/����.

  - ���������ڸ� �� �̿��ϸ� �ڵ带 �����ϰ� ���� �� ����.

  ex)
  num++�� num = num + 1�� ����.

 3. ���迬����(>, <, <=, >=, ==, !=)
  a > b	: �ǿ����� a�� �ǿ����� b���� ŭ.
  a < b	: �ǿ����� a�� �ǿ����� b���� ����.
  a >= b: �ǿ����� a�� �ǿ����� b�� ���ų� ŭ.
  a <= b: �ǿ����� a�� �ǿ����� b�� ���ų� ����.
  a == b: �ǿ����� a�� �ǿ����� b�� ����.
  a != b: �ǿ����� a�� �ǿ����� b�� ���� ����.

 4. ��������(&&, ||, !)
  &&(and): �ǿ����ڰ� ��� ���� ��� ��
   �ǿ�����		������		�ǿ�����	���
	  0			  &&		   0		 0
	  0			  &&		   1		 0
	  1			  &&		   0		 0
	  1			  &&		   1		 1

  ||(or): �ǿ����� �� �� �ϳ��� ���̸� ��
   �ǿ�����		������		�ǿ�����	���
	  0			  ||		   0		 0
	  0			  ||		   1		 1
	  1			  ||		   0		 1
	  1			  ||		   1		 1

  !	: �ǿ����ڰ� ���̸� ����, �����̸� ��

 5. ��Ʈ������ (&, |, ^, ~, <<, >>)
  �����͸� ��Ʈ ������ ó���ϴ� �����ڷ�, �ϵ����� �����ϰ� ���õ� ���� ó���� ��.
  �޸� ������ �ٿ��� ������ ������.

  ** ��Ʈ�� 2���� �� �ϳ�(0 �Ǵ� 1)�� ������ �� �ִ� �ּ� �޸� ������ �ǹ�.
  - 1bit�� ǥ���� �� �ִ� ������ ���� 1�� 0.
  - 2bits�� 00, 01, 10, 11, 3bits�� 8��.
  - 1byte�� 8bits�̰�, 256���� ��츦 ǥ���� �� �ִ� ����뷮�� ����.

  ** 2����, 10����, 16����, 8����
  - 2���� : 0�� 1 ���.
  - 10����: 0~9������ ���� ���.
  - 16����: 0~9������ ���ڿ� a~f������ ���� ���.(a�� ���� 10, b�� 11...f�� 15�� �ǹ�)
  - 8���� : 0~7������ ���� ���.

  ����		�����
   &		a & b	// ��Ʈ���� AND����: �� ���� ��Ʈ�� ��� 1�� �� 1 ��ȯ
   |		a | b	// ��Ʈ���� OR ����: �� ���� ��Ʈ �� �ϳ��� 1�� �� 1 ��ȯ
   ^		a ^ b	// ��Ʈ���� XOR����: �� ���� ��Ʈ�� ���� ���� ���� �� 1 ��ȯ
   ~		 ~a		// ��Ʈ���� NOT����: ��������, ��Ʈ�� ������Ŵ
   <<		a << n	// �������� ��Ʈ�� n��ŭ �̵�
   >>		a >> n	// ���������� ��Ʈ�� n��ŭ �̵�

 6. ���մ��Կ�����
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

 7. ���ǿ�����(���׿�����)
  - ������ �� ��(?, :)�� �ǿ����� �� ���� �̷����.
  - ��ø ����� ����

  ���ǽ� ? �� 1 : �� 2	// ���ǽ��� ���̸� �� 1, �����̸� �� 2 ����

*/

#include <iostream>

int main()
{
	std::cout << "������ ������ ����" << std::endl << std::endl;

	// ���������
	std::cout << "===== ��������� =====" << std::endl;

	int a = 10;
	int b = 3;
	
	std::cout << 1 + 2 << std::endl;	// 3
	std::cout << a + b << std::endl;	// 13
	std::cout << a - b << std::endl;	// 7
	std::cout << a * b << std::endl;	// 30
	std::cout << a / b << std::endl;	// 3
	std::cout << a % b << std::endl;	// 1

	std::cout << std::endl;

	// ����������
	std::cout << "===== ���������� =====" << std::endl;

	int num = 10;

	std::cout << "���� num�� ����Ǿ� �ִ� ��: " << num << std::endl;		// 10
	num++;	// num = num + 1
	std::cout << "num++ �� num�� ����Ǿ� �ִ� ��: " << num << std::endl;	// 11
	++num;
	std::cout << "++num �� num�� ����Ǿ� �ִ� ��: " << num << std::endl;	// 12
	num--;
	std::cout << "num-- �� num�� ����Ǿ� �ִ� ��: " << num << std::endl;	// 11
	--num;
	std::cout << "--num �� num�� ����Ǿ� �ִ� ��: " << num << std::endl;	// 10

	std::cout << std::endl;

	int num1 = 10;
	int num2 = 20;

	int c;
	int d;

	c = ++num1;	// ���� ���
	std::cout << "���� c�� ��: " << c << ", " << "���� num1�� ��: " << num1 << std::endl;

	d = num2++;	// ���� ���
	std::cout << "���� d�� ��: " << d << ", " << "���� num2�� ��: " << num2 << std::endl;

	std::cout << std::endl;

	// ���迬����
	std::cout << "===== ���迬���� =====" << std::endl;
	
	int num3 = 1;
	int num4 = 2;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4);		// num3�� num4���� ū��? (1 > 2)
	result1 = (num3 <= num4);	// num3�� num4���� ���ų� ������? (1 <= 2)
	result2 = (num3 == num4);	// num3�� num4�� ������? (1 == 2)
	result3 = (num3 != num4);	// num3�� num4�� ���� ������? (1 != 2)

	std::cout << "result ������ ����� ��: " << result << std::endl;	// 0(false)
	std::cout << "result1 ������ ����� ��: " << result1 << std::endl;	// 1(true)
	std::cout << "result2 ������ ����� ��: " << result2 << std::endl;	// 0(false)
	std::cout << "result3 ������ ����� ��: " << result3 << std::endl;	// 1(true)

	std::cout << std::endl;

	// ��������
	std::cout << "===== �������� =====" << std::endl;
	
	int num5 = 3;
	int num6 = 5;

	int result4;
	int result5;
	int result6;

	result4 = (num5 > 0) && (num6 < 10);	// (num5 > 0)�� true, (num6 < 10)�� true
	result5 = (num5 <= 2) || (num6 > 5);	// (num5 <= 2)�� false, (num6 > 5)�� false
	result6 = !num6;

	std::cout << "result4�� ����� ��: " << result4 << std::endl;
	std::cout << "result5�� ����� ��: " << result5 << std::endl;
	std::cout << "result6�� ����� ��: " << result6 << std::endl;

	std::cout << std::endl;

	// ��Ʈ������
	std::cout << "===== ��Ʈ������ =====" << std::endl;

	int bitNum1 = 20;
	int bitNum2 = 16;

	int bitRes = bitNum1 & bitNum2;
	int bitRes1 = bitNum1 | bitNum2;

	std::cout << "& ���: " << bitRes << std::endl;		// 16
	std::cout << "| ���: " << bitRes1 << std::endl;	// 20

	int shiftNum = 10;
	int shiftRes = shiftNum << 2;

	std::cout << " << ���: " << shiftRes << std::endl;	// 40

	shiftRes = shiftRes >> 1;

	std::cout << " >> ���: " << shiftRes << std::endl;	// 20, >> 1�� /2�� ����

	std::cout << std::endl;

	// ���մ��Կ�����
	std::cout << "===== ���մ��Կ����� =====" << std::endl;

	int x = 5;
	int y = 3;

	x += y;		// x = x + y
	std::cout << "x�� ���: " << x << std::endl;

	std::cout << std::endl;

	// ���ǿ�����
	std::cout << "===== ���ǿ����� =====" << std::endl;

	int number = 2;
	int number1 = 3;

	int numberResult;

	numberResult = (number > number1) ? number : number1;

	std::cout << "numberResult�� ���: " << numberResult << std::endl;

	return 0;
}