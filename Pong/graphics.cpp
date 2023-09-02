#include "graphics.h"

Graphics::Graphics() 
{ 
	initTextures();
	initVariables();
}

Graphics::~Graphics() { unload(); }

void Graphics::render() { DrawTexture(background, 0, 0, WHITE); }

void Graphics::initTextures() { background = LoadTexture("Textures/background.png"); }

void Graphics::initVariables()
{
	playerScore = 0;
	oppoScore = 0;
}

void Graphics::unload() { UnloadTexture(background); }