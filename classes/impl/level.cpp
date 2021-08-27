#include "../headers/level.hpp"
using namespace sf;

const int Level::wallSize = 10;

Level::Level(int _id, RenderWindow& rw, LevelType type) {
	id = _id;
	
	Vector2u size = rw.getSize();

	if (type & 0b1000) //top wall
		blocks.push_back(Block(0, 0, size.x, wallSize));
	if (type & 0b0100) //right wall
		blocks.push_back(Block(size.x - wallSize, 0, wallSize, size.y));
	if (type & 0b0010) //bottom wall
		blocks.push_back(Block(0, size.y - wallSize, size.x, wallSize));
	if (type & 0b0001) //left wall
		blocks.push_back(Block(0, 0, wallSize, size.y));
}

void Level::addBlock(Block b) {
	blocks.push_back(b);
}

void Level::update(int frame) {
	for (int i = 0; i < blocks.size(); i++) {
		blocks[i].update(frame);
	}
}

void Level::draw(RenderWindow& rw) {
	for (int i = 0; i < blocks.size(); i++) {
		blocks[i].draw(rw);
	}
}
