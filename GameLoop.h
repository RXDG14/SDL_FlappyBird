#pragma once
#include<SDL3/SDL.h>
#include<SDL_image.h>
#include"TextureManager.h"
#include<iostream>


class GameLoop 
{
private:
	const int HEIGHT = 640;
	const int WIDTH = 800;

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event event;
	SDL_Texture* bird;
	SDL_FRect sourceBird, destinationBird;

	bool GameState;

public:
	GameLoop();
	bool GetGameState();
	void Initialize();
	void Events(); // for all input events 
	void Render();
	void Update();
	void Clear();
};