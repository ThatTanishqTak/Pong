// This file has the definations of all the global variables

#include "globals.h"
#include "raylib.h"

std::list<GameObject*> gameObjects;

int windowWidth = 1080;
int windowHeight = 720;

bool startGame = false;

const float playerWidth = 10.0f;
const float playerHeight = 100.0f;
const float playerSpeed = 700.0f;
Vector2 playerPos = { 10.0f, (windowHeight - playerHeight) / 2.0f };
Rectangle playerRect = { playerPos.x, playerPos.y, playerWidth, playerHeight };

const float opponentWidth = 10.0f;
const float opponentHeight = 100.0f;
const float opponentSpeed = 700.0f;
Vector2 opponentPos = { windowWidth - 20.0f, (windowHeight - opponentHeight) / 2.0f };
Rectangle opponentRect = { opponentPos.x, opponentPos.y, opponentWidth, opponentHeight };

Vector2 ballPos = { windowWidth / 2.0f, windowHeight / 2.0f };
Vector2 ballSpeed = { -350.0f, -350.0f };
const float radius = 15.0f;

int scorePlayer = 0;
int scoreOpponent = 0;