/*

Ʈ����ī�� 52��
��(0) A(0)~K(12)
��(1) A(0)~K(12)
��(2) A(0)~K(12)
��(3) A(0)~K(12)

1. Ʈ���� ī��� ���� ���� 52���� �ִ�.
2. �÷��̾ �ִ�.
3. ������ �ִ�.

[���� ����]
- ������ 3���� ī�带 ������
- �÷��̾�� ������ ��.
- �̱�� ������ (������ �ݾ� * 2)
  - ù��° ī��� �ι�° ī�� ���̿� ����° ī�尡 ���� ���̸� �̱�
- ���ڷθ� �Ǵ�
- �� ī��� ���� -> ���� ī��� ����ϸ� �ȵ�
- Ư�� Ȯ���� ���� (������ �ݾ� * 10)

��) �� A(1) (����)   �� J(12) (����)   �� K(13)   -> ��
��) �� A(1) (����)   �� K(13) (����)   �� B(2)    -> ��
��) �� A(1) (����)   �� K(13) (����)   �� K(13)   -> ��

[���� ����]
- 17��
- ���� �ּ� �ݾ׺��� �������� ���� ��

�迭, ����, ��, �Է� x, ������, ��ⷯ ����

�迭 -> ���� -> ���� -> ���� ����

*/

#include <iostream>

void Betting();
void Print();
void Score();

int playerMoney = 10000;
int minMoney = 500;
int betMoney = 0;
int randomCard[3];			// ���� ī��


int main()
{
	int card[52];				// ī�� 52��
	int dest, sour, temp;		// ���� ����

	// ī�� ����
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	// ����
	for (int i = 0; i < 50; i++)
	{
		dest = rand() % 52;
		sour = rand() % 52;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	srand(time(0));

	// 17��
	for (int i = 0; i < 17; i++)
	{
		// ���þ׺��� �������� ������ ����
		if (playerMoney < minMoney) break;

		// ����
		std::cout << std::endl << "===== " << i + 1 << "��° ���� ���� =====" << std::endl << std::endl;

		// ����
		Betting();
		
		// ������ ���� ī�尡 �ƴ� ������ 3�� ����
		// ���� ��ȣ ��
		for (int i = 0; i < 3; i++)
		{
			int r = rand() % 52;
			
			if (card[r] == 0)
			{
				i--;
			}
			else
			{
				randomCard[i] = card[r];
				card[r] = 0;
			}
		}

		// ���
		Print();

		// ���� �Ǻ�
		Score();
	}

	return 0;
}

void Betting()
{
	while (1)
	{
		std::cout << "*** ���� ���� (�ּ� �ݾ� 500��) ***" << std::endl;
		std::cout << "���� ������ >>> " << playerMoney << std::endl;
		std::cout << "���þ� �Է� >>> ";
		std::cin >> betMoney;

		if (minMoney <= betMoney)
		{
			playerMoney -= betMoney;
			break;
		}
		else
			continue;
	}
}

void Print()
{
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		if (randomCard[i] >= 39)
			std::cout << " ��" << randomCard[i] % 13 << "  ";
		else if (randomCard[i] >= 26)
			std::cout << " ��" << randomCard[i] % 13 << "  ";
		else if (randomCard[i] >= 13)
			std::cout << " ��" << randomCard[i] % 13 << "  ";
		else if (randomCard[i] >= 0)
			std::cout << " ��" << randomCard[i] % 13 << "  ";
	}

	std::cout << std::endl;
}


void Score()
{
	// Ư�� Ȯ���� ���� -> ���� �ݾ� * 4
	// 1��°�� 2��° �ȿ� 3��°�� ���ԵǸ� ���� -> ���� �ݾ� * 2
	// ���ų� ���Ե��� �ʾ����� ���� -> ���� �ݾ� ����
	if ((randomCard[0] % 13) == 7 || (randomCard[1] % 13) == 7 || (randomCard[2] % 13) == 7)
	{
		playerMoney += betMoney * 4;
		std::cout << std::endl << " !! ���� !! " << std::endl;
	}
	else if	  ((randomCard[0] % 13) < (randomCard[2] % 13) && (randomCard[1] % 13) > (randomCard[2] % 13)
			|| (randomCard[0] % 13) > (randomCard[2] % 13) && (randomCard[1] % 13) < (randomCard[2] % 13))
	{
		playerMoney += betMoney * 2;
		std::cout << std::endl << "    ����!   " << std::endl;
	}
	else
	{
		std::cout << std::endl << "    ��!   " << std::endl;
	}
}