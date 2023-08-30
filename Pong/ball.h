#pragma once

#include "raylib.h"
#include "graphics.h"
#include "player.h"

class Ball
{
public:
	Ball();
	~Ball();

	Vector2 ballPos;

	void update();
	void render();

private:
	Graphics* grap_ball_obj;
	Player* play_ball_obj;

	void initVariables();

	float radius;
	Vector2 ballMoveSpeed;

	void unload();
};