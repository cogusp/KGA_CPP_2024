/*

[����Ʈ��]
- �� ��尡 �ִ� �� ���� �ڽ� ��带 ���� �� �ִ� Ʈ�� ����
- ���� ���� Ʈ��: ��� ������ ���� ���ְ�, ������ �������� ���ʺ��� ���ʴ�� ä���� Ʈ��

- �� ���� Ʈ��: �� ��尡 0 �Ǵ� 2���� �ڽ� ��带 ������ Ʈ��
  - ��� ��尡 2���� �ڽ� ��带 ������ �ְų� �ƿ� ���� ���

- ���� ���� Ʈ��: ��� ��尡 ���� �������θ� �ڽ� ��带 ������ Ʈ��

*/

#include <iostream>

using namespace std;

template<typename T>
class BinaryTree
{
private:
	struct Node
	{
		T data;
		Node* parent;
		Node* left;
		Node* right;

		Node(T data) : data(data), parent(nullptr), left(nullptr), right(nullptr) {}
	};

	Node* root;

public:
	struct Node;

	Node* Root()
	{
		return root;
	}

	BinaryTree(T data)
	{
		root = new Node(data);
	}

	~BinaryTree()
	{
		DeleteTree(root);
	}

	// �߰�(��)
	Node* AddLeft(Node* parent, T data)
	{
		// �̹� ���ʿ� �ڽ��� ������
		// ���ο� ��带 ���� �θ� ��� ���ʿ� ����
		if (parent->left != nullptr)
			return nullptr;

		parent->left = new Node(data);
		parent->left->parent = parent;

		// ����
		return parent->left;
	}

	// �߰�(��)
	Node* AddRight(Node* parent, T data)
	{
		// �̹� �����ʿ� �ڽ��� ������
		// ���ο� ��带 ���� �θ� ��� �����ʿ� ����
		if (parent->right != nullptr)
			return nullptr;

		parent->right = new Node(data);
		parent->right->parent = parent;

		// ����
		return parent->right;
	}

	// ����
	void DeleteTree(Node* node)
	{
		if (node == nullptr) return;

		DeleteTree(node->left);
		DeleteTree(node->right);

		delete node;
	}

	// ���

	// ����
	void PrintPreOrder(Node* node)
	{
		if (node == nullptr) return;

		cout << node->data << " ";

		PrintPreOrder(node->left);
		PrintPreOrder(node->right);
	}

	// ����
	void PrintInOrder(Node* node)
	{
		if (node == nullptr) return;

		PrintInOrder(node->left);
		
		cout << node->data << " ";

		PrintInOrder(node->right);
	}

	// ����
	void PrintPostOrder(Node* node)
	{
		if (node == nullptr) return;

		PrintPostOrder(node->left);
		PrintPostOrder(node->right);

		cout << node->data << " ";
	}
};

int main()
{
	BinaryTree<int>* bt = new BinaryTree<int>(10);

	bt->AddLeft(bt->Root(), 20);
	bt->AddRight(bt->Root(), 15);

	bt->PrintPreOrder(bt->Root());
}