#pragma once
#include "FlowersBouquet.h"
#include "Person.h"
#include <iostream>
#include <string>

class FlowerArranger :
    public Person
{
public:
	FlowerArranger(std::string);
	void arrangeFlowers(FlowersBouquet*);
};

