#pragma once
#include <random>		// для std::random_device и std::mt19937
#include <vector>  
#include <string>  

using namespace std;

class Planet
{
public:
	Planet();
	~Planet();

	string Name;
	int Size;	// это инт. сайз должен быть - маленький, срений, большой, экстрабольшой. в общем градация такая же как с кораблями. видимо, надо делать энум.	
};
class Star
{
public:
	Star(int _x, int _y, int _planetCount);
	~Star();

	int x;					// координата X
	int y;					// координата Y
	string Name;
	vector<Planet> Planets;		// планеты
};
class Universe
{
public:
	Universe(int _starCount, int  _xSize, int  _ySize);
	~Universe();
	double xSize;
	double ySize;
	string Name;
	vector<Star> Stars;
};

