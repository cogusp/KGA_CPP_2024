/*

D(Dependency Inversion Principle, DIP, ������ ���� ��Ģ)
- ���� ����� ���� ��⿡ �������� �ʰ�, �߻�ȭ�� �������̽��� �����ϵ��� �ؾ���.
- ���� ����� ���� ����� ������ �������� �ʾƾ� ��.
- �� ����� �߻�ȭ�� �������̽��� ���� ����Ǿ�� ��.
- ��ü���� ������ �������� �ʰ�, �߻�ȭ�� �����Ͽ� ��Ⱓ�� ���յ��� ����.


����: ���� ĳ����
����: ���� �ý���
*/

class Sword
{
public:
	void Use()
	{
		// Į�� �ֵθ�
	}
};

class Player
{
	Sword s;		// ���⸦ �߰��ϱ� ���ؼ� �ڵ带 �� �߰��ؾ� ��
public:
	void Attack()
	{
		s.Use();
	}
};

class Weapon {
public:
	virtual void Use() = 0;

};

class Sword :public Weapon
{
public:
	void Use() override
	{
		// Į�� ����
	}
};

class Bow :public Weapon
{
public:
	void Use() override
	{

	}
};

class Player
{
private:
	Weapon* weapon;
public:
	Player(Weapon* w) : weapon(w) {}

	void Attack()
	{
		weapon->Use();
	}
};

int main()
{
	Sword s;
	Bow b;
	
	// Į�� ���� �÷��̾�
	Player playerSword(&s);
	playerSword.Attack();

	// Ȱ�� ���� �÷��̾�
	Player playerBow(&b);
	playerBow.Attack();
}