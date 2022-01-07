#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Procedural Map Generator", sf::Style::Close | sf::Style::Titlebar);
	window.setVerticalSyncEnabled(false);
	window.setFramerateLimit(240);
	Game *game = new Game(window);
	game->start();
	return 0;
}