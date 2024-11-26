/*

[Map]
- 연관 컨테이너
- Key, Value의 쌍으로 저장(pair)
- Key는 컨테이너에 중복 저장이 될 수 없으며, 중복 사용 시 멀티맵 사용.
- 삽입될 때마다 자동으로 Key가 정렬됨.

[unordered_map]
- 해시 테이블로 만들어진 정렬되지 않은 맵
- 내부적으로 해시 함수에 따라서 저장 위치가 결정
- 해시 함수를 사용해서 키를 해시 값으로 변환하고, 이 값을 기반으로 데이터를
  저장하거나 검색하는 방식
- 키-값 쌍으로 저장

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

	// pair: 두 개의 값을 묶어서 하나의 객체로 사용하는 템플릿 클래스
	// 두개의 서로 다른 타입의 값을 함께 저장할 수 있음.
	// 페어는 두 개의 멤버 타입을 가지고 있으며 first, second가 있음

	// 1. value_type
	// 기본적인 키-값 쌍 타입을 나타냄.
	// 명시적으로 pair 객체를 생성하여 insert에 전달
	// 코드가 길어져 가독성이 떨어짐.
	data.insert(std::map<std::string, int>::value_type("이바다 보바", 1));

	// 2. make_pair
	// pair 객체를 생성하는 함수 템플릿
	// make_pair("홍길동", 5) -> std::pair<string, int> 타입의 객체를 생성
	// 템플릿 인자를 자동으로  추론하므로 타입이 명확하지 않을 수 있음
	// 복잡한 타입을 다룰 때는 명시적인 타입 선언이 필요할 수 있음.
	data.insert(std::make_pair("바다리 밥", 5));

	// 3. pair
	// 키- 값 쌍을 명시적으로 생성하여 삽입
	// 명확한 타입 선언을 통해 가독성을 높임.
	data.insert(std::pair<std::string, int>("이바다", 2));
	data.insert(std::pair<std::string, int>("삼바다", 3));
	data.insert(std::pair<std::string, int>("사바다", 4));
	data.insert(std::pair<std::string, int>("오바다", 5));

	// 4. 객체를 직접 생성
	std::pair<std::string, int>pt1("바다바다리", 23);
	data.insert(pt1);
	data.erase("삼바다");

	// 출력
	for (const auto& pair : data)
	{
		std::cout << "키 값: " << pair.first << ", 데이터: " << pair.second << std::endl;
	}

	auto lbd = data.find("이바다");

	if (lbd != data.end())
	{
		std::cout << "찾았다 나의 " << lbd->first << ", " << lbd->second << std::endl;
	}

	// count: 주어진 키의 개수 반환
	// clear: 맵의 모든 요소 삭제
	// at: 주어진 키의 해당 값을 반환
	// empty: 비어있는지 확인
	// size: 크기 반환

	std::cout << data["오바다"] << std::endl;

	std::map<std::string, Armor> armorMap;

	armorMap.insert(std::make_pair("helmet", Armor("철모자", 5)));
	armorMap.insert(std::make_pair("shield", Armor("나무방패", 5)));
	armorMap.insert(std::make_pair("greaves", Armor("신발", 5)));

	for (const auto& pair : armorMap)
	{
		std::cout << "키: " << pair.first << std::endl;
		std::cout << "이름: " << pair.second.GetName() << std::endl;
		std::cout << "방어력: " << pair.second.GetDefense() << std::endl;
	}

	std::string search;
	std::cout << "검색할 방어구의 키 입력: ";
	std::cin >> search;

	auto it = armorMap.find(search);

	if (it != armorMap.end())
	{

	}
}