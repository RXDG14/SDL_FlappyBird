#include"TextureManager.h"

SDL_Texture* TextureManager::Texture(const char* fileLocation, SDL_Renderer* renderer)
{
	SDL_Surface* surface;
	SDL_Texture* texture;

	surface = IMG_Load(fileLocation);
	texture = SDL_CreateTextureFromSurface(renderer, surface);
	
	return texture;
}
