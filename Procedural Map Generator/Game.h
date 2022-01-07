#pragma once
#include <SFML/Graphics.hpp>

class Game
{
private:
	sf::RenderWindow* window;
private:
	short speed = 1000;
	float deltaTime = 0;
	sf::Clock clock;
public:
	Game(sf::RenderWindow& _window);
	void start();
};

