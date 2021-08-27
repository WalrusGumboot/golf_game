#include "block.hpp"
#include <vector>


#ifndef LEVEL
#define LEVEL

// bits represent: top, right, bottom, left wall.

enum LevelType {
	Enclosed = 0b1111, // all four walls
	Chute    = 0b0101, // side walls
	Room     = 0b1010, // top and bottom walls
	Can      = 0b0111, // all but the top walls
	Open     = 0b0000  // no walls
};

class Level {
	public:
		static const int wallSize;

		std::vector<Block> blocks;
		int id;

		Level(int, RenderWindow&, LevelType);
		
		void addBlock(Block);
		void update(int);
		void draw(sf::RenderWindow&);
};

#endif
