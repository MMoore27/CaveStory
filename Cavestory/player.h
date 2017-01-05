#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "animatedsprite.h"
#include "globals.h"

class Graphics;

class Player :public AnimatedSprite {
public:
	Player();
	Player(Graphics &graphics, Vector2 spawnPoint);
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	//move the player left by -dx
	void moveLeft();
	//move the player right by dx
	void moveRight();
	//Stops moving the player
	void stopMoving();
	
	//see animatedSprite
	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();

	void handleTileCollisions(std::vector<Rectangle> &others);

	const float getX() const;
	const float getY() const;

private:
	float _dx, _dy;

	Direction _facing;
	bool _grounded;
};
#endif