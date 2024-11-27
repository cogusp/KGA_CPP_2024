/*

[State]
- Ŭ������ Ȱ���Ͽ� ���¸� ĸ��ȭ�ϰ� ���� ���� ��ȯ�� ���� ó���ϱ� ���� ���
- Ŭ������ ����ϴ� ���� ���� ������ �ֿ��� Ư¡�� �츮�� �� ������ ��.

*/

#include <iostream>

enum class State
{
	ATTACK, RUN, JUMP
};

void AttackState()
{
	std::cout << "����" << std::endl;

}

void RunState()
{
	std::cout << "�޸���" << std::endl;
}

void JumpState()
{
	std::cout << "����" << std::endl;

}

class CState
{
public:
	// ����� ���� �ǵ帮�� �ʰ� �ۼ� (�������� ����)
	virtual void EnterState() = 0;
	virtual void InputEvent() = 0;
	virtual void Update() = 0;
	virtual void ExitState() = 0;
};

class CRunState : public CState
{
	void EnterState() override
	{
		std::cout << "�޸��� ���·� ����" << std::endl;
	}

	void InputEvent() override
	{
		std::cout << "�޸��� ���¿��� Ű �Է�" << std::endl;
	}

	void Update() override
	{
		std::cout << "�޸��� �߿� ��ġ ����" << std::endl;
	}

	void ExitState() override
	{
		std::cout << "�޸��� ��" << std::endl;
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

	// ���� ���¸� �����ϰ� ���ο� ���·� ����
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
		std::cout << "���� ���·� ����" << std::endl;
	}

	void InputEvent() override
	{
		std::cout << "���� ���¿��� Ű �Է�" << std::endl;
	}

	void Update() override
	{
		std::cout << "���� �߿� ��ġ ����" << std::endl;
	}

	void ExitState() override
	{
		std::cout << "���� ��" << std::endl;
	}
};

int main()
{
	Character c;
	c.InputEvent();
	c.Update();

	std::cout << std::endl;

	// ���� ����
	c.SetCurState(new CJumpState());
	c.InputEvent();
	c.Update();
}