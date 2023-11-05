#include <string>
#include <iostream>
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "Florist.h"


// Constructor 
Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson)
    : Person(name), wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson)
{
}

void Florist::acceptOrder(Person* person, std::vector<std::string> flowerType)
{
    std::cout << "Florist " << getName() << " forwards request to Wholesaler " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* fb = wholesaler->acceptOrder(flowerType);
    std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << getName() << "." << std::endl;
    std::cout << "Florist " << getName() << " request flowers arrangement from Flower Arranger " << flowerArranger->getName() << "." << std::endl;
    flowerArranger->arrangeFlowers(fb);
    std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << getName() << "." << std::endl;
    std::cout << "Florist " << getName() << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(person, fb);
}

std::string Florist::getName()
{
    return Person::getName();
}