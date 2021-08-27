#include "../headers/block.hpp"
using namespace sf;

Block::Block(int _x, int _y, int _w, int _h) {
	x = _x;
	y = _y;
	w = _w;
	h = _h;

	shape = RectangleShape(Vector2f((float) w, (float) h));
	shape.setPosition((float) x, (float) y);
	shape.setFillColor(Color(200, 210, 255));
}

void Block::update(int frame) {
	// this function intentionally left blank
}

void Block::draw(RenderWindow& rw) {
	rw.draw(shape);
}
