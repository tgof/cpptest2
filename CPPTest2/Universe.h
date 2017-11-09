#pragma once
#include <random>		// ��� std::random_device � std::mt19937
#include <vector>  
#include <string>  

using namespace std;

class Planet
{
public:
	Planet();
	~Planet();

	string Name;
	int Size;	// ��� ���. ���� ������ ���� - ���������, ������, �������, �������������. � ����� �������� ����� �� ��� � ���������. ������, ���� ������ ����.	
};
class Star
{
public:
	Star(int _x, int _y, int _planetCount);
	~Star();

	int x;					// ���������� X
	int y;					// ���������� Y
	string Name;
	vector<Planet> Planets;		// �������
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

