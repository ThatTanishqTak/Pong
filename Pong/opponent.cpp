#include "opponent.h"

Opponent::Opponent() { gameObjects.push_back(this); }

void Opponent::update()
{
	// The most basic AI ever (It just follows the ball)
	if(startGame)
	{
		target = ballPos.y - opponentRect.height / 2.0f;
		range = target - opponentRect.y;

		if (opponentRect.y > target) { opponentRect.y -= opponentSpeed * 1.0f * GetFrameTime(); }
		else if (opponentRect.y < target) { opponentRect.y += opponentSpeed * GetFrameTime(); }

		// Window collision check
		if (opponentRect.y <= 0) { opponentRect.y = 0; }
		if (opponentRect.y + opponentRect.height >= windowHeight) { opponentRect.y = windowHeight - opponentRect.height; }
	}
}

void Opponent::render()
{
	// Render opponent
	DrawRectangle(static_cast<int>(opponentRect.x), static_cast<int>(opponentRect.y),
	static_cast<int>(opponentRect.width), static_cast<int>(opponentRect.height), WHITE);
}