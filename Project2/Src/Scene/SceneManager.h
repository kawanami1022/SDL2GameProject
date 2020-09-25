#pragma once
#include <SDL.h>
#define IpSceneManager SceneManager::GethInstance()

class SceneManager
{

public:

	// singleton
	static SceneManager& GethInstance()
	{
		hInstance = Create();
		return (*hInstance);
	}

	static SceneManager* Create()
	{
		if (hInstance != nullptr)
		{
			hInstance = new SceneManager();
		}
		return hInstance;
	}

	static void Destroy()
	{
		if (hInstance != nullptr)
		{
			delete hInstance;
			hInstance = nullptr;
		}
	}


	bool Init();
	void Run();
	void Close();


private:
	static SceneManager* hInstance;
	SceneManager();
	~SceneManager();

	SDL_Event event_;
	
	// the surface contained by the window
	SDL_Surface* gScreenSurface = nullptr;


};

