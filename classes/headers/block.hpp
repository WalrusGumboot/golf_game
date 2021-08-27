#include <SFML/Graphics.hpp>

#ifndef BLOCK
#define BLOCK

class Block {
	public:
		int x;
		int y;

		int w;
		int h;

		sf::RectangleShape shape;

		Block(int, int, int, int);
		void update(int);
		void draw(sf::RenderWindow&);

};

#endif
