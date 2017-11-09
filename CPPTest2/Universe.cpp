#include "stdafx.h"
#include "Universe.h"

Planet::Planet()
{
	random_device rd;
	mt19937 random(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом
	Size = random() % 4;
}
Planet::~Planet()
{
}
Star::Star(double _x, double _y, int _planetCount)
{
	random_device rd;
	mt19937 random(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом

	Planets.clear();
	x = _x;
	y = _y;
	for (int i = 0; i < _planetCount; i++) {
		Planets.push_back(Planet());
	}
}
Star::~Star()
{
}
Universe::Universe(int _starCount, int _xSize, int _ySize)
{
	random_device rd;
	mt19937 random(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом
	
	Stars.clear();

	int xSize = _xSize;
	int ySize = _ySize;
	for (int i = 0; i < _starCount; i++)
	{
		Stars.push_back(Star(random()% xSize, random() % ySize, random() % 5 + 2));
	}
}
Universe::~Universe()
{
}
