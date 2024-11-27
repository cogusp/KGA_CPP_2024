#include <iostream>

using namespace std;

void Print(int n, string start, string end)
{
	cout << n << "�� ���� �̵�: " << start << " �� " << end << endl;
}

void Hanoi(int n, string start, string end, string sub)
{
	if (n == 1)
	{
		Print(1, start, end);
		return;
	}
	else
	{
		// ��� 1�� �ִ� n - 1���� ������ ��� 2�� �ű�� ����
		Hanoi(n - 1, start, sub, end);

		// ��� 1�� �ִ� 1���� ������ ��� 3���� �ű� �� ���
		Print(n, start, end);

		// ��� 2�� �ִ� n - 1���� ������ ��� 3���� �ű�� ����
		Hanoi(n - 1, sub, end, start);
	}
}

int main()
{
	cout << "���� ���� �Է�: ";
	int num;
	cin >> num;

	// (���� ����, �����, ������, ������)
	Hanoi(num, "1", "2", "3");
}