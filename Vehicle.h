// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
public:
    Vehicle();  // Constructor
    void setManufacturer(const string& manufacturer);
    string getManufacturer() const;
    void setYearBuilt(int yearBuilt);
    int getYearBuilt() const;
    void displayInfo() const;

private:
    string manufacturer;
    int yearBuilt;
};

#endif
