/*

[이진트리]
- 각 노드가 최대 두 개의 자식 노드를 가질 수 있는 트리 구조
- 완전 이진 트리: 모든 레벨이 가득 차있고, 마지막 레벨만이 왼쪽부터 차례대로 채워진 트리

- 전 이진 트리: 각 노드가 0 또는 2개의 자식 노드를 가지는 트리
  - 모든 노드가 2개의 자식 노드를 가지고 있거나 아예 없는 경우

- 편향 이진 트리: 모든 노드가 한쪽 방향으로만 자식 노드를 가지는 트리

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

	// 삭제
	void DeleteTree(Node* node)
	{
		if (node == nullptr) return;

		DeleteTree(node->left);
		DeleteTree(node->right);

		delete node;
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
	BinaryTree<int>* bt = new BinaryTree<int>(10);

	bt->AddLeft(bt->Root(), 20);
	bt->AddRight(bt->Root(), 15);

	bt->PrintPreOrder(bt->Root());
}