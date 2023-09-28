// This is the file to have the declaration of the background class

#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "globals.h"
#include "raylib.h"

class Background : public GameObject
{
public:
	Background();

	virtual void update();
	virtual void render();

private:
	Texture2D background;
};

#endif