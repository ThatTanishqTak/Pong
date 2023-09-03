#include "game.h"

Game::Game()
{
	grap_obj = new Graphics();
	play_obj = new Player();
	ball_obj = new Ball();
	score_obj = new Score();
}

Game::~Game() { unload(); }

void Game::run()
{
	while (!WindowShouldClose())
	{
		update();
		render();
	}
}

void Game::update()
{
	play_obj->update();
	ball_obj->update();
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	grap_obj->render();
	play_obj->render();
	ball_obj->render();
	score_obj->render();

	EndDrawing();
}

void Game::unload()
{
	delete grap_obj;
	delete play_obj;
	delete ball_obj;
	delete score_obj;

	CloseWindow();
}
