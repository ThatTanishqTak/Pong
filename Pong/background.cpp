// This file has the functionality of the Background class

#include "background.h"

Background::Background() { gameObjects.push_back(this); } // Adding the Background class into the game-objects list

void Background::render()
{
	if (!startGame) { DrawText("PRESS SPACE TO START", 250, 200, 44, WHITE); } // Render the game-start screen

	DrawLine(windowWidth / 2, 0, windowWidth / 2, windowHeight, WHITE); // Render the half-line
}

void Background::update() { /*This is empty*/ }