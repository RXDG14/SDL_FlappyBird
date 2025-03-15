#include"GameLoop.h"

GameLoop* gameLoop = new GameLoop();

int main(int argc, char** argv) 
{
	gameLoop->Initialize();
	
	while (gameLoop->GetGameState()) 
	{
		gameLoop->Render();
		gameLoop->Events();
		gameLoop->Update();
	}
	
	gameLoop->Clear();
	return 0;
}