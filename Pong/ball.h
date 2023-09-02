#pragma once

#include "raylib.h"
#include "graphics.h"

class Ball
{
public:
	Ball();
	~Ball();

	void update();
	void render();

	float radius;
	Vector2 ballSpeed;
	Vector2 ballPos;

private:
	Graphics* grap_ball_obj;

	void initVariables();
	void unload();
};