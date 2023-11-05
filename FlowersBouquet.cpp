#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector < std::string > bouquet)
{
	this->bouquet = bouquet;
	this->is_arranged = false;
}
std::vector<std::string> FlowersBouquet::getBouquet()
{
	return bouquet;

}

void FlowersBouquet::arrange()
{
	is_arranged = true;
}

