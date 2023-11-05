#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower)
{

}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> bouquet)
{
    std::cout << "Wholesaler " << this->getName() << " forwards the request to Grower " << grower->getName() << "." << std::endl;
    FlowersBouquet* bouquet1 = grower->preperOrder(bouquet);
    std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << this->getName() << "." << std::endl;
    return bouquet1;
}

std::string Wholesaler::getName()
{
    return Person::getName();
}
