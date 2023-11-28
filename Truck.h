// Truck.h
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
public:
    Truck();  // Constructor
    void setTowingCapacity(double towingCapacity);
    double getTowingCapacity() const;
    void displayInfo() const;

private:
    double towingCapacity;
};

#endif
