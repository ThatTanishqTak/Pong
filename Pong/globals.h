/* This is the file which contains all the global variables
 **NOTE TO SELF**: CLEAN THIS AFTER YOU ARE DONE */

#ifndef GLOBALS_H
#define GLOBALS_H

#include "gameobject.h"
#include <list>

extern std::list<GameObject*> gameObjects;

extern const int windowWidth;
extern const int windowHeight;

#endif