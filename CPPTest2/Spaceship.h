#pragma once
#include <random>		// для std::random_device и std::mt19937
#include <vector>  
#include <string>  

#include "CoreEnums.h"
using namespace std;

class ShipPart;

class Spaceship
{
public:
	double speed;
	Size shipSize;
	string name;

	double getSpeed();
	double getFirePower();
	Spaceship();
	~Spaceship();

private:
	int mass;
	vector<ShipPart> construction;
};


class MovingSpaceship {
	Spaceship *spaceship;
	double from;
	double to;
	double curPoint;
	bool isAI;
};

enum ShipPartEnum {

};

class ShipPart {
	int SizeCells;
	//ShipPartEnum ShipPart;
};


