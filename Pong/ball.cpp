// This file contains the definition of the Ball class

#include "ball.h"

Ball::Ball() { gameObjects.push_back(this); } // Adding the Ball class into the game-objects list

void Ball::update()
{
	// Ball moment mechanic
	ballPos.x += ballSpeed.x * GetFrameTime();
	ballPos.y += ballSpeed.y * GetFrameTime();

	// Ball bounce mechanic
	if (ballPos.y - radius <= 0.0f) { ballSpeed.y *= -1; }
	if (ballPos.y + radius >= windowHeight) { ballSpeed.y *= -1; }

	// Ball-paddle collision mechanic
	if (CheckCollisionCircleRec({ ballPos.x, ballPos.y }, radius, playerRect) ||
		CheckCollisionCircleRec({ ballPos.x, ballPos.y }, radius, opponentRect))
	{ 
		ballSpeed.x *= -1;
		if (ballSpeed.x < 0) { ballSpeed.x -= 25.0f; }

		ballSpeed.x += 25.0f;
	}

	// Score update mechanic
	if (ballPos.x - radius <= 0.0f)
	{ 
		scoreOpponent++;
		ballPos = { windowWidth / 2.0f, windowHeight / 2.0f };
		ballSpeed.x *= -1;
		ballSpeed.x = 350.0f;
	}
	if (ballPos.x + radius >= windowWidth)
	{ 
		scorePlayer++;
		ballPos = { windowWidth / 2.0f, windowHeight / 2.0f };
		ballSpeed.x *= -1;
		ballSpeed.x = 350.0f;
	}
}

void Ball::render()
{ 
	DrawCircle(static_cast<int>(ballPos.x), static_cast<int>(ballPos.y), radius, WHITE); // Render the ball

	DrawText(std::to_string(scorePlayer).c_str(), static_cast<int>(windowWidth / 4.0f), 0, 44, RED); // Player score
	DrawText(std::to_string(scoreOpponent).c_str(), static_cast<int>((3.0f / 4.0f) * windowWidth), 0, 44, RED); // Opponent Score
}