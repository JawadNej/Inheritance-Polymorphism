// Car.cpp
#include "Car.h"
#include <iostream>
using namespace std;

// Implementations of Car methods
Car::Car() : numDoors(0) {}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();  // Call the base class method
    cout << "Number of Doors: " << numDoors << endl;
}
