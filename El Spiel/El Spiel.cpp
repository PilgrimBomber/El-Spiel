// El Spiel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "raylib.h"
#include "El Spiel.h"




int main()
{
    
	InitWindow(500, 500, "El Spiel");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
}
