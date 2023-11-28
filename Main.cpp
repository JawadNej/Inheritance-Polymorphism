// Jawad Nejem C++ 1202 11/26/2023 

// main.cpp
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
    // Test Vehicle
    Vehicle vehicle;
    string manufacturer;
    int yearBuilt;

    cout << "Enter vehicle manufacturer: ";
    cin >> manufacturer;
    vehicle.setManufacturer(manufacturer);

    cout << "Enter year built: ";
    cin >> yearBuilt;
    vehicle.setYearBuilt(yearBuilt);

    cout << "\nVehicle Information:\n";
    vehicle.displayInfo();

    // Test Car
    Car car;
    int numDoors;

    cout << "\nEnter car manufacturer: ";
    cin >> manufacturer;
    car.setManufacturer(manufacturer);

    cout << "Enter year built: ";
    cin >> yearBuilt;
    car.setYearBuilt(yearBuilt);

    cout << "Enter number of doors: ";
    cin >> numDoors;
    car.setNumDoors(numDoors);

    cout << "\nCar Information:\n";
    car.displayInfo();

    // Test Truck
    Truck truck;
    double towingCapacity;

    cout << "\nEnter truck manufacturer: ";
    cin >> manufacturer;
    truck.setManufacturer(manufacturer);

    cout << "Enter year built: ";
    cin >> yearBuilt;
    truck.setYearBuilt(yearBuilt);

    cout << "Enter towing capacity (in tons): ";
    cin >> towingCapacity;
    truck.setTowingCapacity(towingCapacity);

    cout << "\nTruck Information:\n";
    truck.displayInfo();

    return 0;
}