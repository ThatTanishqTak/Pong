// The main file

#include "globals.h" // This "HAS" TO BE AT THE TOP
#include "raylib.h"
#include "gameobject.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "PONG!"); // Initialize the window
	SetTargetFPS(60); // Lock the FPS 

	// The main game loop
	while (!WindowShouldClose())
	{
		// Update
		for (GameObject* gameObjects : gameObjects) { gameObjects->update(); }

		BeginDrawing();
		ClearBackground(BLACK);
		
		// Render
		for (GameObject* gameObjects : gameObjects) { gameObjects->render(); }
		
		EndDrawing();
	}

	CloseWindow(); // De-Initialize the window

	return 0; // Exit code
}