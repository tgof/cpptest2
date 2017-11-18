#include "stdafx.h"
#include "Universe.h"

Planet::Planet()
{
	random_device rd;
	mt19937 random(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом

	planetSize = Size(random() % Size::Size_count);
}
Planet::~Planet()
{
}
Star::Star(int _x, int _y, int _planetCount)
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
		Star curStar(random() % xSize, random() % ySize, random() % 5 + 2);
		Stars.push_back(curStar);
	}
}
Universe::~Universe()
{
}
