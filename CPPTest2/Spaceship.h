#pragma once
#include "CoreEnums.h"
#include "stdafx.h"

class Spaceship
{
public:
	Spaceship();
	Spaceship(int _placeCount, int _mass, int _driverCount, int _gunPoints, Size _shipClass) { placeCount = _placeCount; mass = _mass; driverCount = _driverCount; gunPoints = _gunPoints; shipClass = _shipClass; }
	~Spaceship();

	Spaceship(Spaceship &other) { this->placeCount = other.driverCount; this->mass = other.mass; this->driverCount = other.driverCount; this->gunPoints = other.gunPoints; this->shipClass = other.shipClass; }
private:
	int placeCount;		// сколько в корабль вообще помещается существ
	int mass;			// Собственно, масса
	int driverCount;	// количество движков. На самом деле это неправтльно, и здесь должны быть сами движки в своих "гнездах". Или вообще нет.
	int gunPoints;
	Size shipClass;		// это значит буквально - класс корабля, т.е. фрегат это, эсминец, крейсер или линкор. Ну, или шлюпка спасательная.

};

