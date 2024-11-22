/*********************************

[C������ ��ǥ���� ���ڿ� ���� �Լ���]
 - strlen(const char* str): ���ڿ��� ���̸� ��ȯ
 - strcpy(char* dest, const char* src): ���ڿ� src�� dest�� ����
 - strcat(char* dest, const char* src): ���ڿ� src�� dest ���ڿ� ���� ����
 - srtcmp(const char* str1, const char* str2): str1�� str2 ���ڿ��� ���������� ��.
						    �����ϸ� 0, str1�� str2���� ������ ����, ũ�� ��� ����

*********************************/


#include <iostream>

using namespace std;

// ���ڿ��� ������ �Լ�
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

	// �ݺ����� ���� ���ڿ��� �ݱ��� �ݺ�
	// �� �ݺ����� ���� ���ڸ� �ӽ� ���� temp�� ����
	// ���ڿ��� ���� ���ڸ� �������� �̵�
	// �ӽ� ������ ����� ���ڸ� �������� �̵�
	for (int i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
