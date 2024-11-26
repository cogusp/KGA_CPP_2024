/*

D(Dependency Inversion Principle, DIP, 의존성 역전 원칙)
- 상위 모듈이 하위 모듈에 의존하지 않고, 추상화된 인터페이스에 의존하도록 해야함.
- 하위 모듈은 상위 모듈의 구현에 의존하지 않아야 함.
- 두 모듈이 추상화된 인터페이스를 통해 연결되어야 함.
- 구체적인 구현에 의존하지 않고, 추상화에 의존하여 모듈간의 결합도를 줄임.


상위: 게임 캐릭터
하위: 무기 시스템
*/

class Sword
{
public:
	void Use()
	{
		// 칼을 휘두름
	}
};

class Player
{
	Sword s;		// 무기를 추가하기 위해선 코드를 또 추가해야 함
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
		// 칼을 쓴다
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
	
	// 칼을 쓰는 플레이어
	Player playerSword(&s);
	playerSword.Attack();

	// 활을 쓰는 플레이어
	Player playerBow(&b);
	playerBow.Attack();
}