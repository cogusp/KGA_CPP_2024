/***************************

[STL(Standard Template Library)]
- 대용량의 데이터 관리를 위해 반드시 알아야 함.
- 프로그램에 필요한 자료 구조와 알고리즘을 템플릿으로 제공하는 라이브러리

[STL의 구성 요소]
- 컨테이너
  - 객체를 보관하는 객체
  - 각각의 원소에 접근할 수 있도록 다양한 멤버 함수를 제공

  1. 시퀀스 컨테이너 (선형적)
    - 컨테이너 원소가 자신만의 삽입 위치를 가지는 컨테이너
    - vector, list, deque

  2. 연관 컨테이너 (비선형적)
    - 저장 원소가 삽입 순서와는 다르게 특정 정렬 기준에 의해 자동 정렬되는 컨테이너
    - set, multiset, map, multimap

- 이터레이터
  - 포인터와 비슷한 개념으로 컨테이너의 원소를 가리키는 원소에 접근하여 다음 원소를
    가리키게 하는 기능

- 알고리즘
  - 정렬, 삭제, 검색 등을 해결하는 일반화된 방법을 제공하는 함수 템플릿


[vector]
- 순차적으로 저장되어 있고, (메모리상) 내부적으로 동적 배열을 사용하여
  크기를 자동으로 조절
- 인덱스를 통해 임의의 원소에 접근이 가능(배열의 [], 멤버 함수인 at)
- 접근이 빠르지만 삽입, 삭제가 빈번하게 일어나면 성능 저하가 생길 수 있음.
  (삽입, 삭제 시 데이터를 한칸씩 이동)

[vector의 멤버함수들]
- empty(): 벡터가 비어있는지 확인
- clear(): 벡터의 모든 요소 제거
- at(): 벡터의 요소에 접근하며 범위 검사(예외처리)함
- front(): 벡터의 첫번째 요소 반환
- back(): 벡터의 마지막 요소 반환
- push_back(): 벡터의 끝에 요소 추가
- pop_back(): 벡터의 끝에서 요소를 제거
- erase(): 지정한 위치에 요소 제거
- reserve(): 벡터의 용량 지정
- shrink_to_fit(): 벡터의 현재 크기에 맞게 줄임
- swap(): 두 벡터를 교환

[반복자(iterator)]
- 

***************************/

#include <iostream>
#include <vector>

int main()
{
    // 빈 벡터 생성
    std::vector<int> v1;            
    // 10개의 기본 값(0)으로 초기화된 벡터 생성
    std::vector<int> v2(10);
    // 10개의 요소를 5로 초기화한 벡터 생성
    std::vector<int> v3(10, 5);
    // 초기화 리스트를 사용한 벡터 생성
    std::vector<int> v4 = { 1,2,3,4,5,6,7,8,9,10 };

    //size(): 벡터 사이즈
    std::cout << "벡터 v1의 사이즈: " << v1.size() << std::endl;
    std::cout << "벡터 v2의 사이즈: " << v2.size() << std::endl;
    std::cout << "벡터 v3의 사이즈: " << v3.size() << std::endl;
    std::cout << "벡터 v4의 사이즈: " << v4.size() << std::endl;

    std::cout << "===================================" << std::endl;

    // capacity(): 현재 할당된 메모리에서 저장할 수 있는 최대 원소의 수
    std::cout << "벡터의 capacity v1: " << v1.capacity() << std::endl;
    std::cout << "벡터의 capacity v2: " << v2.capacity() << std::endl;
    std::cout << "벡터의 capacity v3: " << v3.capacity() << std::endl;
    std::cout << "벡터의 capacity v4: " << v4.capacity() << std::endl;

    std::cout << "===================================" << std::endl;

    v4.push_back(11);

    // 크기가 초과되면 기존 벡터의 크기의 1/2만큼 크기가 증가
    // 기존 요소를 새로운 메모리에 복사
    std::cout << "벡터의 capacity v4 push_back 후: " << v4.capacity() << std::endl;

    std::cout << "===================================" << std::endl;

    std::vector<int> v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    std::cout << "벡터의 v5 출력" << std::endl;

    for (int i = 0; i < v5.size(); i++)
    {
        std::cout << "for문: " << v5[i] << std::endl;
    }

    std::cout << "===================================" << std::endl;

    std::cout << "범위기반 for 벡터의 v5 출력" << std::endl;

    // 범위기반 for
    // 컨테이너의 모든 요소를 간단하게 순회.
    // 일반 for문은 더 많은 제어를 제공하지만 코드가 복잡함.
    // 특정 조건이나 일부 순회는 어려움. 반복자를 내부적으로 사용.
    for (int i : v5)
    {
        std::cout << "범위기반 for문: " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    // 데이터를 복사하는 형태로 이뤄지기 때문에 참조의 형태로 전달하는 것이 좋음.
    for (int& i : v5)
    {
        std::cout << "범위기반 for문(참조): " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    // auto: 타입 추론
    for (auto& i : v5)
    {
        i += 1;     // 참조를 통해 변경 가능
        std::cout << "범위기반 for문(auto): " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    // 변경이 일어나지 않는 경우라면 const 꼭 사용
    for (const auto& i : v5)
    {
        std::cout << "범위기반 for문(auto): " << i << std::endl;
    }
    std::cout << "===================================" << std::endl;

    std::vector<int> v6;

    v6.push_back(1);
    v6.push_back(2);
    v6.push_back(3);
    v6.push_back(4);

    // 인덱스 0 + 1에 10을 삽입
    v6.insert(v6.begin() + 1, 10);

    // 인덱스 0 + 3의 요소를 제거
    v6.erase(v6.begin() + 3);

    // 마지막 요소를 pop
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

    // 전위 연산을 쓸 경우 속도가 빠름 (큰 차이 X)
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

    // 시작 원소를 가리키는 반복자
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

    // 데이터는 사라졌지만 용량이 여전히 남아있음
    vt.clear();

    // 4 + (4 / 2) = 6
    std::cout << vt.capacity() << std::endl;

    // 빈 벡터와 swap 해줘야 용량을 0으로 설정할 수 있음
    std::vector<int>().swap(vt);

    std::cout << vt.capacity() << std::endl;

}