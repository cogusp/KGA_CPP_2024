/*

[Observer Pattern]
- 핵심은 주체 객체의 상태가 변경이 될 때 해당 상태를 
  관찰하는 옵저버 객체에게 자동으로 알림.
- 옵저버(관찰자)들이 적절히 반응하도록 하는 것.
- 상태 변환 시스템이나 이벤트 기반, 구독-알림 시스템에 적합.

[주체]
- 상태를 가지며, 상태의 변화가 있을 때 옵저버에게 알리는 역할.
- 옵저버들을 등록하거나 제거하는 메서드를 제공.
- 자신의 정보를 등록하고, 상태 변화를 옵저버에게 알림.

[옵저버]
- 주체의 상태를 관찰하는 객체.
- 주체의 상태가 변경되면 통지받고 반응.

[예시]
- 퀘스트 시스템
- 플레이어가 특정 퀘스트를 진행하면서 퀘스트의 상태가 변경될 때마다 
  퀘스트 진행 상황을 추적하는 옵저버가 받음.
- 옵저버는 UI에서 퀘스트의 진행 상황을 표시하거나 NPC나 시스템에서
  변화를 반영하는 방식으로 동작할 수 있음.

- 플레이어가 퀘스트를 진행할 때 퀘스트의 상태가 변화되면
  그 상태를 추적하는 여러 객체들(UI, 퀘스트 로그, NPC 등)이 자동으로 업데이트 되도록

*/

#include <iostream>
#include <vector>

// Observer 인터페이스
class Observer
{
public:
	virtual void Update(const std::string& questStatus) = 0;
	virtual ~Observer() = default;
};

// 주체
class Subject
{
public:
	virtual void Attach(Observer* observer) = 0;	// 옵저버 등록
	virtual void Detach(Observer* observer) = 0;	// 옵저버 제거
	virtual void Notify() = 0;						// 옵저버에게 알림
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
			// 상태가 변경된 것을 통지 및 업데이트
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
		std::cout << "UI 퀘스트 상태가 변경됨 " << questStatus << std::endl;
	}
};

class QuestLog : public Observer
{
public:
	void Update(const std::string& questStatus) override
	{
		std::cout << "퀘스트 로그에 기록 " << questStatus << std::endl;
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
		std::cout << "NPC가 퀘스트 상태 확인 " << questStatus << std::endl;
	}
};

int main()
{
	QuestSystem qs;
	QuestUI ui;
	QuestLog log;
	NPC npc("홍길길");

	// 등록
	qs.Attach(&ui);
	qs.Attach(&log);
	qs.Attach(&npc);

	std::cout << "퀘스트 변경 : 시작" << std::endl;
	qs.SetQuestStatus("퀘스트 시작됨");
	std::cout << "퀘스트 변경 : 완료" << std::endl;
	qs.SetQuestStatus("퀘스트 완료");
}