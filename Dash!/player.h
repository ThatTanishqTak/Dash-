// This file contains everything that has to do with the "Player"

#pragma once

#include "raylib.h"

class Game;

class Player
{
public:
	Player(Game* game);
	~Player();

	Vector2 playerPos;
	Vector2 speed;

	void update();
	void render();

private:
	Game* game_obj;

	void initVariables();
	void initTextures();

	void unload();
};