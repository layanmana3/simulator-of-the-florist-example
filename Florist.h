#pragma once
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>


class Florist :
    public Person
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
	void acceptOrder(Person*, std::vector<std::string>);
	std::string getName();
};

