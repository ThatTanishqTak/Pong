#include "score.h"

Score::Score() { initVariables(); }

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

int Score::updatePlayerScore() { return playerScore++; }

int Score::updateOpponentScore() { return opponentScore++; }