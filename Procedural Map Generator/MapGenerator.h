#pragma once
#include <SFML/Graphics.hpp>
#include <list>
class MapGenerator
{
private:
	unsigned short roomSizeFrom = 260;
	unsigned short roomSizeTo = 1500;

	unsigned short moveRandomRoom = 250;
	// Must be less than roomSizeFrom

	char noOfRooms = 127;
	// Max No. of rooms = 127

	unsigned char randomBefore, chose;
	int moveX, moveY;
	sf::Vector2f beforeHalfSize, thisHalfSize, beforePosition, thisPosition;
	sf::Vector2f position_before, sizeBefore;
	int randWidthRoom, randHeightRoom;
	std::list<sf::RectangleShape*> rooms;
private:
	int fromRandom(int a, int b);
	bool checkCollision(sf::Vector2f beforePosition, sf::Vector2f beforeHalfSize, sf::Vector2f thisPosition, sf::Vector2f thisHalfSize);
public:
	MapGenerator();
	void draw(sf::RenderWindow& window);
};

