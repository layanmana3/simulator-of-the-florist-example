#pragma once
#include "Person.h"
#include "FlowersBouquet.h"

class DeliveryPerson :
    public Person
{
public:
	DeliveryPerson(std::string);
	std::string getName();
	void deliver(Person*, FlowersBouquet*);
};

