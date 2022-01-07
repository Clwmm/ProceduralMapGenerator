#pragma once
#include <SFML/Graphics.hpp>
#include <list>
class MapGenerator
{
private:
	unsigned short moveRandomRoom = 175;
	unsigned short roomSizeFrom = 200;
	unsigned short roomSizeTo = 950;
	// Max No. of rooms = 127
	char noOfRooms = 127;
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

