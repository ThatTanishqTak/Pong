// This file contains the definition of the Ball class

#include "ball.h"

Ball::Ball() { gameObjects.push_back(this); } // Adding the Ball class into the game-objects list

void Ball::update()
{
	if (IsKeyPressed(KEY_SPACE)) { startGame = true; } // Start the game

	if(startGame)
	{
		// Ball moment mechanic
		ballPos.x += ballSpeed.x * GetFrameTime();
		ballPos.y += ballSpeed.y * GetFrameTime();

		// Ball bounce mechanic
		if (ballPos.y - radius <= 0.0f || ballPos.y + radius >= windowHeight)
		{ 
			ballSpeed.y *= -1; 
		}

		// Ball-paddle collision mechanic
		if (CheckCollisionCircleRec({ ballPos.x, ballPos.y }, radius, playerRect) ||
			CheckCollisionCircleRec({ ballPos.x, ballPos.y }, radius, opponentRect))
		{
			ballSpeed.x *= -1;
			ballSpeed.x += (ballSpeed.x < 0) ? -25.0f : 25.0f;
		}
	}

	// Score update and game restart mechanic
	if (ballPos.x - radius <= 0.0f || ballPos.x + radius >= windowWidth)
	{
		// Update the score
		if (ballPos.x - radius <= 0.0f) { scoreOpponent++; }
		else { scorePlayer++; }

		startGame = false; // Ends the game
		
		ballPos = { windowWidth / 2.0f, windowHeight / 2.0f }; // Set to default ball position 
		
		// Reverse the ball direction
		ballSpeed.x = 350.0f * (ballPos.x - radius <= 0.0f ? -1 : 1);
		ballSpeed.y = 350.0f * (ballPos.y - radius <= 0.0f ? -1 : 1);

		// Reset the paddle position
		playerRect.y = (windowHeight - playerRect.height) / 2.0f;
		opponentRect.y = (windowHeight - opponentRect.height) / 2.0f;
	}
}

void Ball::render()
{ 
	DrawCircle(static_cast<int>(ballPos.x), static_cast<int>(ballPos.y), radius, WHITE); // Render the ball

	DrawText(std::to_string(scorePlayer).c_str(), static_cast<int>(windowWidth / 4.0f), 0, 44, RED); // Player score
	DrawText(std::to_string(scoreOpponent).c_str(), static_cast<int>((3.0f / 4.0f) * windowWidth), 0, 44, RED); // Opponent Score
}