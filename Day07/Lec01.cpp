#include <iostream>

// 1. 좌표를 나타내는 구조체 정의
struct Point
{
	double x;
	double y;
};

double CalcutateDistance(const Point& p1, const Point& p2);

int main()
{
	// 3. 두 개의 좌표를 생성하고 함수 호출하여 두 점 사이의 거리 계산(출력)
	Point point[2] = {
		{0, 0},
		{3, 4}
	};

	std::cout << "결과: " << CalcutateDistance(point[0], point[1]);
}

// 2. 두 점 사이의 거리를 계산하는 함수
double CalcutateDistance(const Point& p1, const Point& p2)
{
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}