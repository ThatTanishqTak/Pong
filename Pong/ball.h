#pragma once

#include "raylib.h"
#include "score.h"

class Ball
{
public:
	Ball();

	void update();
	void render();

	float radius;
	Vector2 ballSpeed;
	Vector2 ballPos;

private:
	Score* score_ball_obj;

	void initVariables();

	void unload();
};