#include <iostream>

// 1. ��ǥ�� ��Ÿ���� ����ü ����
struct Point
{
	double x;
	double y;
};

double CalcutateDistance(const Point& p1, const Point& p2);

int main()
{
	// 3. �� ���� ��ǥ�� �����ϰ� �Լ� ȣ���Ͽ� �� �� ������ �Ÿ� ���(���)
	Point point[2] = {
		{0, 0},
		{3, 4}
	};

	std::cout << "���: " << CalcutateDistance(point[0], point[1]);
}

// 2. �� �� ������ �Ÿ��� ����ϴ� �Լ�
double CalcutateDistance(const Point& p1, const Point& p2)
{
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}