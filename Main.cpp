#include"GameLoop.h"

GameLoop* gameLoop = new GameLoop();

int main(int argc, char** argv) 
{
	gameLoop->Initialize();
	
	while (1) 
	{
		gameLoop->Render();
	}
	
	gameLoop->Clear();
	
	return 0;
}