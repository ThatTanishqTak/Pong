#include "ball.h"

Ball::Ball() 
{
	initVariables(); 

	score_ball_obj = new Score();
}

void Ball::update()
{
	ballPos.x += ballSpeed.x * GetFrameTime();
	ballPos.y += ballSpeed.y * GetFrameTime();

	if (ballPos.y - radius <= 0.0f) { ballSpeed.y *= -1.0f; }
	if (ballPos.y + radius >= 720.0f) { ballSpeed.y *= -1.0f; }
	if (ballPos.x - radius <= 0.0f) { score_ball_obj->updateOpponentScore(); }
	if (ballPos.x + radius >= 1080.0f) { score_ball_obj->updatePlayerScore(); }
}

void Ball::render() { DrawCircle(static_cast<int>(ballPos.x), static_cast<int>(ballPos.y), radius, WHITE); }

void Ball::initVariables()
{
	radius = 15.0f;
	ballPos = { 540.0f, 360.0f };
	ballSpeed = { 450.0f, 450.0f };
}