#pragma once
#include <string>
#include<iostream>
using namespace std;
class Transport
{
protected:
	string name;
	double weight;
	double fuel;
	int passenger_capacity;
public:
	Transport();
	Transport(string name, double weight, double fuel, int passenger_capacity);
	virtual void Input();
	virtual void Print() const;
	virtual double Fuel_consumption();

};

