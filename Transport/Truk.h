#pragma once
#include "Transport.h"
class Truk :
    public Transport
{
    double truck_capacity;
public:
    Truk();
    Truk(string name, double weight, double fuel, int passenger_capacity, double truk_capacity);
    void Input();
    void Print()const;
    double Fuel_consumption();

};

