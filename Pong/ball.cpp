#include "ball.h"

Ball::Ball()
{
	initVariables();

	grap_ball_obj = new Graphics();
	play_ball_obj = new Player();
}

Ball::~Ball() { unload(); }

void Ball::update()
{
	ballPos.x += ballMoveSpeed.x * GetFrameTime();
	ballPos.y += ballMoveSpeed.y * GetFrameTime();

	if (ballPos.x + radius >= 1080.0f) { grap_ball_obj->getScore(grap_ball_obj->playerScore++, grap_ball_obj->oppoScore); }
	if (ballPos.x - radius <= 0.0f) { grap_ball_obj->getScore(grap_ball_obj->playerScore, grap_ball_obj->oppoScore++); }
	if (ballPos.y + radius >= 720.0f) { ballMoveSpeed.y *= -1.0f; }
	if (ballPos.y - radius <= 0.0f) { ballMoveSpeed.y *= -1.0f; }
}

void Ball::render() { DrawCircle(static_cast<int>(ballPos.x), static_cast<int>(ballPos.y), radius, WHITE); }

void Ball::initVariables()
{
	radius = 20.0f;
	ballMoveSpeed = { -500.0f, 0.0f };
	ballPos = { 540.0f, 360.0f };
}

void Ball::unload()
{
	delete grap_ball_obj;
	delete play_ball_obj;
}