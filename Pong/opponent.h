#ifndef OPPONENT_H
#define OPPONENT_H

#include "globals.h"
#include "raylib.h"

class Opponent : public GameObject
{
public:
	Opponent();

	virtual void update();
	virtual void render();
};

#endif