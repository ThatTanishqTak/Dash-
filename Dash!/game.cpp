// This file contains the definations of all the member variables and methods of the class "Game"

#include "game.h"

Game::Game()
{
	ply_obj = new Player(this);

	// The constructor where the initialization functions will be called
	initVariables();
	initTextures();
	initScreen();
}

Game::~Game()
{
	// The destructor where the memory management happens
	unload();
	CloseWindow();
}

void Game::Run()
{
	// The main game loop
	while (!WindowShouldClose())
	{
		update();
		render();
	}
}

void Game::update()
{
	// Call all the "update()" functions here
	ply_obj->update();
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	// Call all the "render()" functions here
	ply_obj->render();

	EndDrawing();
}

void Game::initVariables()
{
	// Initialize the window dimensions
	windowWidth = 1080;
	windowHeight = 720;

	// Call all the "initVariables()" functions here
}

void Game::initTextures()
{
	// Call all the "initTextures()" functions here
}

void Game::initScreen()
{
	// Initialize the screen
	InitWindow(windowWidth, windowHeight, "Dash!");
	SetTargetFPS(60);
}

void Game::unload()
{
	// Do all the memory management here
	delete ply_obj;
}