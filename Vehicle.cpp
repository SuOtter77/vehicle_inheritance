#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(string manufacturerName, int year) {
	manufacturer = manufacturerName;
	yearBuilt = year;
	// initialize base class
}

string Vehicle::getManufacturer() {
	return manufacturer;
	// get manufacturer 
}

int Vehicle::getYear() {
	return yearBuilt;
} //g et the year

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
	//recite basic info
}