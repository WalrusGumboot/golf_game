#include "../headers/ball.hpp"
using namespace sf;

#include <math>

const int   Ball::radius   = 10;
const float Ball::maxVel   = 8.0f;
const float Ball::friction = 0.95;

Ball::Ball(int _x, int _y, Level _level) {
	vel   = Vector2f(0, 0);
	shape = CircleShape(radius);
	shape.setPosition(x, y);
	level = _level;
}

void Ball::launch(Vector2f dir) {
	float magnitude = sqrt(dir.x * dir.x + dir.y * dir.y);
}
