#pragma once
#include "Transport.h"
class JeepCar :
    public Transport
{
    string color;
public:
    JeepCar();
    JeepCar(string name, double weight, double fuel, int passenger_capacity, string color);
    void Input();
    void Print()const;
    double Fuel_consumption();
};

