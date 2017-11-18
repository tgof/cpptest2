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
	int placeCount;		// ������� � ������� ������ ���������� �������
	int mass;			// ����������, �����
	int driverCount;	// ���������� �������. �� ����� ���� ��� �����������, � ����� ������ ���� ���� ������ � ����� "�������". ��� ������ ���.
	int gunPoints;
	Size shipClass;		// ��� ������ ��������� - ����� �������, �.�. ������ ���, �������, ������� ��� ������. ��, ��� ������ ������������.

};

