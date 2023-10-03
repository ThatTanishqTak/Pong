/* This is the file which contains all the global variables
 **NOTE TO SELF**: CLEAN THIS AFTER YOU ARE DONE */

#ifndef GLOBALS_H
#define GLOBALS_H

#include "gameobject.h"
#include "raylib.h"
#include <list>

extern std::list<GameObject*> gameObjects; // Define the list which will contain all the update() and render()

// Define window dimension
extern int windowWidth;
extern int windowHeight;

// Game variables
extern bool startGame;

// Player variables
extern const float playerWidth;
extern const float playerHeight;
extern const float playerSpeed;
extern Vector2 playerPos;
extern Rectangle playerRect;

// Opponent variables
extern const float opponentWidth;
extern const float opponentHeight;
extern const float opponentSpeed;
extern const float range;
extern Vector2 opponentPos;
extern Rectangle opponentRect;

// Ball variables
extern Vector2 ballPos;
extern Vector2 ballSpeed;
extern const float radius;

// Score variables
extern int scorePlayer;
extern int scoreOpponent;

extern Sound sound;

#endif