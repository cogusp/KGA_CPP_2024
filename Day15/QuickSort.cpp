/*

[퀵 정렬]
- 분할 정복 알고리즘 중 하나.
- pivot: 배열 안에 요소를 선택
- 분할: 피벗을 기준으로 작은 값은 왼쪽, 큰 값들은 오른쪽으로 위치하고 분할
- 정복: 분열된 배열에 대해 퀵 정렬을 재귀적으로 호출하여 정렬

[분할 정복]
- 문제를 작은 2개의 문제로 분리하고 각각을 해결한 다음 결과를 모아서
  원래의 문제를 해결하는 전략.
- 큰 문제를 작은 하위 문제로 분할하여 해결하고, 그 하위 문제들의 해답을 조합하여
  전체 문제의 해답을 얻는다라는 의미

- 분할: 원래 문제를 작은 하위 문제로 분할. 보통 재귀적인 방법으로 이루어짐.
- 정복: 각 하위 문제를 재귀적으로 해결. 하위 문제의 크기가 충분히 작아서
        직접 해결할 수 있는 경우에 해당
- 결합: 하위 문제의 해답을 결합해 원래 문제의 해답을 얻음.

[거듭제곱 알고리즘]
- 분할: 거듭제곱의 지수를 반으로 나누어 두 개의 하위 문제로 분할
- 정복: 각 하위 문제를 재귀적으로 해결. 이때, 크기자 충분히 작으면 직접 계산

*/

#include <iostream>
#include <vector>
#include <random>
#include <chrono>

class CQuickSort
{
public:
    void QuickSort(std::vector<int>& items)
    {
        QuickSortHelper(items, 0, items.size() - 1);
    }

    void QuickSortHelper(std::vector<int>& items, int left, int right)
    {
        if (left < right)
        {
            int partitionIndex = Partition(items, left, right);

            QuickSortHelper(items, left, partitionIndex - 1);
            QuickSortHelper(items, partitionIndex + 1, right);
        }
    }

    // 배열의 피벗을 기준으로 분할
    // 피벗을 기준으로 두 부분으로 나눔
    // 피벗을 배열의 마지막 원소와 교환, 순차적으로 돌면서 피벗보다 작은 값을 왼쪽에
    // 이 과정이 끝나면 피벗은 자기 자신의 최종 위치에 놓이게 되며 이 위치를 리턴
    int Partition(std::vector<int>& arr, int left, int right)
    {
        int pivotIndex = (left + right) / 2;
        int pivotValue = arr[pivotIndex];

        Swap(arr, pivotIndex, right);

        // 피벗보다 작은 값의 인덱스를 저장
        int storeIndex = left;

        for (int i = left; i < right; ++i)
        {
            if (arr[i] < pivotValue)
            {
                Swap(arr, i, storeIndex);
                // 피벗보다 작은 값을 저장할 인덱스를 업데이트
                ++storeIndex;
            }
        }
        Swap(arr, storeIndex, right);

        return storeIndex;
    }

    void Swap(std::vector<int>& arr, int a, int b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    void PrintArray(std::vector<int>& arr)const
    {
        for (int num : arr)
        {
            std::cout << num << " ";
        }
    }
};

int main()
{
    CQuickSort q;
    std::vector<int> arr = { 5, 3, 7, 1, 8, 2, 9 };

    q.QuickSort(arr);
    q.PrintArray(arr);

    std::vector<int> data(100000);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dis(0, 99999);

    for (int& num : data)
    {
        num = dis(gen);
    }

    auto start = std::chrono::high_resolution_clock::now();

    q.QuickSort(data);

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;

    std::cout << "퀵 정렬에 소요된 시간: " << elapsed.count() << "초";

    // 상황에 맞게 내부적으로 알고리즘을 변경함.
    std::sort(data.begin(), data.end());
}