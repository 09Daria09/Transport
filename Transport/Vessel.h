#pragma once
#include "Transport.h"
class Vessel :
    public Transport
{
    string ocean;
public:
    Vessel();
    Vessel(string name, double weight, double fuel, int passenger_capacity, string ocean);
    void Input();
    void Print()const;
    double Fuel_consumption();
};

