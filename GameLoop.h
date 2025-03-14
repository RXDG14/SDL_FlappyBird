#pragma once
#include<SDL3/SDL.h>
#include<iostream>


class GameLoop 
{
private:
	const int HEIGHT = 640;
	const int WIDTH = 800;
	SDL_Window* window;
	SDL_Renderer* renderer;

public:
	GameLoop();
	void Initialize();
	void Events(); // for all input events 
	void Render();
	void Clear();
};