#pragma once

#include "raylib.h"

class Player
{
public:
	Player();

	void update();
	void render();

	Vector2 playerPos;
	Vector2 playerSize;

private:
	void initVariables();

	float playerSpeed;
	float playerMoveSpeed;
};