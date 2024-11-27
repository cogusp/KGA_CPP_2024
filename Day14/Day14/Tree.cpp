/**********************************

[트리]
- 계층적인 자료를 나타내는 데 자주 사용되는 자료구조
- 부모 노드가 여러 자식 노드를 가질 수 있는 1대 다 구조
- 한 노드에서 출발하여 다시 자기 자신의 노드로 돌아오는 순환 구조를 가지지 않음.

[트리 구성]
- 부모(Parent): 루트 노드 방향으로 직접 연결된 노드
- 자식(Child): 루트 노드 반대 방향으로 직접 연결된 노드
- 뿌리(root): 부모 노드가 없는 최상위 노드. 트리의 깊이 0에 하나만 존재
- 가지(Branch): 부모 노드와 자식 노드가 모두 있는 노드. 트리의 중간에 존재
- 잎(Leaf): 자식 노드가 없는 노드. 트리의 끝에 존재

**********************************/

#include <iostream>
#include <vector>

using namespace std;

template <typename T> class Tree
{
public:
	struct Node;

public:
	// 루트 노드 반환
	Node* Root()
	{
		return root;
	}

	// 루트 노드 초기화
	Tree(T data)
	{
		root = new Node(data);
	}

	~Tree()
	{
		delete root;
	}

	// 부모 노드에서 자식 노드를 추가하는 함수
	Node* Add(Node* parent, T data)
	{
		// 노드 생성
		Node* node = new Node(data);

		// 새로 생성된 노드의 부모 설정
		node->Parent = parent;

		// 부모 노드의 자식 목록에 새로운 노드 추가
		parent->Childs.push_back(node);

		return node;
	}

	// 출력
	void Print(Node* node, int depth)
	{
		// 부모가 있으면
		if (node->Parent != nullptr)
		{
			cout << "부모의 데이터: " << node->Parent->data;
		}
		cout << " 데이터: " << node->data << " " << "\t깊이: " << depth << endl;

		for (int i = 0; i < node->Childs.size();++i)
		{
			Print(node->Childs[i], depth + 1);
		}
	}

public:
	struct Node
	{
		// 노드에 저장된 데이터
		T data;

		// 부모 노드 포인터
		Node* Parent;

		// 자식 노드
		vector<Node*> Childs;

		Node(T data) : Parent(nullptr), data(data) {}
	};

private:
	// 루트 노드
	Node* root;
};

int main()
{
	// 트리 객체 만들기
	Tree<int>* tree = new Tree<int>(20);

	// 새로운 노드를 추가하고, 그 노드의 포인터를 node 변수에 저장
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