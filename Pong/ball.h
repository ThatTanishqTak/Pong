// This file is the declaration of the Ball class

#ifndef BALL_H
#define BALL_H

#include "globals.h"
#include "raylib.h"
#include <string>

class Ball : public GameObject
{
public:
	Ball();

	virtual void update();
	virtual void render();
};

#endif