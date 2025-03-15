#include"GameLoop.h"

GameLoop::GameLoop() 
{
	window = NULL;
	renderer = NULL;
	GameState = false;
}

bool GameLoop::GetGameState()
{
	return GameState;
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
			GameState = true;
			bird = TextureManager::Texture("Assets/Hitman.png", renderer);
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
	SDL_PollEvent(&event);
	if (event.type == SDL_EventType::SDL_EVENT_QUIT) 
	{
		GameState = false;
	}
	if (event.type == SDL_EventType::SDL_EVENT_MOUSE_BUTTON_DOWN) 
	{
		std::cout << "Mouse pressed" << std::endl;
	}
	if (event.type == SDL_EventType::SDL_EVENT_KEY_DOWN)
	{
		if (event.key.key == SDLK_SPACE) 
		{
			std::cout << "Space pressed" << std::endl;
		}
	}
}

void GameLoop::Update()
{
	sourceBird.w = 713;
	sourceBird.h = 463;
	sourceBird.x = sourceBird.y = 10;

	destinationBird.w = 10;
	destinationBird.h = 10;
	destinationBird.x = destinationBird.y = 10;
}

void GameLoop::Render()
{
	SDL_RenderClear(renderer);
	SDL_RenderTexture(renderer, bird, &sourceBird, &destinationBird);
	SDL_RenderPresent(renderer);
}

void GameLoop::Clear()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

