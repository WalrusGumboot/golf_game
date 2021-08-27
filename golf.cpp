#include "classes/impl/block.cpp"
#include "classes/impl/level.cpp"

int main() {
	int frame = 0;

	RenderWindow rw(VideoMode(350, 550), "GOLF");
	rw.setFramerateLimit(25);
	rw.setVerticalSyncEnabled(true);

	Level l(0, rw, LevelType::Enclosed);

	while (rw.isOpen()) {
		Event e;
		while (rw.pollEvent(e)) {
			if (e.type == Event::Closed) {rw.close();}
		}

		rw.clear(Color(30, 50, 120));
		l.draw(rw);
		rw.display();

		frame++;
	}
}
