#include"GameLoop.h"

GameLoop::GameLoop() 
{
	window = NULL;
	renderer = NULL;
}

void GameLoop::Initialize()
{
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("abcd", WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE);

	if (window) 
	{
		renderer = SDL_CreateRenderer(window, NULL);
		if (renderer) 
		{
			std::cout << "Success";
		}
		else 
		{
			std::cout << "Renderer not created!";
		}
	}
	else 
	{
		std::cout << "Window not created!";
	}
}

void GameLoop::Events()
{

}

void GameLoop::Render()
{
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void GameLoop::Clear()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

