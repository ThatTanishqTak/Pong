#include "game.h"

Game::Game()
{
	initVariables();
	initScreen();

	grap_obj = new Graphics();
	play_obj = new Player();
	ball_obj = new Ball();
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

void Game::initVariables()
{
	windowWidth = 1080.0f;
	windowHeight = 720.0f;
}

void Game::initScreen()
{
	InitWindow(static_cast<int>(windowWidth), static_cast<int>(windowHeight), "Pong");
	SetTargetFPS(60);
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

	EndDrawing();
}

void Game::unload()
{
	delete grap_obj;
	delete play_obj;
	delete ball_obj;

	CloseWindow();
}
