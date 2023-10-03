// This file is the declaration of the Opponent class

#ifndef OPPONENT_H
#define OPPONENT_H

#include "globals.h"
#include "raylib.h"

class Opponent : public GameObject
{
public:
	Opponent();

	float range;
	float target;

	virtual void update();
	virtual void render();
};

#endif