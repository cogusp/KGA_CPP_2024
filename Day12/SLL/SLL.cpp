#include "SLL.h"

SLL::SLL():pHead(nullptr)
{
}

SLL::~SLL()
{
	while (pHead != nullptr)
	{
		// ���� ��带 ����Ű�� �����͸� �ӽ� ��忡 ����
		node* temp = pHead;

		// ���� ��带 ���� ��忡 ����
		pHead = pHead->pNext;

		// �ӽ� ��� ����
		delete temp;
	}
}

void SLL::Insert(int num)
{
	// ��� ����
	node* newNode = new node(num);

	// head�� ���������
	if (pHead == nullptr)
	{
		// ���ο� ��带 ù ���� ����
		pHead = newNode;
		return;
	}
	else
	{
		// ����Ʈ�� ��ȸ�� ������
		node* temp = pHead;

		// ����Ʈ�� ��ȸ�� �����Ͱ� nullptr�� �ƴ� ������
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	// ���� ��带 ����Ű�� ������
	node* temp = pHead;

	// ���� ��带 ����Ű�� ������
	node* tempNext = temp->pNext;

	// ���� ù ��° ��尡 �����Ϸ��� �����
	// ��带 ���� ���� �̵���Ű�� ���� ��� ����
	if (temp->value == num)
	{
		pHead = pHead->pNext;
		delete temp;
	}
	// �ƴ϶�� ��ȸ�ϸ鼭 ������ ��带 ã�ƾ� ��.
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
		std::cout << std::endl << "Delete(): [" << num << "] ����" << std::endl << std::endl;
	}


	// ���� ��带 ���� ���� �̵�
	// ���� ��带 �� ���� ���� �̵�
	// ã�� ���ϸ� ����
	// ���� ��带 ���� ��忡 �����ϰ�
	// ����
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
