#include <iostream>
#include "SceneManager.h"

SceneManager* SceneManager::hInstance = nullptr;

SceneManager::SceneManager()
{
	Init();
}

SceneManager::~SceneManager()
{
	Close();
}

bool SceneManager::Init()
{
	auto ExitFunc = [&]() 
	{
		std::cout << "failed SDL_INIT !" << std::endl;
		return false; 
	};

	if (SDL_Init(SDL_INIT_EVERYTHING)) { ExitFunc(); }


}

void SceneManager::Run()
{
	while (SDL_PollEvent(&event_))
	{

	}
}

void SceneManager::Close()
{
}

