#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
class MapGenerator
{
private:
	unsigned short roomSizeFrom = 700;
	unsigned short roomSizeTo = 900;

	unsigned short distanceBetween = 150;

	unsigned short moveRandomRoom = 75;
	// Must be less than roomSizeFrom

	int noOfRooms = 250;

	int randomBefore;
	unsigned char chose;
	int moveX, moveY;
	sf::Vector2f beforeHalfSize, thisHalfSize, beforePosition, thisPosition;
	sf::Vector2f position_before, sizeBefore;
	int randWidthRoom, randHeightRoom;
private:
	int fromRandom(int a, int b);
	bool checkCollision(sf::Vector2f beforePosition, sf::Vector2f beforeHalfSize, sf::Vector2f thisPosition, sf::Vector2f thisHalfSize);
public:
	std::vector<sf::RectangleShape*> rooms;
	MapGenerator();
	~MapGenerator();
	void draw(sf::RenderWindow& window);
};

