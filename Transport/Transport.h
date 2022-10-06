#pragma once
#include <string>
#include<iostream>
using namespace std;
class Transport
{
protected:
	char* name;
	double weight;
	double fuel;
	int passenger_capacity;
public:
	Transport();
	Transport(const char* name, double weight, double fuel, int passenger_capacity);
	virtual void Input() = 0;
	virtual void Print() const = 0;
    virtual double Fuel_consumption() = 0;
	virtual~Transport() = 0;
};

