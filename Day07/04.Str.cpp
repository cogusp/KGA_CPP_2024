/*********************************

[C에서의 대표적인 문자열 관련 함수들]
 - strlen(const char* str): 문자열의 길이를 반환
 - strcpy(char* dest, const char* src): 문자열 src를 dest에 복사
 - strcat(char* dest, const char* src): 문자열 src를 dest 문자열 끝에 연결
 - srtcmp(const char* str1, const char* str2): str1과 str2 문자열을 사전순으로 비교.
						    동일하면 0, str1이 str2보다 작으면 음수, 크면 양수 리턴

*********************************/


#include <iostream>

using namespace std;

// 문자열을 뒤집는 함수
void ReverseStr(char str[]);

int main()
{
	const char* str = "Hello";

	char str1[10] = "abcd";

	cout << strlen(str) << endl;				// 5
	cout << strlen(str1) << endl;				// 4

	const char* strcmp1 = "aaa";
	const char* strcmp2 = "aaa";

	cout << strcmp(strcmp1, strcmp2) << endl;	// 0
	cout << strcmp("aab", "aaa") << endl;		// 1	// 97 97 98		97 97 97  
	cout << strcmp("aab", "aac") << endl;		// -1	// 97 97 98		97 97 99

	char strcpy1[10] = "Hello";
	char strcpy2[10];
	// char strcpy2[5];							// Error

	strcpy_s(strcpy2, strcpy1);

	cout << strcpy2 << endl;					// Hello

	char s1[10] = "world";
	char s2[20] = "Hello";

	strcat_s(s2, s1);

	cout << s2 << endl;							// Helloworld

	char reStr[] = "Hello, World";				// dlroW ,olleH
	ReverseStr(reStr);
	cout << reStr << endl;
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
}
