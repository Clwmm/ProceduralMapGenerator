#include "MapGenerator.h"
#include <SFML/Graphics.hpp>
#include <ctime>

int MapGenerator::fromRandom(int a, int b)
{
	int c = (rand() % (b - a + 1)) + a;
	return c;
}

bool MapGenerator::checkCollision(sf::Vector2f beforePosition, sf::Vector2f beforeHalfSize, sf::Vector2f thisPosition, sf::Vector2f thisHalfSize)
{
	float deltaX = beforePosition.x - thisPosition.x;
	float deltaY = beforePosition.y - thisPosition.y;

	float intersectX = abs(deltaX) - (beforeHalfSize.x + thisHalfSize.x);
	float intersectY = abs(deltaY) - (beforeHalfSize.y + thisHalfSize.y);

	if (intersectX < 0.0f && intersectY < 0.0f)
		return true;

	return false;
}

MapGenerator::MapGenerator()
{
	srand(time(0));

	for (int i = 0; i < noOfRooms; i++)
	{
		randWidthRoom = fromRandom(roomSizeFrom, roomSizeTo);
		randHeightRoom = fromRandom(roomSizeFrom, roomSizeTo);

		sf::RectangleShape *a = new sf::RectangleShape;
		a->setSize(sf::Vector2f(randWidthRoom, randHeightRoom));
		a->setOrigin(randWidthRoom / 2, randHeightRoom / 2);

		switch (i)
		{
		case 0:
			a->setFillColor(sf::Color::White);
			a->setPosition(0, 0);
			rooms.push_back(a);
			break;
		default:
			randomBefore = rand() % i;
			int b = 0;
			for (auto c : rooms)
			{
				if (b == randomBefore)
				{
					position_before = c->getPosition();
					sizeBefore = c->getSize();
					break;
				}
				b++;
			}
			a->setFillColor(sf::Color(fromRandom(0, 255), fromRandom(0, 255), fromRandom(0, 255)));
			a->setPosition(position_before);

			chose = rand() % 4;
			switch (chose)
			{
			case 0:
				moveX = fromRandom((-0.5 * sizeBefore.x) - (0.5 * randWidthRoom) + moveRandomRoom, (0.5 * sizeBefore.x) + (0.5 * randWidthRoom) - moveRandomRoom);
				moveY = -0.5 * (sizeBefore.y + randHeightRoom);
				break;
			case 1:
				moveX = -0.5 * (sizeBefore.x + randWidthRoom);
				moveY = fromRandom((-0.5 * sizeBefore.y) - (0.5 * randHeightRoom) + moveRandomRoom, (0.5 * sizeBefore.y) + (0.5 * randHeightRoom) - moveRandomRoom);
				break;
			case 2:
				moveX = fromRandom((-0.5 * sizeBefore.x) - (0.5 * randWidthRoom) + moveRandomRoom, (0.5 * sizeBefore.x) + (0.5 * randWidthRoom) - moveRandomRoom);
				moveY = 0.5 * (sizeBefore.y + randHeightRoom);
				break;
			case 3:
				moveX = 0.5 * (sizeBefore.x + randWidthRoom);
				moveY = fromRandom((-0.5 * sizeBefore.y) - (0.5 * randHeightRoom) + moveRandomRoom, (0.5 * sizeBefore.y) + (0.5 * randHeightRoom) - moveRandomRoom);
				break;
			}
			a->move(moveX, moveY);
			
			thisHalfSize = a->getSize() / 2.0f;
			thisPosition = a->getPosition();
			char d = 0;
			for (auto c : rooms)
			{
				beforeHalfSize = c->getSize() / 2.0f;
				beforePosition = c->getPosition();
				if (checkCollision(beforePosition, beforeHalfSize, thisPosition, thisHalfSize))
				{
					i--;
					d = 1;
					delete a;
					break;
				}
			}
			if (d == 1)
				break;
			rooms.push_back(a);
		}
	}
}

void MapGenerator::draw(sf::RenderWindow& window)
{
	for (auto i : rooms) window.draw(*i);
}
