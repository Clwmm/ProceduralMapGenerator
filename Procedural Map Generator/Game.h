#pragma once
#include <SFML/Graphics.hpp>

class Game
{
private:
	sf::RenderWindow* window;
private:
	short speed = 5000;
	float deltaTime = 0;
	sf::Clock clock;
public:
	bool restart = false;
	Game(sf::RenderWindow& _window);
	void start();
};

