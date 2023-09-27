// This the file to contain the definations of the player class

#ifndef PLAYER_H
#define PLAYER_H

#include "globals.h"
#include "raylib.h"

class Player : public GameObject
{
public:
	Player();

	virtual void update();
	virtual void render();
};

#endif