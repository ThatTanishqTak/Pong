// This file has the functionality of the Background class

#include "background.h"

Background::Background()
{
	gameObjects.push_back(this); // Adding the Background class into the game-objects list

	background = LoadTexture("Textures/background.png"); // Loading the texture
}

Background::~Background() { UnloadTexture(background); } // Clearing the memory

void Background::render() { DrawTexture(background, 0, 0, WHITE); } // Rendring the background

void Background::update() { /*This is empty*/ }