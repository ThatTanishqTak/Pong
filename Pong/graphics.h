#pragma once

#include "raylib.h"
#include <iostream>
#include <sstream>

class Graphics
{
public:
	Graphics();
	~Graphics();

	void render();
	void updatePlayerScore();
	void updateOppoScore();

private:
	Texture2D background;

	void initTextures();
	void initVariables();

	int playerScore, oppoScore;

	void unload();
};