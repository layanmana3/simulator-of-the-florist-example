#include "Grower.h"
#include "FlowersBouquet.h"
#include "Gardener.h"
Grower::Grower(std::string name, Gardener* gardener) : Person(name), gardener(gardener)
{

}

FlowersBouquet* Grower::preperOrder(std::vector<std::string> Bouquet)
{
	std::cout << "Grower " << this->getName() << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
	FlowersBouquet* bouquet = gardener->preperOrder(Bouquet);
	std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << this->getName() << "." << std::endl;
	return bouquet;
}

std::string Grower::getName()
{
	return Person::getName();
}
