/*

[Map]
- ���� �����̳�
- Key, Value�� ������ ����(pair)
- Key�� �����̳ʿ� �ߺ� ������ �� �� ������, �ߺ� ��� �� ��Ƽ�� ���.
- ���Ե� ������ �ڵ����� Key�� ���ĵ�.

[unordered_map]
- �ؽ� ���̺�� ������� ���ĵ��� ���� ��
- ���������� �ؽ� �Լ��� ���� ���� ��ġ�� ����
- �ؽ� �Լ��� ����ؼ� Ű�� �ؽ� ������ ��ȯ�ϰ�, �� ���� ������� �����͸�
  �����ϰų� �˻��ϴ� ���
- Ű-�� ������ ����

*/

#include <iostream>
#include <map>

class Armor
{
private:
	std::string name;
	int defense;

public:
	Armor() : name(""), defense(0) {}
	Armor(const std::string& n, int d) : name(n), defense(d) {}

	std::string GetName()const
	{
		return name;
	}
	int GetDefense()const
	{
		return defense;
	}
};

int main()
{
	std::map<std::string, int> data;
	std::map<std::string, int>::iterator iter;

	// pair: �� ���� ���� ��� �ϳ��� ��ü�� ����ϴ� ���ø� Ŭ����
	// �ΰ��� ���� �ٸ� Ÿ���� ���� �Բ� ������ �� ����.
	// ���� �� ���� ��� Ÿ���� ������ ������ first, second�� ����

	// 1. value_type
	// �⺻���� Ű-�� �� Ÿ���� ��Ÿ��.
	// ��������� pair ��ü�� �����Ͽ� insert�� ����
	// �ڵ尡 ����� �������� ������.
	data.insert(std::map<std::string, int>::value_type("�̹ٴ� ����", 1));

	// 2. make_pair
	// pair ��ü�� �����ϴ� �Լ� ���ø�
	// make_pair("ȫ�浿", 5) -> std::pair<string, int> Ÿ���� ��ü�� ����
	// ���ø� ���ڸ� �ڵ�����  �߷��ϹǷ� Ÿ���� ��Ȯ���� ���� �� ����
	// ������ Ÿ���� �ٷ� ���� ������� Ÿ�� ������ �ʿ��� �� ����.
	data.insert(std::make_pair("�ٴٸ� ��", 5));

	// 3. pair
	// Ű- �� ���� ��������� �����Ͽ� ����
	// ��Ȯ�� Ÿ�� ������ ���� �������� ����.
	data.insert(std::pair<std::string, int>("�̹ٴ�", 2));
	data.insert(std::pair<std::string, int>("��ٴ�", 3));
	data.insert(std::pair<std::string, int>("��ٴ�", 4));
	data.insert(std::pair<std::string, int>("���ٴ�", 5));

	// 4. ��ü�� ���� ����
	std::pair<std::string, int>pt1("�ٴٹٴٸ�", 23);
	data.insert(pt1);
	data.erase("��ٴ�");

	// ���
	for (const auto& pair : data)
	{
		std::cout << "Ű ��: " << pair.first << ", ������: " << pair.second << std::endl;
	}

	auto lbd = data.find("�̹ٴ�");

	if (lbd != data.end())
	{
		std::cout << "ã�Ҵ� ���� " << lbd->first << ", " << lbd->second << std::endl;
	}

	// count: �־��� Ű�� ���� ��ȯ
	// clear: ���� ��� ��� ����
	// at: �־��� Ű�� �ش� ���� ��ȯ
	// empty: ����ִ��� Ȯ��
	// size: ũ�� ��ȯ

	std::cout << data["���ٴ�"] << std::endl;

	std::map<std::string, Armor> armorMap;

	armorMap.insert(std::make_pair("helmet", Armor("ö����", 5)));
	armorMap.insert(std::make_pair("shield", Armor("��������", 5)));
	armorMap.insert(std::make_pair("greaves", Armor("�Ź�", 5)));

	for (const auto& pair : armorMap)
	{
		std::cout << "Ű: " << pair.first << std::endl;
		std::cout << "�̸�: " << pair.second.GetName() << std::endl;
		std::cout << "����: " << pair.second.GetDefense() << std::endl;
	}

	std::string search;
	std::cout << "�˻��� ���� Ű �Է�: ";
	std::cin >> search;

	auto it = armorMap.find(search);

	if (it != armorMap.end())
	{

	}
}