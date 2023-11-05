#pragma once
#include "Person.h"
#include "Gardener.h"
#include <iostream>
#include "FlowersBouquet.h"

class Grower :
    public Person
{
private:
	Gardener* gardener;
public:
	Grower(std::string, Gardener*);
	std::string getName();
	FlowersBouquet* preperOrder(std::vector<std::string> Bouquet);

};

