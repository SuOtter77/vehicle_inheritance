#include <iostream>
#include <string> // clarify even though these are defined in Vehicle.h
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;
//driver driver drvier

int main() {
	// temporary vars.
	string manu;
	int year;
	int doors;
	int cap;
	
	cout << "Vehicle Program\n\n";
	// aint got time for endl endl
	cout << "Vehicle:\n";
	
	cout << "Enter the manufacturer: ";
	getline(cin, manu); // transfer input to temporary var
	cout << "Enter the year built: ";
	cin >> year;
	Vehicle vehicle(manu, year); // put temporary vars into the vehicle
	cout << "Vehicle Information:\n";
	vehicle.displayInfo(); // display what was already entered as a showcase
	cout << endl;
	
	cout << "Car:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore(); // stop last sin from interfering with the righteousness of Getline
	getline(cin, manu);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	Car car(manu, year, doors);
	cout << "Vehicle Information:\n";
	car.displayInfo();
	cout << endl; // enhance readability

	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();// stop last sin from interfering with the righteousness of Getline
	getline(cin, manu);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> cap;
	Truck truck(manu, year, cap);
	cout << "Vehicle Information:\n"; // display vehicle info???
	truck.displayInfo();
	cout << endl;//prettier end to the program
	
	return 0;
}