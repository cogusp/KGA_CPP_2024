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
		// Scene �̸����� map���� ã��
		auto it = scenes.find(name);

		// ������
		if (it != scenes.end())
		{
			delete it->second;			// ���� �Ҵ� �� Scene ��ü �޸� ����
			scenes.erase(it);			// map���� Scene ����
		}
	}

	void SetCurrentScene(const std::string& name)
	{
		// Scene �̸����� map���� ã��
		auto it = scenes.find(name);

		// ������
		if (it != scenes.end())
		{
			currentScene = it->second;	// ���� Scene ����
			currentSceneName = name;	// ���� Scene �̸� ����
		}
		else
		{
			std::cout << "�ش� Scene�� ã�� �� ����" << std::endl;
		}
	}

	void ShowCurrentScene()const
	{
		// ���� Scene�� �������� ���� ���
		if (currentSceneName.empty())
		{
			std::cout << "���� Scene�� �����Ǿ� ���� ����" << std::endl;
		}

		std::cout << "���� Scene: " << currentSceneName << std::endl;
		std::cout << "Scene ����: " << currentScene->GetDesc() << std::endl;
	}
};

int main()
{
	SceneManager* sceneManager = new SceneManager();

	sceneManager->AddScene("MainMenu", new Scene("���� �޴�: ���� ����, �ɼ�, ����"));
	sceneManager->AddScene("BattleLevel1", new Scene("���� 1, ù ��° ���� ����"));

	sceneManager->SetCurrentScene("MainMenu");
	sceneManager->ShowCurrentScene();

	std::cout << "Scene�� ��ȯ�Ѵ�." << std::endl;

	sceneManager->SetCurrentScene("BattleLevel1");
	sceneManager->ShowCurrentScene();

	sceneManager->RemoveScene("BattleLevel1");

	delete sceneManager;
	sceneManager = nullptr;
}