#include "Car.h"
using namespace std;

Car::Car(string manufacturerName, int year, int numberDoors) : Vehicle(manufacturerName, year) {
	numDoors = numberDoors;
	// initialize class and base class
}

int Car::getNumDoors() {
	return numDoors; // uh, get the number of doors, duh?
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of doors: " << numDoors << endl;
	// recite number of  doors
}