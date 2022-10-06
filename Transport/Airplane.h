#pragma once
#include "Transport.h"
class Airplane :
    public Transport
{
    char* airport;
public:
    Airplane();
    Airplane(const char* name, double weight, double fuel, int passenger_capacity, const char* airport);

    Airplane(const Airplane& obj);
    Airplane& operator=(const Airplane& obj);

    void Input();
    void Print()const;
    double Fuel_consumption();
    ~Airplane();
};

