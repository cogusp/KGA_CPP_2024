/**********************************

[Ʈ��]
- �������� �ڷḦ ��Ÿ���� �� ���� ���Ǵ� �ڷᱸ��
- �θ� ��尡 ���� �ڽ� ��带 ���� �� �ִ� 1�� �� ����
- �� ��忡�� ����Ͽ� �ٽ� �ڱ� �ڽ��� ���� ���ƿ��� ��ȯ ������ ������ ����.

[Ʈ�� ����]
- �θ�(Parent): ��Ʈ ��� �������� ���� ����� ���
- �ڽ�(Child): ��Ʈ ��� �ݴ� �������� ���� ����� ���
- �Ѹ�(root): �θ� ��尡 ���� �ֻ��� ���. Ʈ���� ���� 0�� �ϳ��� ����
- ����(Branch): �θ� ���� �ڽ� ��尡 ��� �ִ� ���. Ʈ���� �߰��� ����
- ��(Leaf): �ڽ� ��尡 ���� ���. Ʈ���� ���� ����

**********************************/

#include <iostream>
#include <vector>

using namespace std;

template <typename T> class Tree
{
public:
	struct Node;

public:
	// ��Ʈ ��� ��ȯ
	Node* Root()
	{
		return root;
	}

	// ��Ʈ ��� �ʱ�ȭ
	Tree(T data)
	{
		root = new Node(data);
	}

	~Tree()
	{
		delete root;
	}

	// �θ� ��忡�� �ڽ� ��带 �߰��ϴ� �Լ�
	Node* Add(Node* parent, T data)
	{
		// ��� ����
		Node* node = new Node(data);

		// ���� ������ ����� �θ� ����
		node->Parent = parent;

		// �θ� ����� �ڽ� ��Ͽ� ���ο� ��� �߰�
		parent->Childs.push_back(node);

		return node;
	}

	// ���
	void Print(Node* node, int depth)
	{
		// �θ� ������
		if (node->Parent != nullptr)
		{
			cout << "�θ��� ������: " << node->Parent->data;
		}
		cout << " ������: " << node->data << " " << "\t����: " << depth << endl;

		for (int i = 0; i < node->Childs.size();++i)
		{
			Print(node->Childs[i], depth + 1);
		}
	}

public:
	struct Node
	{
		// ��忡 ����� ������
		T data;

		// �θ� ��� ������
		Node* Parent;

		// �ڽ� ���
		vector<Node*> Childs;

		Node(T data) : Parent(nullptr), data(data) {}
	};

private:
	// ��Ʈ ���
	Node* root;
};

int main()
{
	// Ʈ�� ��ü �����
	Tree<int>* tree = new Tree<int>(20);

	// ���ο� ��带 �߰��ϰ�, �� ����� �����͸� node ������ ����
	Tree<int>::Node* node = nullptr;
	node = tree->Add(tree->Root(), 30);
	tree->Add(node, 100);
	tree->Add(node, 200);

	node = tree->Add(tree->Root(), 40);
	node = tree->Add(node, 400);

	/*
			20

		30		40

	100		200		400
	*/

	tree->Print(tree->Root(), 0);
}