#pragma once
#include "Transport.h"
class Bicycle :
    public Transport
{
    char* bike_firm;
public:
    Bicycle();
    Bicycle(const char* name, double weight, double fuel, int passenger_capacity, const char* bike_firm);

    Bicycle(const Bicycle& obj);
    Bicycle& operator=(const Bicycle& obj);

    void Input();
    void Print()const;
    double Fuel_consumption();

    ~Bicycle();
};

