#include "opponent.h"

Opponent::Opponent() { gameObjects.push_back(this); }

void Opponent::update()
{
	// The most basic AI ever (It just follows the ball)
	if (ballPos.y < opponentRect.y - range) { opponentRect.y -= opponentSpeed * GetFrameTime(); }
	if (ballPos.y > opponentRect.y + range) { opponentRect.y += opponentSpeed * GetFrameTime(); }

	// Window collision check
	if (opponentRect.y <= 0) { opponentRect.y = 0; }
	if (opponentRect.y + opponentRect.height >= windowHeight) { opponentRect.y = windowHeight - opponentRect.height; }
}

void Opponent::render()
{
	// Render opponent
	DrawRectangle(static_cast<int>(opponentRect.x), static_cast<int>(opponentRect.y),
	static_cast<int>(opponentRect.width), static_cast<int>(opponentRect.height), WHITE);
}