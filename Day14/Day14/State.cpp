/*

[State]
- 클래스를 활영하여 상태를 캡슐화하고 상태 간의 전환을 쉽게 처리하기 위해 사용
- 클래스를 사용하는 것이 상태 패턴의 주요한 특징을 살리는 데 도움이 됨.

*/

#include <iostream>

enum class State
{
	ATTACK, RUN, JUMP
};

void AttackState()
{
	std::cout << "공격" << std::endl;

}

void RunState()
{
	std::cout << "달리기" << std::endl;
}

void JumpState()
{
	std::cout << "점프" << std::endl;

}

class CState
{
public:
	// 여기는 절대 건드리지 않고 작성 (의존하지 않음)
	virtual void EnterState() = 0;
	virtual void InputEvent() = 0;
	virtual void Update() = 0;
	virtual void ExitState() = 0;
};

class CRunState : public CState
{
	void EnterState() override
	{
		std::cout << "달리는 상태로 진입" << std::endl;
	}

	void InputEvent() override
	{
		std::cout << "달리는 상태에서 키 입력" << std::endl;
	}

	void Update() override
	{
		std::cout << "달리는 중에 위치 변경" << std::endl;
	}

	void ExitState() override
	{
		std::cout << "달리기 끝" << std::endl;
	}
};

class Character
{
private:
	CState* currentState;

public:
	Character()
	{
		currentState = new CRunState();
	}

	// 기존 상태를 종료하고 새로운 상태로 변경
	void SetCurState(CState* s)
	{
		currentState->ExitState();
		currentState = s;
		currentState->EnterState();
	}

	void InputEvent()
	{
		currentState->InputEvent();
	}

	void Update()
	{
		currentState->Update();
	}
};

class CJumpState : public CState
{
	void EnterState() override
	{
		std::cout << "점프 상태로 진입" << std::endl;
	}

	void InputEvent() override
	{
		std::cout << "점프 상태에서 키 입력" << std::endl;
	}

	void Update() override
	{
		std::cout << "점프 중에 위치 변경" << std::endl;
	}

	void ExitState() override
	{
		std::cout << "점프 끝" << std::endl;
	}
};

int main()
{
	Character c;
	c.InputEvent();
	c.Update();

	std::cout << std::endl;

	// 상태 변경
	c.SetCurState(new CJumpState());
	c.InputEvent();
	c.Update();
}