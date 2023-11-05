#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) :Person(name)
{
}

std::string DeliveryPerson::getName()
{
    return Person::getName();
}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* flowersBouquet)
{
    std::cout<< "Delivery Person " << getName() << " delivers flowers " << p->getName() << "." << std::endl;
    p->acceptFlowers(flowersBouquet);
}
