#include "Car.h"
using namespace std;

Car::Car(string manufacturerName, int year, int numberDoors) : Vehicle(manufacturerName, year) {
	numDoors = numberDoors;
}

int Car::getNumDoors() {
	return numDoors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of doors: " << numDoors << endl;
}