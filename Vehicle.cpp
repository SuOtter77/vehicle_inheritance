#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(string manufacturerName, int year) {
	manufacturer = manufacturerName;
	yearBuilt = year;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

int Vehicle::getYear() {
	return yearBuilt;
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}