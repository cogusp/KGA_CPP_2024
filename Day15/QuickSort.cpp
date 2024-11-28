/*

[�� ����]
- ���� ���� �˰��� �� �ϳ�.
- pivot: �迭 �ȿ� ��Ҹ� ����
- ����: �ǹ��� �������� ���� ���� ����, ū ������ ���������� ��ġ�ϰ� ����
- ����: �п��� �迭�� ���� �� ������ ��������� ȣ���Ͽ� ����

[���� ����]
- ������ ���� 2���� ������ �и��ϰ� ������ �ذ��� ���� ����� ��Ƽ�
  ������ ������ �ذ��ϴ� ����.
- ū ������ ���� ���� ������ �����Ͽ� �ذ��ϰ�, �� ���� �������� �ش��� �����Ͽ�
  ��ü ������ �ش��� ��´ٶ�� �ǹ�

- ����: ���� ������ ���� ���� ������ ����. ���� ������� ������� �̷����.
- ����: �� ���� ������ ��������� �ذ�. ���� ������ ũ�Ⱑ ����� �۾Ƽ�
        ���� �ذ��� �� �ִ� ��쿡 �ش�
- ����: ���� ������ �ش��� ������ ���� ������ �ش��� ����.

[�ŵ����� �˰���]
- ����: �ŵ������� ������ ������ ������ �� ���� ���� ������ ����
- ����: �� ���� ������ ��������� �ذ�. �̶�, ũ���� ����� ������ ���� ���

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

    // �迭�� �ǹ��� �������� ����
    // �ǹ��� �������� �� �κ����� ����
    // �ǹ��� �迭�� ������ ���ҿ� ��ȯ, ���������� ���鼭 �ǹ����� ���� ���� ���ʿ�
    // �� ������ ������ �ǹ��� �ڱ� �ڽ��� ���� ��ġ�� ���̰� �Ǹ� �� ��ġ�� ����
    int Partition(std::vector<int>& arr, int left, int right)
    {
        int pivotIndex = (left + right) / 2;
        int pivotValue = arr[pivotIndex];

        Swap(arr, pivotIndex, right);

        // �ǹ����� ���� ���� �ε����� ����
        int storeIndex = left;

        for (int i = left; i < right; ++i)
        {
            if (arr[i] < pivotValue)
            {
                Swap(arr, i, storeIndex);
                // �ǹ����� ���� ���� ������ �ε����� ������Ʈ
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

    std::cout << "�� ���Ŀ� �ҿ�� �ð�: " << elapsed.count() << "��";

    // ��Ȳ�� �°� ���������� �˰����� ������.
    std::sort(data.begin(), data.end());
}