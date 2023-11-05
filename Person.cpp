#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name)
{}

std::string Person::getName()
{
    return  this->name;
}

void Person::acceptFlowers(FlowersBouquet* bouquet)
{
    std::cout << getName() << " accepts the flowers: " << Print(bouquet->getBouquet())<< std::endl;
}

std::string Person::Print(std::vector<std::string> flowerType)
{
    std::string str = "";
    for (int i = 0; i < flowerType.size(); i++)
        str = str.append(flowerType[i]).append(", ");
    str = str.substr(0, str.length() - 2);
    str.append(".");
    return str;
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> flowers)
{
    std::string concatenate = flowers[0];
    std::cout << this->name << " orders flowers to " << p->getName() << " from Florist " << f->getName() << ": " << Print(flowers)<< std::endl;
    f->acceptOrder(p, flowers);
}
