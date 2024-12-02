#pragma once
#ifndef TRU_HEADER
#define TRU_HEADER
#include "Vehicle.h" // includes <string>

class Truck : public Vehicle {
	int towingCapacity;
public:
	Truck(std::string manufacturerName, int year, int towingCap);
	int getTowingCapacity();
	void displayInfo(); // call Vehicle displayInfo
};

#endif
