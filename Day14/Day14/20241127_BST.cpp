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

	// 노드 추가
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

	// 추가(왼)
	Node* AddLeft(Node* parent, T data)
	{
		// 이미 왼쪽에 자식이 있으면
		// 새로운 노드를 만들어서 부모 노드 왼쪽에 연결
		if (parent->left != nullptr)
			return nullptr;

		parent->left = new Node(data);
		parent->left->parent = parent;

		// 리턴
		return parent->left;
	}

	// 추가(오)
	Node* AddRight(Node* parent, T data)
	{
		// 이미 오른쪽에 자식이 있으면
		// 새로운 노드를 만들어서 부모 노드 오른쪽에 연결
		if (parent->right != nullptr)
			return nullptr;

		parent->right = new Node(data);
		parent->right->parent = parent;

		// 리턴
		return parent->right;
	}

	// 출력

	// 전위
	void PrintPreOrder(Node* node)
	{
		if (node == nullptr) return;

		cout << node->data << " ";

		PrintPreOrder(node->left);
		PrintPreOrder(node->right);
	}

	// 중위
	void PrintInOrder(Node* node)
	{
		if (node == nullptr) return;

		PrintInOrder(node->left);

		cout << node->data << " ";

		PrintInOrder(node->right);
	}

	// 후위
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