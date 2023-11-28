// Vehicle.cpp
#include "Vehicle.h"
#include <iostream>
using namespace std;

// Implementations of Vehicle methods
Vehicle::Vehicle() : yearBuilt(0) {}

void Vehicle::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << endl;
}
