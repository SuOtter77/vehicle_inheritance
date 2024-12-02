#pragma once
#ifndef VEH_HEADER
#define VEH_HEADER
#include <string>
#include <iostream>

class Vehicle {
	std::string manufacturer;
	int yearBuilt;

public:
	Vehicle(std::string manufacturerName, int year); // implementation in Vehicle.cpp
	std::string getManufacturer();
	int getYear();
	void displayInfo();
	// Setters would be needed if we weren't setting all values in the constructor
};

#endif
