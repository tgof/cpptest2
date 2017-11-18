#pragma once

#include "CoreEnums.h"
#include "stdafx.h"
#include <string>  
#include <vector>  
#include <time.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <random>		// для std::random_device и std::mt19937

using namespace std;

class Person
{
public:
	Person();
	~Person();

	void interact(Person *other);

	int age;
	string name;
	int mood;
	vector<pair<string, int>> profs;
	vector<string> traits;
	Race race;

};

 
