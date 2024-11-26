#include <iostream>
#include <map>

class Scene
{
private:
	std::string desc;

public:
	Scene() : desc("") {}
	Scene(const std::string& desc) : desc(desc) {}

	std::string GetDesc()const
	{
		return desc;
	}
};

class SceneManager
{
private:
	std::map<std::string, Scene*> scenes;
	Scene* currentScene;
	std::string currentSceneName;

public:
	SceneManager() : currentScene(nullptr), currentSceneName("") {}
	~SceneManager()
	{
		for (auto& pair : scenes)
		{
			delete pair.second;
		}
	}

public:
	void AddScene(const std::string& name, Scene* scene)
	{
		scenes[name] = scene;
	}

	void RemoveScene(const std::string& name)
	{
		// Scene 이름으로 map에서 찾고
		auto it = scenes.find(name);

		// 있으면
		if (it != scenes.end())
		{
			delete it->second;			// 동적 할당 된 Scene 객체 메모리 해제
			scenes.erase(it);			// map에서 Scene 삭제
		}
	}

	void SetCurrentScene(const std::string& name)
	{
		// Scene 이름으로 map에서 찾고
		auto it = scenes.find(name);

		// 있으면
		if (it != scenes.end())
		{
			currentScene = it->second;	// 현재 Scene 설정
			currentSceneName = name;	// 현재 Scene 이름 설정
		}
		else
		{
			std::cout << "해당 Scene을 찾을 수 없음" << std::endl;
		}
	}

	void ShowCurrentScene()const
	{
		// 현재 Scene이 설정되지 않은 경우
		if (currentSceneName.empty())
		{
			std::cout << "현재 Scene이 설정되어 있지 않음" << std::endl;
		}

		std::cout << "현재 Scene: " << currentSceneName << std::endl;
		std::cout << "Scene 설명: " << currentScene->GetDesc() << std::endl;
	}
};

int main()
{
	SceneManager* sceneManager = new SceneManager();

	sceneManager->AddScene("MainMenu", new Scene("메인 메뉴: 게임 시작, 옵션, 종료"));
	sceneManager->AddScene("BattleLevel1", new Scene("레벨 1, 첫 번째 전투 시작"));

	sceneManager->SetCurrentScene("MainMenu");
	sceneManager->ShowCurrentScene();

	std::cout << "Scene을 전환한다." << std::endl;

	sceneManager->SetCurrentScene("BattleLevel1");
	sceneManager->ShowCurrentScene();

	sceneManager->RemoveScene("BattleLevel1");

	delete sceneManager;
	sceneManager = nullptr;
}