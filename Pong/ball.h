#pragma once

#include "raylib.h"

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
	void initVariables();
};