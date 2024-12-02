#pragma once
#ifndef CAR_HEADER
#define CAR_HEADER
#include "Vehicle.h" // includes <string>

class Car : public Vehicle {
	int numDoors;
public:
	Car(std::string manufacturerName, int year, int numberDoors);
	int getNumDoors(); // getter!s
	void displayInfo(); // call Vehicle displayInfo
};

#endif
