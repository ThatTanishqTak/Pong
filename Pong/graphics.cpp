#include "graphics.h"

Graphics::Graphics() 
{ 
	initTextures();
	initVariables();
}

Graphics::~Graphics() { unload(); }

void Graphics::render() 
{ 
	DrawTexture(background, 0, 0, WHITE);
	DrawText((std::to_string(playerScore)).c_str(), 295, 0, 50, BLUE);
	DrawText((std::to_string(oppoScore)).c_str(), 785, 0, 50, GREEN);
}

void Graphics::initTextures() { background = LoadTexture("Textures/background.png"); }

void Graphics::initVariables()
{
	playerScore = 0;
	oppoScore = 0;
}

void Graphics::unload() { UnloadTexture(background); }