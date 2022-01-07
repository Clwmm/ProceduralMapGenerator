#include <SFML/Graphics.hpp>
#include "Game.h"
#include <Windows.h>

int main()
{
	FreeConsole();
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Procedural Map Generator", sf::Style::Close | sf::Style::Titlebar);
	window.setVerticalSyncEnabled(false);
	Game *game = new Game(window);
	while (true)
	{
		game->start();
		if (!game->restart)
			break;
	}
	return 0;
}