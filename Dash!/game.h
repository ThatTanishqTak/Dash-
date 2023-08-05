// This file contains all the declration of the important member variables and methods of the class "Game"

#pragma once // The header file is included just once

#include "raylib.h"
#include "player.h"

class Player;

class Game // The class that handles it all
{
public:
	Game(); // The constructor
	~Game(); // The destructor

	void Run(); // The "Run" function

	int windowWidth, windowHeight; // The window dimensions

	// The funtions that will run during the main loop
	void update(); 
	void render();

private:
	// The functions that will be called just once inside the constructor
	Player* ply_obj;

	void initVariables();
	void initTextures();
	void initScreen();

	// This is the function that will be called inside the destructor when the game is closed
	void unload();
};