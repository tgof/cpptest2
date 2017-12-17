#include "Spaceship.h"

Spaceship::Spaceship()
{
	random_device rd;
	mt19937 random(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом

	shipSize = Size(random() % Size::Size_count);
	int shipPartCount = shipSize;

	//начинаем считать длину основы корабля 
	int minSize = 2;
	int maxSize = 5;

	for (int i = 0; i <= shipPartCount; i++)
	{
		minSize = maxSize;
		maxSize *= 5;
	}
	//Собственно, длина
	int shipLen = (random() % (maxSize - minSize)) + minSize;
}


Spaceship::~Spaceship()
{
}
