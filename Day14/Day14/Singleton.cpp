/***************************

[������ ����]
- Singleton
- ���� �� ���� �ν��Ͻ����� ������ ����.
- Ŭ������ ��ü�� ���� X,

Manager�� �ϳ��� Instance�� ������ �ۼ��ϴ� ���� ����
-> SIngleton�� ����ϸ� ����
- �������� ���ټ� �� ���� Instance�� ���� ȿ�������� ���� ����

���� ���õ� Manager, ���� ������ ��������� �����ϱ� ����

***************************/

#include <iostream>

// �� ���
//class Singleton
//{
//private:
//	static Singleton* instance;
//
//public:
//	static Singleton* GetInstance()
//	{
//		if (instance == nullptr)
//		{	
//			// ������ ������� ������ �߻��ϱ� ����
//			// ��������� �����ϴ� ������ �ʼ�
//			instance = new Singleton();
//		}
//		return instance;
//	} 
//
//};

template <typename T>

class Singleton
{
private:
	// �ܺο��� ��ü ������ �Ұ����ϵ��� ������ ����
	Singleton()
	{
		std::cout << "�̱��� �ν��Ͻ� ����" << std::endl;
	}
	~Singleton(){}

	// ���� ������ �� ������ ����� ������ ����
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	static Singleton& GetInstance()
	{
		static Singleton instance;

		return instance;
	}

	void Show()
	{
		std::cout << "�̱���" << std::endl;
	}
};

int main()
{
	Singleton& s1 = Singleton::GetInstance();

	s1.Show();

	Singleton& s2 = Singleton::GetInstance();

	if (&s1 == &s2)
	{
		std::cout << "����" << std::endl;
	}
}