#include <iostream>
#include <string> // clarify even though these are defined in Vehicle.h
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

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
	getline(cin, manu);
	cout << "Enter the year built: ";
	cin >> year;
	Vehicle vehicle(manu, year);
	cout << "Vehicle Information:\n";
	vehicle.displayInfo();
	cout << endl;
	
	cout << "Car:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manu);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	Car car(manu, year, doors);
	cout << "Vehicle Information:\n";
	car.displayInfo();
	cout << endl;

	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manu);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> cap;
	Truck truck(manu, year, cap);
	cout << "Vehicle Information:\n";
	truck.displayInfo();
	cout << endl;
	
	return 0;
}