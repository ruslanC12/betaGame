#include "Game.h"

Game* game = nullptr;

int main(int argv, char** argc)
{
	game = new Game();
	
	game->Init("Ruslan's Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, false);

	while (game->running())
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}