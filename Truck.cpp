#include "Truck.h"
using namespace std;

Truck::Truck(string manufacturerName, int year, int towingCap) : Vehicle(manufacturerName, year) {
	towingCapacity = towingCap;
}

int Truck::getTowingCapacity() {
	return towingCapacity;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}