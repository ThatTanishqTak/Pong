#include "game.h"

Game::Game()
{
	initTextures();
	initVariables();
	initScreen();
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

void Game::initTextures()
{
}

void Game::initVariables()
{
	windowWidth = 1080.0f;
	windowHeight = 720.0f;
}

void Game::initScreen()
{
	InitWindow(windowWidth, windowHeight, "Pong");
	SetTargetFPS(60);
}

void Game::update()
{
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	EndDrawing();
}

void Game::unload()
{
	CloseWindow();
}
