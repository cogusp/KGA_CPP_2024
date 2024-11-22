/*

�ǽ�

1. Person Ŭ���� ����
2. �Ӽ�: �̸�, ����, �������, ��ȭ��ȣ
3. ���: ���� ��� �Լ�

*/

#include <iostream>

class CPerson
{
public:
	std::string mName;
	std::string mBirth;
	std::string mNumber;
	int mAge;

public:
	CPerson()
	{
		mName = "��ä��";
		mBirth = "2001. 08. 25.";
		mNumber = "010-1234-5678";
		mAge = 24;
	}

	CPerson(const std::string& name, const std::string& birth,
		const std::string& num, const int age)
	{
		mName = name;
		mBirth = birth;
		mNumber = num;
		mAge = age;
	}

	void PrintInfo()const;
};

int main()
{
	CPerson* person1 = new CPerson();
	person1->PrintInfo();

	CPerson* person2 = new CPerson("�̵��", "2011. 01. 26.", "010-1111-1111", 19);
	person2->PrintInfo();

	delete person1; 
	delete person2;
	person1 = nullptr;
	person2 = nullptr;
}

void CPerson::PrintInfo() const
{
	std::cout << "�̸�: " << mName << std::endl;
	std::cout << "����: " << mAge << std::endl;
	std::cout << "�������: " << mBirth << std::endl;
	std::cout << "��ȭ��ȣ: " << mNumber << std::endl << std::endl;
}

