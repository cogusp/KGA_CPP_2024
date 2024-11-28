/*

[Stack]
- LIFO�� ��Ģ�� ������ �ڷᱸ��
- push: ���ÿ� ���ο� ��Ҹ� �߰��ϴ� ����. �׻� ��ܿ� �߰�.
- pop: �ֻ�� ��Ҹ� �����ϰ� ��ȯ
- top: ������ �ֻ�� ��Ҹ� ��ȯ
- Empty: ����ִ���
- ��

[Queue]
- FIFO�� ��Ģ�� ������ �ڷᱸ��
- ���� �߰��� �����Ͱ� ���� ���ŵ�.
- ��

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