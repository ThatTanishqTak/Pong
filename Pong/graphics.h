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

	int playerScore, oppoScore;

	int getScore(int playerScore, int oppoScore);

private:
	Texture2D background;

	void initTextures();
	void initVariables();

	void unload();
};