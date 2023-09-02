#pragma once

#include "raylib.h"

class Graphics
{
public:
	Graphics();
	~Graphics();

	void render();

	int playerScore, oppoScore;

private:
	Texture2D background;

	void initTextures();
	void initVariables();

	void unload();
};