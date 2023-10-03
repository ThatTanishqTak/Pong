// The main game file

#include "globals.h" // This "HAS TO BE AT THE TOP"
#include "raylib.h"
#include "gameobject.h"
#include "background.h"
#include "player.h"
#include "opponent.h"
#include "ball.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "IMPOSSIBLE PONG!"); // Initialize the window
	InitAudioDevice(); // Initialize the audio
	SetMasterVolume(60.0f); // Lock the master volume
	SetTargetFPS(60); // Lock the FPS

	// Allocate memory to the objects
	Background background;
	Player player;
	Opponent opponent;
	Ball ball;

	// The main game loop
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);

		/* Update */ for (GameObject* gameObjects : gameObjects) { gameObjects->update(); }

		/* Render */ for (GameObject* gameObjects : gameObjects) { gameObjects->render(); }

		EndDrawing();
	}

	CloseAudioDevice(); // De-Initialize the audio
	CloseWindow(); // De-Initialize the window

	return 0; // Exit code
}