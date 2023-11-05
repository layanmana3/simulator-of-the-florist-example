#pragma once
#include "Person.h"
#include "FlowersBouquet.h"
#include <iostream>
class Gardener :
    public Person
{
public:
	Gardener(std::string);
	FlowersBouquet* preperOrder(std::vector < std::string >);
	std::string getName();
};

