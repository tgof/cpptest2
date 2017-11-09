#pragma once

#include "stdafx.h"

class Spaceship
{
public:
	Spaceship();
	Spaceship(int _placeCount, int _mass, int _driverCount, int _gunPoints, int _shipClass) { placeCount = _placeCount; mass = _mass; driverCount = _driverCount; gunPoints = _gunPoints; shipClass = _shipClass; }
	~Spaceship();

	Spaceship(Spaceship &other) {
		this->placeCount = other.driverCount;
		this->mass = other.mass;
		this->driverCount = other.driverCount;
		this->gunPoints = other.gunPoints;
		this->shipClass = other.shipClass;
	}
private:
	int placeCount;		// сколько в корабль вообще помещается существ
	int mass;
	int driverCount;
	int gunPoints;
	int shipClass;		// это значит буквально - класс корабля, т.е. фрегат это, эсминец, крейсер или линкор.

};

