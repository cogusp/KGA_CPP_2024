#pragma once
#include "Singleton.h"
#include <map>
#include <iostream>

class SceneManager : public Singleton<SceneManager>
{
public:
	SceneManager();
	~SceneManager();

	void AddScene(const std::string& name, const std::string& description);
	void SetCurrentScene(const std::string& name);
	void ShowCurrentScene()const;

private:
	
};