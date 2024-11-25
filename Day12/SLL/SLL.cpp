#include "SLL.h"

SLL::SLL():pHead(nullptr)
{
}

SLL::~SLL()
{
	while (pHead != nullptr)
	{
		// 현재 노드를 가리키는 포인터를 임시 노드에 저장
		node* temp = pHead;

		// 다음 노드를 현재 노드에 저장
		pHead = pHead->pNext;

		// 임시 노드 삭제
		delete temp;
	}
}

void SLL::Insert(int num)
{
	// 노드 생성
	node* newNode = new node(num);

	// head가 비어있으면
	if (pHead == nullptr)
	{
		// 새로운 노드를 첫 노드로 설정
		pHead = newNode;
		return;
	}
	else
	{
		// 리스트를 순회할 포인터
		node* temp = pHead;

		// 리스트를 순회할 포인터가 nullptr이 아닐 때까지
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	// 현재 노드를 가리키는 포인터
	node* temp = pHead;

	// 다음 노드를 가리키는 포인터
	node* tempNext = temp->pNext;

	// 만약 첫 번째 노드가 삭제하려는 노드라면
	// 헤드를 다음 노드로 이동시키고 현재 노드 삭제
	if (temp->value == num)
	{
		pHead = pHead->pNext;
		delete temp;
	}
	// 아니라면 순회하면서 삭제할 노드를 찾아야 함.
	else
	{
		while (temp->pNext != nullptr)
		{
			node* tempBefore = temp;
			temp = tempNext;
			tempNext = temp->pNext;

			if (temp->value == num)
			{
				delete temp;
				tempBefore->pNext = tempNext;
				return;
			}
		}
		std::cout << std::endl << "Delete(): [" << num << "] 없음" << std::endl << std::endl;
	}


	// 현재 노드를 다음 노드로 이동
	// 다음 노드를 그 다음 노드로 이동
	// 찾지 못하면 종료
	// 이전 노드를 다음 노드에 연결하고
	// 삭제
}

void SLL::Print()
{
	node* temp = pHead;

	std::cout << "========== Print ==========" << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->value << " ";
		temp = temp->pNext;
	}

	std::cout << std::endl;
}
