#include "FlowerArranger.h"
#include <iostream>


FlowerArranger::FlowerArranger(std::string name) : Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowersBouquet)
{
	std::cout << "Flower Arranger " << getName() << " arranges flowers." << std::endl;
	flowersBouquet->arrange();
}

