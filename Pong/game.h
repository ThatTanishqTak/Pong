#pragma once

#include "raylib.h"
#include "graphics.h"
#include "player.h"
#include "ball.h"

class Game
{
public:
	Game();
	~Game();

	void run();

private:
	Graphics* grap_obj;
	Player* play_obj;
	Ball* ball_obj;

	void initVariables();
	void initScreen();

	float windowWidth, windowHeight;

	void update();
	void render();

	void unload();
};