#include "player.h"
#include "graphics.h"

Player::Player(){}

Player::Player(Graphics &Graphics, float x, float y): 
	AnimatedSprite(graphics, "content/sprites/MyChar.png",0,0,16,16,x,y,100)
{
	graphics.loadImage("content/sprites/MyChar.png");
}