#pragma once

#include "raylib.h"

class Player
{
public:
	Player();

	void update();
	void render();

	Vector2 playerOnePos;
	Vector2 playerOneSize;

	Vector2 playerTwoPos;
	Vector2 playerTwoSize;

private:
	void initVariables();

	float playerSpeed;
	float playerMoveSpeed;
};