#pragma once

#include "raylib.h"

class Game
{
public:
	Game();
	~Game();

	void run();

private:
	void initTextures();
	void initVariables();
	void initScreen();

	float windowWidth, windowHeight;

	void update();
	void render();

	void unload();
};