#include "ball.h"

Ball::Ball()
{
	initVariables();

	grap_ball_obj = new Graphics();
}

Ball::~Ball() { unload(); }

void Ball::update()
{
	ballPos.x += ballSpeed.x * GetFrameTime();
	ballPos.y += ballSpeed.y * GetFrameTime();

	if (ballPos.y - radius <= 0.0f) { ballSpeed.y *= -1.0f; }
	if (ballPos.y + radius >= 720.0f) { ballSpeed.y *= -1.0f; }
	if (ballPos.x - radius <= 0.0f) { grap_ball_obj->updateOppoScore(); }
	if (ballPos.x + radius >= 1080.0f) { grap_ball_obj->updatePlayerScore(); }
}

void Ball::render() { DrawCircle(static_cast<int>(ballPos.x), static_cast<int>(ballPos.y), radius, WHITE); }

void Ball::initVariables()
{
	radius = 15.0f;
	ballPos = { 540.0f, 360.0f };
	ballSpeed = { 100.0f, 100.0f };
}

void Ball::unload() { delete grap_ball_obj; }