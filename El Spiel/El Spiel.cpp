// El Spiel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "raylib.h"
#include "El Spiel.h"




int main()
{
	InitWindow(500, 500, "El Spiel");
	int screenHeight = GetMonitorHeight(0);
	int screenWidth = GetMonitorWidth(0);
	SetWindowSize(screenWidth, screenHeight);
	//ToggleFullscreen();
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("El Spiel, Alla!", 100, 100, 20, BLACK);
		EndDrawing();
	}

	CloseWindow();
}
