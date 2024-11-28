/*

[버블정렬]


*/

#include <iostream>
#include <vector>
#include <chrono>	// 시간 측정

void BubbleSort(std::vector<int>& arr)
{
	int n = arr.size();

	// 배열의 모든 요소 탐색
	for (int i = 0; i < n; ++i)
	{
		// 각 반복에서 가장 큰 요소가 맨 뒤로 이동하므로
		// 끝 인덱스는 감소하여 반복 횟수를 줄임
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

	std::cout << "버블 정렬에 소요된 시간: " << elapsed.count() << "초";
}