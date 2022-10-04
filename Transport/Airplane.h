#pragma once
#include "Transport.h"
class Airplane :
    public Transport
{
    string airport;
public:
    Airplane();
    Airplane(string name, double weight, double fuel, int passenger_capacity, string airport);
    void Input();
    void Print()const;
    double Fuel_consumption();
};

