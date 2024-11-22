/***************************

[STL(Standard Template Library)]
- ��뷮�� ������ ������ ���� �ݵ�� �˾ƾ� ��.
- ���α׷��� �ʿ��� �ڷ� ������ �˰����� ���ø����� �����ϴ� ���̺귯��

[STL�� ���� ���]
- �����̳�
  - ��ü�� �����ϴ� ��ü
  - ������ ���ҿ� ������ �� �ֵ��� �پ��� ��� �Լ��� ����

  1. ������ �����̳� (������)
    - �����̳� ���Ұ� �ڽŸ��� ���� ��ġ�� ������ �����̳�
    - vector, list, deque

  2. ���� �����̳� (������)
    - ���� ���Ұ� ���� �����ʹ� �ٸ��� Ư�� ���� ���ؿ� ���� �ڵ� ���ĵǴ� �����̳�
    - set, multiset, map, multimap

- ���ͷ�����
  - �����Ϳ� ����� �������� �����̳��� ���Ҹ� ����Ű�� ���ҿ� �����Ͽ� ���� ���Ҹ�
    ����Ű�� �ϴ� ���

- �˰���
  - ����, ����, �˻� ���� �ذ��ϴ� �Ϲ�ȭ�� ����� �����ϴ� �Լ� ���ø�


[vector]
- ���������� ����Ǿ� �ְ�, (�޸𸮻�) ���������� ���� �迭�� ����Ͽ�
  ũ�⸦ �ڵ����� ����
- �ε����� ���� ������ ���ҿ� ������ ����(�迭�� [], ��� �Լ��� at)
- ������ �������� ����, ������ ����ϰ� �Ͼ�� ���� ���ϰ� ���� �� ����.
  (����, ���� �� �����͸� ��ĭ�� �̵�)

[vector�� ����Լ���]
- empty(): ���Ͱ� ����ִ��� Ȯ��
- clear(): ������ ��� ��� ����
- at(): ������ ��ҿ� �����ϸ� ���� �˻�(����ó��)��
- front(): ������ ù��° ��� ��ȯ
- back(): ������ ������ ��� ��ȯ
- push_back(): ������ ���� ��� �߰�
- pop_back(): ������ ������ ��Ҹ� ����
- erase(): ������ ��ġ�� ��� ����
- reserve(): ������ �뷮 ����
- shrink_to_fit(): ������ ���� ũ�⿡ �°� ����
- swap(): �� ���͸� ��ȯ

[�ݺ���(iterator)]
- 

***************************/

#include <iostream>
#include <vector>

int main()
{
    // �� ���� ����
    std::vector<int> v1;            
    // 10���� �⺻ ��(0)���� �ʱ�ȭ�� ���� ����
    std::vector<int> v2(10);
    // 10���� ��Ҹ� 5�� �ʱ�ȭ�� ���� ����
    std::vector<int> v3(10, 5);
    // �ʱ�ȭ ����Ʈ�� ����� ���� ����
    std::vector<int> v4 = { 1,2,3,4,5,6,7,8,9,10 };

    //size(): ���� ������
    std::cout << "���� v1�� ������: " << v1.size() << std::endl;
    std::cout << "���� v2�� ������: " << v2.size() << std::endl;
    std::cout << "���� v3�� ������: " << v3.size() << std::endl;
    std::cout << "���� v4�� ������: " << v4.size() << std::endl;

    std::cout << "===================================" << std::endl;

    // capacity(): ���� �Ҵ�� �޸𸮿��� ������ �� �ִ� �ִ� ������ ��
    std::cout << "������ capacity v1: " << v1.capacity() << std::endl;
    std::cout << "������ capacity v2: " << v2.capacity() << std::endl;
    std::cout << "������ capacity v3: " << v3.capacity() << std::endl;
    std::cout << "������ capacity v4: " << v4.capacity() << std::endl;

    std::cout << "===================================" << std::endl;

    v4.push_back(11);

    // ũ�Ⱑ �ʰ��Ǹ� ���� ������ ũ���� 1/2��ŭ ũ�Ⱑ ����
    // ���� ��Ҹ� ���ο� �޸𸮿� ����
    std::cout << "������ capacity v4 push_back ��: " << v4.capacity() << std::endl;

    std::cout << "===================================" << std::endl;

    std::vector<int> v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    std::cout << "������ v5 ���" << std::endl;

    for (int i = 0; i < v5.size(); i++)
    {
        std::cout << "for��: " << v5[i] << std::endl;
    }

    std::cout << "===================================" << std::endl;

    std::cout << "������� for ������ v5 ���" << std::endl;

    // ������� for
    // �����̳��� ��� ��Ҹ� �����ϰ� ��ȸ.
    // �Ϲ� for���� �� ���� ��� ���������� �ڵ尡 ������.
    // Ư�� �����̳� �Ϻ� ��ȸ�� �����. �ݺ��ڸ� ���������� ���.
    for (int i : v5)
    {
        std::cout << "������� for��: " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    // �����͸� �����ϴ� ���·� �̷����� ������ ������ ���·� �����ϴ� ���� ����.
    for (int& i : v5)
    {
        std::cout << "������� for��(����): " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    // auto: Ÿ�� �߷�
    for (auto& i : v5)
    {
        i += 1;     // ������ ���� ���� ����
        std::cout << "������� for��(auto): " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    // ������ �Ͼ�� �ʴ� ����� const �� ���
    for (const auto& i : v5)
    {
        std::cout << "������� for��(auto): " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    std::vector<int> v6;

    v6.push_back(1);
    v6.push_back(2);
    v6.push_back(3);
    v6.push_back(4);

    // �ε��� 0 + 1�� 10�� ����
    v6.insert(v6.begin() + 1, 10);

    // �ε��� 0 + 3�� ��Ҹ� ����
    v6.erase(v6.begin() + 3);

    // ������ ��Ҹ� pop
    v6.pop_back();

    for (const auto& i : v6)
    {
        std::cout << i << std::endl;
    }

    std::cout << "===================================" << std::endl;

    std::vector<int>v7;
    v7.push_back(1);
    v7.push_back(2);
    v7.push_back(3);
    v7.push_back(4);
    v7.push_back(5);
    v7.emplace_back(6);

    // ���� ������ �� ��� �ӵ��� ���� (ū ���� X)
    for (std::vector<int>::const_iterator it = v7.begin(); it != v7.end(); ++it)
    {
        // *it += 10;
        std::cout << *it << "->";
    }

    std::cout << std::endl << "===================================" << std::endl;

    std::vector<int>v8;
    v8.push_back(1);
    v8.push_back(2);
    v8.push_back(3);
    v8.push_back(4);
    v8.push_back(5);

    // ���� ���Ҹ� ����Ű�� �ݺ���
    // std::vector<int>::const_iterator iter = v8.begin();

    for (std::vector<int>::const_reverse_iterator iter = v8.rbegin(); iter != v8.rend(); ++iter)
    {
        std::cout << *iter << "->";
    }

    std::cout << std::endl << "===================================" << std::endl;

    std::vector<int> vec = { 10, 20, 30, 40 };

    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "===================================" << std::endl;

    std::vector<int>vt;
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);
    vt.push_back(4);
    vt.push_back(5);

    // �����ʹ� ��������� �뷮�� ������ ��������
    vt.clear();

    // 4 + (4 / 2) = 6
    std::cout << vt.capacity() << std::endl;

    // �� ���Ϳ� swap ����� �뷮�� 0���� ������ �� ����
    std::vector<int>().swap(vt);

    std::cout << vt.capacity() << std::endl;

}