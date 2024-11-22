/*********************************

1. ���ڿ� ������
2. ���ڿ� ����� ¦����°�� ���
3. ���ڿ� �� Ư�� ���� ã��
 - ���ڸ� ã���� �ش� �ε����� ��ȯ
 - ���ڰ� ������ -1 ����

*********************************/

#include <iostream>

using namespace std;

// ���ڿ��� ������ �Լ�
void ReverseStr(char str[]);
// ¦����°�� ���
void ReverseEven(char str[]);
// Ư�� ���� ã��
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

	// ã�� ���� ���
	cout << "Cannot Find" << str << endl;
	return -1;
}
