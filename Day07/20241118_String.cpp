/*********************************

1. 문자열 뒤집기
2. 문자열 뒤집어서 짝수번째만 출력
3. 문자열 내 특정 문자 찾기
 - 문자를 찾으면 해당 인덱스를 반환
 - 문자가 없으면 -1 리턴

*********************************/

#include <iostream>

using namespace std;

// 문자열을 뒤집는 함수
void ReverseStr(char str[]);
// 짝수번째만 출력
void ReverseEven(char str[]);
// 특정 문자 찾기
int FindChar(char str[], char c);

int main()
{
	char str[] = "Hello, World!";

	ReverseStr(str);
	ReverseEven(str);
	FindChar(str, 'H');
}

void ReverseStr(char str[])
{
	int len = strlen(str);

	char temp;

	// 반복문을 통해 문자열의 반까지 반복
	// 각 반복에서 앞쪽 문자를 임시 변수 temp에 저장
	// 문자열의 뒤쪽 문자를 앞쪽으로 이동
	// 임시 변수에 저장된 문자를 뒤쪽으로 이동
	for (int i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	cout << "Reverse String: " << str << endl;
}

void ReverseEven(char str[])
{
	cout << "Reverse Even:";

	for (int i = 0; i < strlen(str); i++)
	{
		if (i % 2 != 0)	cout << " [" << str[i] << "]";
	}

	cout << endl;
}

int FindChar(char str[], char c)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
		{
			cout << c << ": Index [" << i << "]" << endl;
			return i;
		}
	}

	// 찾지 못한 경우
	cout << "Cannot Find" << str << endl;
	return -1;
}
