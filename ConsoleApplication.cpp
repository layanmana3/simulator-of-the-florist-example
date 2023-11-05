// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iostream>
#include "Person.h"
//#include "florist.h"
#include "Gardener.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include "FlowerArranger.h"
#include "Wholesaler.h"
#include "DeliveryPerson.h"
#include "Florist.h"
#include <vector>



int main()
{
	DeliveryPerson* delivery = new DeliveryPerson("Dylan");
	FlowerArranger* flowerarranger = new FlowerArranger("Flora");
	Gardener* gardener = new Gardener("Garett");
	Grower* grower = new Grower("Gray", gardener);
	Wholesaler* wholesaler = new Wholesaler("Watson", grower);
	std::vector < std::string > bouquet = {"Roses","Violets","Gladiolus" };
	Florist* florist = new Florist("Fred", wholesaler, flowerarranger, delivery);
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	chris->orderFlowers(florist, robin, bouquet);

	delete(delivery);
	delete(flowerarranger);
	delete(gardener);
	delete(grower);
	delete(wholesaler);
	delete(chris);
	delete(robin);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
