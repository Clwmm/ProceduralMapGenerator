#include "Game.h"
#include "MapGenerator.h"

Game::Game(sf::RenderWindow& _window)
{
	window = &_window;
}

void Game::start()
{
	sf::View view(sf::Vector2f(0, 0), sf::Vector2f(window->getSize().x,window->getSize().y));
	sf::Event event;

	MapGenerator *map = new MapGenerator;

	window->setFramerateLimit(240);

	while (window->isOpen())
	{
		deltaTime = clock.restart().asSeconds();

		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window->close();
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape)
				{
					window->close();
					break;
				}
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
			view.move(0, -speed * deltaTime);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
			view.move(0, speed * deltaTime);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
			view.move(speed * deltaTime, 0);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
			view.move(-speed * deltaTime, 0);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E))
			view.zoom(1.01);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
			view.zoom(0.99);

		window->clear();
		window->setView(view);
		map->draw(*window);
		window->display();
	}
}
