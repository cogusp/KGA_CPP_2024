#include <iostream>

using namespace std;

void Print(int n, string start, string end)
{
	cout << n << "번 원판 이동: " << start << " → " << end << endl;
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
		// 기둥 1에 있는 n - 1개의 원판을 기둥 2로 옮기는 과정
		Hanoi(n - 1, start, sub, end);

		// 기둥 1에 있는 1개의 원판을 기둥 3으로 옮길 때 출력
		Print(n, start, end);

		// 기둥 2에 있는 n - 1개의 원판을 기둥 3으로 옮기는 과정
		Hanoi(n - 1, sub, end, start);
	}
}

int main()
{
	cout << "원판 갯수 입력: ";
	int num;
	cin >> num;

	// (원판 갯수, 출발지, 경유지, 목적지)
	Hanoi(num, "1", "2", "3");
}