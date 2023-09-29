// This file contains the definition of the Player class

#include "player.h"

Player::Player() { gameObjects.push_back(this); } // Adding the Player class into the game-objects list

void Player::update()
{
	if (startGame)
	{
		// Player moment mechanics
		if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) { playerRect.y -= playerSpeed * GetFrameTime(); }
		if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) { playerRect.y += playerSpeed * GetFrameTime(); }

		// Player window collision
		if (playerRect.y <= 0) { playerRect.y = 0; }
		if (playerRect.y + playerRect.height >= windowHeight) { playerRect.y = windowHeight - playerRect.height; }
	}
}

void Player::render()
{
	// Render player
	DrawRectangle(static_cast<int>(playerRect.x), static_cast<int>(playerRect.y),
		static_cast<int>(playerRect.width), static_cast<int>(playerRect.height), WHITE);
}