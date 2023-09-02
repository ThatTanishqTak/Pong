#pragma once

#include "raylib.h"
#include "ball.h"
#include <iostream>
#include <sstream>

class Score
{
public:
	Score();
	~Score();

	void update();
	void render();

private:
	Ball* ball_scor_obj;

	void initVariables();

	int playerScore, opponentScore;

	void updatePlayerScore();
	void updateOpponentScore();

	void unload();
};