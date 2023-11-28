#include "Truck.h"
#include <iostream>
using namespace std;

// Implementations of Truck methods
Truck::Truck() : towingCapacity(0.0) {}

void Truck::setTowingCapacity(double towingCapacity) {
    this->towingCapacity = towingCapacity;
}

double Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();  // Call the base class method
    cout << "Towing Capacity: " << towingCapacity << " tons" << endl;
}
