#include <iostream>

using namespace std;


template<typename T>
class BST
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

	BST(T data)
	{
		root = new Node(data);
	}

	~BST()
	{

	}

	// ��� �߰�
	Node* AddBST(Node* parent, T data)
	{
		// left
		if (parent->data > data)
		{
			if (parent->left != nullptr)
				return AddBST(parent->left, data);
			
			AddLeft(parent, data);
		}
		// right
		else
		{
			if (parent->right != nullptr)
				return AddBST(parent->right, data);
			
			AddRight(parent, data);
		}
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
	BST<int>* bst = new BST<int>(100);
	bst->AddBST(bst->Root(), 200);
	bst->AddBST(bst->Root(), 30);
	bst->AddBST(bst->Root(), 50);
	bst->AddBST(bst->Root(), 70);
	bst->AddBST(bst->Root(), 10);


	//bst->PrintPreOrder(bst->Root());
	//bst->PrintInOrder(bst->Root());
	//bst->PrintPostOrder(bst->Root());
}