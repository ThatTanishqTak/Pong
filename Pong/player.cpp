#include "player.h"

Player::Player() { initVariables(); }

void Player::update()
{
	if (IsKeyDown(KEY_W)) { playerOnePos.y -= playerMoveSpeed * GetFrameTime(); }
	if (IsKeyDown(KEY_S)) { playerOnePos.y += playerMoveSpeed * GetFrameTime(); }

	if (IsKeyDown(KEY_UP)) { playerTwoPos.y -= playerMoveSpeed * GetFrameTime(); }
	if (IsKeyDown(KEY_DOWN)) { playerTwoPos.y += playerMoveSpeed * GetFrameTime(); }

	if (playerOnePos.y <= 0.0f) { playerOnePos.y = 0.0f; }
	if (playerOnePos.y + playerOneSize.y >= 720.0f) { playerOnePos.y = 720.0f - playerOneSize.y; }

	if (playerTwoPos.y <= 0.0f) { playerTwoPos.y = 0.0f; }
	if (playerTwoPos.y + playerTwoSize.y >= 720.0f) { playerTwoPos.y = 720.0f - playerTwoSize.y; }
}

void Player::render() { DrawRectangle(static_cast<int>(playerOnePos.x), static_cast<int>(playerOnePos.y), 
							static_cast<int>(playerOneSize.x), static_cast<int>(playerOneSize.y), WHITE);

						DrawRectangle(static_cast<int>(playerTwoPos.x), static_cast<int>(playerTwoPos.y),
							static_cast<int>(playerTwoSize.x), static_cast<int>(playerTwoSize.y), WHITE);
					  }

void Player::initVariables()
{
	playerOneSize = { 10.0f, 100.0f };
	playerOnePos = { 5.0f, 360.0f - playerOneSize.y / 2.0f };

	playerTwoSize = { 10.0f, 100.0f };
	playerTwoPos = { 1065.0f, 360.0f - playerTwoSize.y / 2.0f };

	playerMoveSpeed = 550.0f;
}