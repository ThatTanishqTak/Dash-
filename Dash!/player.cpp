#include "player.h"
#include "game.h"

Player::Player(Game* game)
{
	game_obj = game;

	initVariables();
	initTextures();
}

Player::~Player()
{
	unload();
}

void Player::update()
{
	// Move the player
	if (IsKeyDown(KEY_W))
		playerPos.y -= speed.y;
	else if (IsKeyDown(KEY_S))
		playerPos.y += speed.y;
	if (IsKeyDown(KEY_A))
		playerPos.x -= speed.x;
	else if (IsKeyDown(KEY_D))
		playerPos.x += speed.x;

	// Check collision
	if (playerPos.x <= 0)
		playerPos.x = 0;
	if (playerPos.x + 50.0f >= game_obj->windowWidth)
		playerPos.x = game_obj->windowWidth - 50.0f;
	if (playerPos.y <= 0)
		playerPos.y = 0;
	if (playerPos.y + 100.0f >= game_obj->windowHeight)
		playerPos.y = game_obj->windowHeight - 100.0f;
}

void Player::render()
{
	DrawRectangle(playerPos.x, playerPos.y, 50.0f, 100.0f, GREEN);
}

void Player::initVariables()
{
	playerPos = { 10.0f, static_cast<float>(game_obj->windowHeight) };
	speed = { 10.0f, 10.0f };
}

void Player::initTextures()
{

}

void Player::unload()
{
	delete game_obj;
}