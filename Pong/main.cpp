#include "game.h"

int main()
{
	const int windowWidth = 1080;
	const int windowHeight = 720;
	
	InitWindow(windowWidth, windowHeight, "Pong");
	SetTargetFPS(60);

	Game game;
	game.run();

	return 0;
}