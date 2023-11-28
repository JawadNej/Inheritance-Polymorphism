// Car.h
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
public:
    Car();  // Constructor
    void setNumDoors(int numDoors);
    int getNumDoors() const;
    void displayInfo() const;

private:
    int numDoors;
};

#endif
