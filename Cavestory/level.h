#pragma once
#ifndef LEVEL_H
#define LEVEL_H
#include <string>
#include <vector>
#include "globals.h"
#include "tile.h"

struct SDL_Rect;
struct Tileset;


class Graphics;
struct SDL_Texture;

class Level {
public:
	Level();
	Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics);
	~Level();
	void update(int elapsedTime);
	void draw(Graphics &graphics);
private:
	std::string _mapName;
	Vector2 _spawnPoint;
	Vector2 _size;
	Vector2 _tileSize;

	SDL_Texture* _backgroundTexture;

	std::vector<Tile> _tileList;
	std::vector<Tileset> _tilesets;

	
	//Loads a map
	void loadMap(std::string mapNAme, Graphics &graphics);


};

//Tileset structure
struct Tileset {
	SDL_Texture* Texture;
	int FirstGid;
	Tileset() {
		this->FirstGid = -1;
	}
	Tileset(SDL_Texture* texture, int firstGid) {
		this->Texture = texture;
		this->FirstGid = firstGid;
	}
};

#endif // !LEVEL_H

