#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "FlowersBouquet.h"
class Florist;
class Person
{
protected:
	std::string name;
public:
	Person(std::string);
	virtual std::string getName();
	void orderFlowers(Florist*, Person*, std::vector < std::string >);
	void acceptFlowers(FlowersBouquet*);
	std::string Print(std::vector<std::string>);


};

