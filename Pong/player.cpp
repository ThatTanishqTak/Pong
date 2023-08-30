#include "player.h"

Player::Player() { initVariables(); }

void Player::update()
{
	if (IsKeyDown(KEY_W)) { playerPos.y -= playerMoveSpeed * GetFrameTime(); }
	if (IsKeyDown(KEY_S)) { playerPos.y += playerMoveSpeed * GetFrameTime(); }

	if (playerPos.y <= 0.0f) { playerPos.y = 0.0f; }
	if (playerPos.y + playerSize.y >= 720.0f) { playerPos.y = 720.0f - playerSize.y; }
}

void Player::render() { DrawRectangle(static_cast<int>(playerPos.x), static_cast<int>(playerPos.y), static_cast<int>(playerSize.x), static_cast<int>(playerSize.y), WHITE); }

void Player::initVariables()
{
	playerSize = { 10.0f, 100.0f };
	playerPos = { 5.0f, 360.0f - playerSize.y / 2.0f };
	playerMoveSpeed = 550.0f;
}