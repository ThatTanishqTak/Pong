#include "score.h"

Score::Score() 
{ 
	initVariables();

	ball_scor_obj = new Ball();
}

Score::~Score() { unload(); }

void Score::update()
{
	updatePlayerScore();
	updateOpponentScore();
}

void Score::render()
{
	DrawText((std::to_string(playerScore)).c_str(), 295, 0, 50, BLUE);
	DrawText((std::to_string(opponentScore)).c_str(), 785, 0, 50, GREEN);
}

void Score::initVariables()
{
	playerScore = 0;
	opponentScore = 0;
}

void Score::updatePlayerScore() { if (ball_scor_obj->ballPos.x + ball_scor_obj->radius >= 1080) { playerScore++; } }

void Score::updateOpponentScore() { if (ball_scor_obj->ballPos.x - ball_scor_obj->radius <= 0) { opponentScore++; } }

void Score::unload() { delete ball_scor_obj; }