#pragma once

#include "raylib.h"
#include <iostream>
#include <sstream>

class Score
{
public:
	Score();

	void render();
	
	int updatePlayerScore();
	int updateOpponentScore();

private:
	void initVariables();

	int playerScore, opponentScore;
};