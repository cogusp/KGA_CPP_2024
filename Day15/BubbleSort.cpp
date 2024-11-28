/*

[��������]


*/

#include <iostream>
#include <vector>
#include <chrono>	// �ð� ����

void BubbleSort(std::vector<int>& arr)
{
	int n = arr.size();

	// �迭�� ��� ��� Ž��
	for (int i = 0; i < n; ++i)
	{
		// �� �ݺ����� ���� ū ��Ұ� �� �ڷ� �̵��ϹǷ�
		// �� �ε����� �����Ͽ� �ݺ� Ƚ���� ����
		for (int k = 0; k < n - i - 1; ++k)
		{
			if (arr[k] > arr[k + 1])
			{
				std::swap(arr[k], arr[k + 1]);
			}
		}
	}
}

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	std::vector<int> data(20000);

	for (size_t i = 0; i < data.size(); ++i)
	{
		data[i] = rand() % 20000;
	}

	auto start = std::chrono::high_resolution_clock::now();

	BubbleSort(data);

	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> elapsed = end - start;

	std::cout << "���� ���Ŀ� �ҿ�� �ð�: " << elapsed.count() << "��";
}