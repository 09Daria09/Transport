#pragma once
#include "Transport.h"
class Bicycle :
    public Transport
{
    string bike_firm;
public:
    Bicycle();
    Bicycle(string name, double weight, double fuel, int passenger_capacity, string bike_firm);
    void Input();
    void Print()const;
    double Fuel_consumption();
};

