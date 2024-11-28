/*

[Stack]
- LIFO의 원칙을 따르는 자료구조
- push: 스택에 새로운 요소를 추가하는 연산. 항상 상단에 추가.
- pop: 최상단 요소를 제거하고 반환
- top: 스택의 최상단 요소를 반환
- Empty: 비어있는지
- 토

[Queue]
- FIFO의 원칙을 따르는 자료구조
- 먼저 추가된 데이터가 먼저 제거됨.
- 똥

*/

#include <stack>
#include <queue>

int main()
{
	std::stack<int> st;
	st.push(1);
	std::stack<int, std::vector<int>> st1;

	std::queue<int> que;
	std::priority_queue<int> pq;
}