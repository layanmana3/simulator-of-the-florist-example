#pragma once
#include <vector>
#include <string>
#include <iostream>
class FlowersBouquet
{
private:
	std::vector < std::string > bouquet;
	bool is_arranged;
public:
	FlowersBouquet(std::vector < std::string > bouquet);
	virtual std::vector < std::string > getBouquet();
	void arrange();

};

