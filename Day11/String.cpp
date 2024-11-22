/***************************

[string]
- C++���� �����ϴ� ���ڿ��� �ٷ�� ���� Ŭ����
- C ��Ÿ���� ���� �迭���� ���� �����ϰ� ������.
- ���������� ���� �迭�� ����ϰ�, ũ�⸦ �ڵ����� ����
- ���ڿ� ��, ����, �κ� ���ڿ� ����, �˻�, ���� �� �پ��� ���� ����.
- �޸𸮸� �������� �����ϱ� ������ ��Ը� ���ڿ� �۾����� �޸� �������� �� ����.
- ũ�� ������ ���� �߻��ϴ� ���, ���Ҵ� ������� ���� ���� ���ϰ� ���� �� ����.
- ���ڿ��� ª���� ���� �޸� �Ҵ��� ���ϰ� ���ÿ� �����Ͽ� ����ȭ��.
  (SSO Small String Optimization)

***************************/

#include <iostream>

int main()
{
	std::string str = "Hello";
	std::string name = "World";
	std::string result;

	// 1. ���ڿ� ���� ���
	std::cout << "str�� ����: " << str.length() << std::endl;
	std::cout << "name�� ����: " << name.size() << std::endl;

	// 2. ���ڿ� ����
	result = str + ", " + name + "!";
	std::cout << "����: " << result << std::endl;

	// 3. �κ� ���ڿ� ����: Ư�� ��ġ���� ������ ���̸�ŭ �κ� ���ڿ� ����
	std::string sub = result.substr(0, 5);
	std::cout << "�κ� ���ڿ�: " << sub << std::endl;

	// 4. ���ڿ� �ٲٱ�: ���ڿ��� Ư�� �κ��� �ٸ� ���ڿ��� �ٲ�
	result.replace(0, 2, "Hi");		// 0��° ��ġ���� 2��
	std::cout << "������ ���ڿ�: " << result << std::endl;

	const char* cstr = result.c_str();
	std::cout << "C ��Ÿ�Ϸ�: " << result << std::endl;

	// append: ���ڿ� ���� �ٸ� ���ڿ� �߰�
	// insert: ������ ��ġ�� ���ڿ� ����(��ġ, ������ ���ڿ�)
	// erase: ������ ��ġ���� Ư�� ���̸�ŭ ���ڿ� ����(��ġ, ����)

	std::string input;
	std::cin >> input;

	std::reverse(input.begin(), input.end());

	std::cout << "������: " << input << std::endl;

	// 2 ���ڿ� �� Ư�� ���� ����
	char target;
	int cnt = 0;
	std::string input1;
	std::cout << "���ڿ� �Է�: ";
	std::cin >> input1;
	std::cout << "ã�� ���� �Է�: ";
	std::cin >> target;

	for (int i = 0; i < input1.length(); i++)
	{
		if (input[i] == target)
		{
			cnt++;
		}
	}
}