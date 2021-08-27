#include "level.hpp"

#ifndef BALL
#define BALL

class Ball {
	public:
		static const int   radius;
		static const float maxVel;
		static const float friction;

		sf::Vector2f vel;
		sf::CircleShape shape;
		Level level;

		Ball(int, int, Level);
		void launch(sf::Vector2f);
		void update();
		void draw(RenderWindow&);
};

#endif
