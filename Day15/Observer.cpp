/*

[Observer Pattern]
- �ٽ��� ��ü ��ü�� ���°� ������ �� �� �ش� ���¸� 
  �����ϴ� ������ ��ü���� �ڵ����� �˸�.
- ������(������)���� ������ �����ϵ��� �ϴ� ��.
- ���� ��ȯ �ý����̳� �̺�Ʈ ���, ����-�˸� �ý��ۿ� ����.

[��ü]
- ���¸� ������, ������ ��ȭ�� ���� �� ���������� �˸��� ����.
- ���������� ����ϰų� �����ϴ� �޼��带 ����.
- �ڽ��� ������ ����ϰ�, ���� ��ȭ�� ���������� �˸�.

[������]
- ��ü�� ���¸� �����ϴ� ��ü.
- ��ü�� ���°� ����Ǹ� �����ް� ����.

[����]
- ����Ʈ �ý���
- �÷��̾ Ư�� ����Ʈ�� �����ϸ鼭 ����Ʈ�� ���°� ����� ������ 
  ����Ʈ ���� ��Ȳ�� �����ϴ� �������� ����.
- �������� UI���� ����Ʈ�� ���� ��Ȳ�� ǥ���ϰų� NPC�� �ý��ۿ���
  ��ȭ�� �ݿ��ϴ� ������� ������ �� ����.

- �÷��̾ ����Ʈ�� ������ �� ����Ʈ�� ���°� ��ȭ�Ǹ�
  �� ���¸� �����ϴ� ���� ��ü��(UI, ����Ʈ �α�, NPC ��)�� �ڵ����� ������Ʈ �ǵ���

*/

#include <iostream>
#include <vector>

// Observer �������̽�
class Observer
{
public:
	virtual void Update(const std::string& questStatus) = 0;
	virtual ~Observer() = default;
};

// ��ü
class Subject
{
public:
	virtual void Attach(Observer* observer) = 0;	// ������ ���
	virtual void Detach(Observer* observer) = 0;	// ������ ����
	virtual void Notify() = 0;						// ���������� �˸�
	virtual ~Subject() = default;

};

class QuestSystem : public Subject
{
private:
	std::vector<Observer*> observers;
	std::string questStatus;

public:
	void Attach(Observer* observer) override
	{
		observers.push_back(observer);
	}

	void Detach(Observer* observer) override
	{
		auto it = std::find(observers.begin(), observers.end(), observer);
	
		if (it != observers.end())
		{
			observers.erase(it);
		}
	}

	void Notify() override
	{
		for (Observer* observer : observers)
		{
			// ���°� ����� ���� ���� �� ������Ʈ
			observer->Update(questStatus);
		}
	}

	void SetQuestStatus(const std::string& status)
	{
		questStatus = status;
		Notify();
	}

	std::string GetQuestStatus() const
	{
		return questStatus;
	}
};

class QuestUI : public Observer
{
public:
	void Update(const std::string& questStatus) override
	{
		std::cout << "UI ����Ʈ ���°� ����� " << questStatus << std::endl;
	}
};

class QuestLog : public Observer
{
public:
	void Update(const std::string& questStatus) override
	{
		std::cout << "����Ʈ �α׿� ��� " << questStatus << std::endl;
	}
};

class NPC : public Observer
{
private:
	std::string name;

public:
	NPC(const std::string name) : name(name) {}

	void Update(const std::string& questStatus) override
	{
		std::cout << "NPC�� ����Ʈ ���� Ȯ�� " << questStatus << std::endl;
	}
};

int main()
{
	QuestSystem qs;
	QuestUI ui;
	QuestLog log;
	NPC npc("ȫ���");

	// ���
	qs.Attach(&ui);
	qs.Attach(&log);
	qs.Attach(&npc);

	std::cout << "����Ʈ ���� : ����" << std::endl;
	qs.SetQuestStatus("����Ʈ ���۵�");
	std::cout << "����Ʈ ���� : �Ϸ�" << std::endl;
	qs.SetQuestStatus("����Ʈ �Ϸ�");
}