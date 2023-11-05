#include "Gardener.h"
#include "Person.h"
#include "FlowersBouquet.h"
Gardener::Gardener(std::string name) : Person(name)
{
}

FlowersBouquet* Gardener::preperOrder(std::vector<std::string> Bouquet)
{
	std::cout << "Gardener " << this->getName() << " prepares flowers." << std::endl;
	return  new FlowersBouquet(Bouquet);
}

std::string Gardener::getName()
{
	return Person::getName();
}
