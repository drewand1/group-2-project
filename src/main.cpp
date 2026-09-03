#include <SFML/Window.hpp>

int main() {
	sf::Window window(sf::VideoMode({640, 480}), "RAAAAAAH");
	window.setVerticalSyncEnabled(true);

	while (window.isOpen()) {
		while (const std::optional event = window.pollEvent()) {

			if (event->is<sf::Event::Closed>())
				window.close();
		}
	}

	return 0;
}