/*

����

5*5 ���� ����
���ڸ� �Է��ϸ� üũǥ�� �־��ֱ� (�ƹ� ���ڷ�)
���� �˻�
���� ����: 3��
�� vs �÷��̾�
��: ���� ����

0	1	2	3	4
5	6	7	8	9
10	11	12	13	14
15	16	17	18	19
20	21	22	23	24

���� ����
����: index + 5
����: index + 1
�밢��: 0~ +6
�밢��: 4~ +4

*/

#include <iostream>

class Bingo 
{

};

// �ʱ�ȭ �� ���� �Լ�
void Suffle(int(&arr)[25]);

// (��)�迭���� �´� ���� ã�Ƽ� ��� ����
void Change(int(&arr1)[25], int(&arr2)[25], int select);

// ���� üũ
void IsBingo(int(&arr)[25], int& cb);

int ComRand(int(&arr)[25]);

// ����Ʈ �Լ�
void Print(int(&arr)[25], int& pb, int& cb);

int main()
{
	srand(time(0));

	// ũ�� 25 �迭 ����
	int player[25];
	int computer[25];

	// ���� üũ ����
	int pBingo = 0;
	int cBingo = 0;

	// ��ǻ�� ���� ����
	int cRand = 0;

	// (��)�ʱ�ȭ �� ����
	Suffle(player);
	Suffle(computer);

	std::cout << "===== BINGO GAME =====" << std::endl;

	// �ݺ�
	for (int i = 0; i < 25; i++)
	{
		Print(player, pBingo, cBingo);

		// 3���� �ϼ��Ǹ� ����
		if (pBingo == 3 || cBingo == 3) break;

		// �÷��̾� �Է�
		int input = 0;

		std::cout << "�÷��̾� �Է�: ";
		std::cin >> input;

		// (��)�迭���� �´� ���� ã�Ƽ� ��� ����
		Change(player, computer, input);

		// (��) ���� üũ
		IsBingo(player, pBingo);
		IsBingo(computer, cBingo);


		// ��ǻ�� ����
		// (��)�迭���� �´� ���� ã�Ƽ� ��� ����
		Change(player, computer, ComRand(player));

		// (��) ���� üũ
		IsBingo(player, pBingo);
		IsBingo(computer, cBingo);
	}

	if (pBingo == 3)
		std::cout << "===== VICTORY!! =====" << std::endl;
	else if (cBingo == 3)
		std::cout << "===== LOSE!! =====" << std::endl;
}

void Suffle(int(&arr)[25])
{
	// 1~25������ ���ڷ� �ʱ�ȭ
	for (int i = 1; i <= 25; i++)
	{
		arr[i - 1] = i;
	}

	// �迭 ����
	for (int i = 0; i < 50; i++)
	{
		int dest = rand() % 25;
		int sour = rand() % 25;

		int temp = arr[dest];
		arr[dest] = arr[sour];
		arr[sour] = temp;
	}
}

void Change(int(&arr1)[25], int(&arr2)[25], int select)
{
	for (int i = 0; i < 25; i++)
	{
		if (arr1[i] == select) arr1[i] = 88;
		if (arr2[i] == select) arr2[i] = 88;
	}
}

void IsBingo(int(&arr)[25], int& cb)
{
	int sum, bingo = 0;

	// ���� ���� index + 5
	for (int i = 0; i < 5; i++)
	{
		sum = 0;

		for (int j = 0; j < 25; j += 5)
		{
			if (arr[i + j] == 88) sum++;
		}

		if (sum == 5) bingo++;
	}

	// ���� ���� index + 1
	for (int i = 0; i < 25; i += 5)
	{
		sum = 0;

		for (int j = 0; j < 5; j++)
		{
			if (arr[i + j] == 88) sum++;
		}

		if (sum == 5) bingo++;
	}

	// ���� 0 �밢�� 0~ +6
	sum = 0;

	for (int i = 0; i < 25; i += 6)
	{
		if (arr[i] == 88) sum++;
	}

	if (sum == 5) bingo++;

	// ���� 4 �밢�� 4~ +4
	sum = 0;

	for (int i = 4; i <= 20; i += 4)
	{
		if (arr[i] == 88) sum++;
	}

	if (sum == 5) bingo++;

	// ���� ������ ��
	cb = bingo;
}

int ComRand(int(&arr)[25])
{
	int cRand;

	do
	{
		cRand = rand() % 25;
	} while (arr[cRand] == 88);

	return cRand;
}

void Print(int(&arr)[25], int& pb, int& cb)
{
	for (int i = 0; i < 25; i++)
	{
		if (i % 5 == 0) std::cout << std::endl;

		(arr[i] < 10) ? (std::cout << arr[i] << "  ") : (std::cout << arr[i] << " ");
	}
	std::cout << std::endl << std::endl;

	std::cout << ">> �÷��̾� ����: " << pb << std::endl;
	std::cout << ">>  ��ǻ��  ����: " << cb << std::endl << std::endl;
}
